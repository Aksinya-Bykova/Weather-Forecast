#ifndef LABWORK7_CITY_H
#define LABWORK7_CITY_H

#include <iostream>
#include <nlohmann/json.hpp>
#include "cpr/cpr.h"

class City {
private:
    std::string name_;
    double latitude_;
    double longitude_;

    void set_cords();

public:
    City() = default;

    explicit City(const std::string& name);

    std::pair<double, double> get_cords();
};

#endif //LABWORK7_CITY_H
