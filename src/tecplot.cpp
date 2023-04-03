#include "tecplot.hpp"

/********************************************************************************************************************/
/* TecplotVariable methods                                                                                          */
/********************************************************************************************************************/

bool TecplotVariable::is_full() const {
    switch (_type) {
        case (NODAL): {
            if (_values.size() == _nvert) {
                return true;
            } else {
                return false;
            }
        }
        case (CELLCENTERED): {
            if (_values.size() == _nelem) {
                return true;
            } else {
                return false;
            }
        }
    }
}

