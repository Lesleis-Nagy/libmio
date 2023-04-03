//
// Created by Lesleis Nagy on 20/03/2023.
//

#pragma once

#include <string>

std::string sanitise_string(const std::string & str_in);

std::vector<int> comma_delim_sints_to_ints(const std::string & str_in);

std::vector<int> sints_range_to_ints(const std::string & str_in);
