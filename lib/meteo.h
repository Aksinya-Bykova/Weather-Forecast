#ifndef LABWORK7_METEO_H
#define LABWORK7_METEO_H

#include <iostream>
#include <nlohmann/json.hpp>
#include <vector>
#include "city.h"
#include "cpr/cpr.h"

struct UnitForecast {
    double temperature_;
    double wind_speed_;
    uint8_t visibility_;
    double relative_humidity_;
    double precipitation_;
    uint8_t weather_code_;
};

class DayForecast {
private:
    static const int morning_time_ = 6;
    static const int afternoon_time_ = 12;
    static const int evening_time_ = 18;
    static const int night_time_ = 0;
public:
    DayForecast() = default;

    ~DayForecast() = default;

    static std::vector<UnitForecast> get_day_forecast(std::pair<double, double> cords,
                                                      std::string start_date, std::string end_date);
};

class WeatherForecast {
private:
    City city_;
public:
    WeatherForecast() = default;

    explicit WeatherForecast(const std::string& city_name);

    ~WeatherForecast() = default;

    [[nodiscard]] std::vector<UnitForecast> get_weather_forecast(std::string start_date, std::string end_date);
};

#endif //LABWORK7_METEO_H
