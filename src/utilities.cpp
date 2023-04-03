//
// Created by Lesleis Nagy on 20/03/2023.
//

#include <vector>
#include <sstream>

#include "utilities.hpp"

std::string sanitise_string(const std::string & str_in) {
    std::string str_clean = str_in;
    str_clean.erase(std::remove(str_clean.begin(), str_clean.end(), '"'), str_clean.end());
    str_clean.erase(std::remove(str_clean.begin(), str_clean.end(), '\''), str_clean.end());
    return str_clean;
}

std::vector<int> comma_delim_sints_to_ints(const std::string & str_in) {
    std::vector<int> result;
    std::stringstream ss(str_in);
    while (ss.good()) {
        std::string substr;
        std::getline(ss, substr, ',');
        result.push_back(std::stoi(substr));
    }
    return result;
}

std::vector<int> sints_range_to_ints(const std::string & str_in) {
    std::vector<int> start_end;
    std::stringstream ss(str_in);

    // Extract the start/end of the range.
    while (ss.good()) {
        std::string substr;
        std::getline(ss, substr, '-');
        start_end.push_back(std::stoi(substr));
    }

    // Check that there are two values (a start and an end).
    if (start_end.size() != 2) {
        throw std::runtime_error("While attempting to parse range string - couldn't extract two values.");
    }

    // Get the integer values between start and end (inclusive).
    std::vector<int> result;
    for (int i = start_end[0]; i <= start_end[1]; ++i) {
        result.push_back(i);
    }

    // Return the result.
    return result;
}
