//
// Created by Lesleis Nagy on 20/03/2023.
//

#define CATCH_CONFIG_MAIN

#include <catch/catch.hpp>

#include <iostream>

#include <tecplot.hpp>


TEST_CASE("Test edge_length() function for 'double' type.", "Vector3D geometry") {

    auto file_name = "test-data/test1.tec";

    auto parser_ctx = TecplotParserContext();

    auto raw_file_data = parser_ctx.parse(file_name);

    std::cout << "Title: " << raw_file_data.title() << "\n";

    std::cout << "Variables:" << "\n";
    for (const auto &var: raw_file_data.variables()) {
        std::cout << "\t" << var << "\n";
    }

    std::cout << "Zones:" << "\n";
    for (const auto &zone: raw_file_data.zones()) {
        std::cout << "\t" << "Zone title: '" << zone.title()
                          << "', no. of elems: " << zone.nelem()
                          << "', no. of verts: " << zone.nvert() << "\n";
    }

}