//
// Created by Lesleis Nagy on 20/03/2023.
//

#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include <utilities.hpp>

TEST_CASE("Test sanitise_string() - double quotes.", "Normal usage.") {

    auto expected = "this is a string";

    auto output = sanitise_string("\"this is a string\"");

    REQUIRE(expected == output);

}

TEST_CASE("Test sanitise_string - single quotes.", "Normal usage.") {

    auto expected = "this is a string";

    auto output = sanitise_string("'this is a string'");

    REQUIRE(expected == output);

}

TEST_CASE("Test comma_delim_sints_to_ints() - no spaces.", "Normal usage.") {

    std::vector<int> expected = {1,2,3,5,7};

    std::vector<int> output = comma_delim_sints_to_ints("1,2,3,5,7");

    REQUIRE(expected.size() == output.size());
    for (int i = 0; i < expected.size(); ++i) {
        REQUIRE(expected[i] == output[i]);
    }

}

TEST_CASE("Test comma_delim_sints_to_ints() - with spaces.", "Normal usage.") {

    std::vector<int> expected = {1,2,3,5,7};

    std::vector<int> output = comma_delim_sints_to_ints("1, 2,\t3, 5,    7");

    REQUIRE(expected.size() == output.size());
    for (int i = 0; i < expected.size(); ++i) {
        REQUIRE(expected[i] == output[i]);
    }

}

TEST_CASE("Test sints_range_to_ints() - no spaces.", "Normal usage.") {

    std::vector<int> expected = {2,3,4,5,6};

    std::vector<int> output = sints_range_to_ints("2-6");

    REQUIRE(expected.size() == output.size());
    for (int i = 0; i < expected.size(); ++i) {
        REQUIRE(expected[i] == output[i]);
    }

}

TEST_CASE("Test sints_range_to_ints() - with spaces.", "Normal usage.") {

    std::vector<int> expected = {2,3,4,5,6};

    std::vector<int> output = sints_range_to_ints("2 -\t6");

    REQUIRE(expected.size() == output.size());
    for (int i = 0; i < expected.size(); ++i) {
        REQUIRE(expected[i] == output[i]);
    }

}
