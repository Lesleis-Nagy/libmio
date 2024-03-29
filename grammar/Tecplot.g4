grammar Tecplot;

/*-------------------------------------------------------------------------------------------------------------------*/
/* Parser                                                                                                            */
/*-------------------------------------------------------------------------------------------------------------------*/

document
  : title variables zone (zone)*
  ;

title
  : TITLE EQUALS StringLiteral
  ;

variables
  : VARIABLES EQUALS StringLiteral (COMMA StringLiteral)*
  ;

zone_title
  : T EQUALS StringLiteral
  ;

zone_nvert
  : N EQUALS Integer
  ;

zone_nelem
  : E EQUALS Integer
  ;

zone_fe
  : F EQUALS FEBLOCK
  ;

zone_et
  : ET EQUALS TETRAHEDRON
  ;

zone_varlocation_indices
  : comma_separated_integer_list
  | range_integer_list
  ;

zone_varlocation
  : VARLOCATION EQUALS OPAREN OSQUARE zone_varlocation_indices CSQUARE EQUALS zone_vartype CPAREN
  ;

zone_vartype
  : CELLCENTERED
  | NODAL
  ;

zone_varshare_indices
  : comma_separated_integer_list
  | range_integer_list
  ;

zone_varshare_indices_list
  : zone_varshare_indices (COMMA zone_varshare_indices)*
  ;

zone_varshare
  : VARSHARELIST EQUALS OPAREN OSQUARE zone_varshare_indices_list CSQUARE EQUALS Integer CPAREN
  ;

zone_connectivity_share_zone
  : CONNECTIVITYSHAREZONE EQUALS Integer
  ;

zone_component
  : zone_title
  | zone_nvert
  | zone_nelem
  | zone_fe
  | zone_et
  | zone_varlocation
  | zone_varshare
  | zone_connectivity_share_zone
  ;

zone
  : ZONE zone_component (COMMA? zone_component)* zone_float_block (zone_integer_block)?
  ;

zone_float_block
  : Float+
  ;

zone_integer_block
  : Integer+
  ;

comma_separated_integer_list
  : Integer (COMMA Integer)*
  ;

range_integer_list
  : Integer NEGATIVE Integer
  ;

/*-------------------------------------------------------------------------------------------------------------------*/
/* Lexer                                                                                                             */
/*-------------------------------------------------------------------------------------------------------------------*/

// Tokens

TITLE:                 'TITLE'                 ;
VARIABLES:             'VARIABLES'             ;
ZONE:                  'ZONE'                  ;
T:                     'T'                     ;
N:                     'N'                     ;
E:                     'E'                     ;
F:                     'F'                     ;
FEBLOCK:               'FEBLOCK'               ;
ET:                    'ET'                    ;
TETRAHEDRON:           'TETRAHEDRON'           ;
VARLOCATION:           'VARLOCATION'           ;
CELLCENTERED:          'CELLCENTERED'          ;
NODAL:                 'NODAL'                 ;
VARSHARELIST:          'VARSHARELIST'          ;
CONNECTIVITYSHAREZONE: 'CONNECTIVITYSHAREZONE' ;

EQUALS:   '=' ;
DBLQUOTE: '"' ;
COMMA:    ',' ;
OPAREN:   '(' ;
CPAREN:   ')' ;
OSQUARE:  '[' ;
CSQUARE:  ']' ;
DECIMAL:  '.' ;
NEGATIVE: '-' ;
POSITIVE: '+' ;

// Basic lexer rules.

StringLiteral
  : UnterminatedStringLiteral '"'
  ;

UnterminatedStringLiteral
  : '"' (~["\\\r\n] | '\\' (. | EOF))*
  ;

Integer
  : [0-9]+
  ;

Float
  : NEGATIVE? [0-9]+ DECIMAL [0-9]+ 'E' (NEGATIVE | POSITIVE) [0-9]+
  ;

WhiteSpace
  : [ \n\t\r]+ -> skip
  ;
