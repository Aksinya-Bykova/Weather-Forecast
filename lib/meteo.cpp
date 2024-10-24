#include "meteo.h"

WeatherForecast::WeatherForecast(const std::string& city_name) {
    city_ = City(city_name);
    std::pair<double, double> cords = city_.get_cords();
}

std::vector<UnitForecast> WeatherForecast::get_weather_forecast(std::string start_date, std::string end_date) {
    return DayForecast::get_day_forecast(city_.get_cords(), start_date, end_date);
}

std::vector<UnitForecast>
DayForecast::get_day_forecast(std::pair<double, double> cords, std::string start_date, std::string end_date) {
    cpr::Response r =
            cpr::Get(cpr::Url{"https://api.open-meteo.com/v1/forecast"},
                     cpr::Parameters{
                             {"latitude",   std::to_string(cords.first)},
                             {"longitude",  std::to_string(cords.second)},
                             {"hourly",     "temperature_2m"},
                             {"hourly",     "relativehumidity_2m"},
                             {"hourly",     "precipitation"},
                             {"hourly",     "visibility"},
                             {"hourly",     "weather_code"},
                             {"hourly",     "windspeed_10m"},
                             {"start_date", start_date},
                             {"end_date",   end_date},
                     });

    if (r.status_code != 200) {
        throw;
    }

    std::vector<UnitForecast> res(4 * 7);
    nlohmann::json basicJson = nlohmann::json::parse(r.text);

    for (int i = 0; i < 7; ++i) {
        int j = i * 24 + morning_time_;
        res[i].precipitation_ = basicJson["hourly"]["precipitation"][j].get<double>();
        res[i].temperature_ = basicJson["hourly"]["temperature_2m"][j].get<double>();
        res[i].wind_speed_ = basicJson["hourly"]["windspeed_10m"][j].get<double>();
        res[i].visibility_ = basicJson["hourly"]["visibility"][j].get<uint8_t>();
        res[i].relative_humidity_ = basicJson["hourly"]["relativehumidity_2m"][j].get<double>();
        res[i].weather_code_ = basicJson["hourly"]["weather_code"][j].get<uint8_t>();
    }

    for (int i = 0; i < 7; ++i) {
        int j = i * 24 + afternoon_time_;
        res[i].precipitation_ = basicJson["hourly"]["precipitation"][j].get<double>();
        res[i].temperature_ = basicJson["hourly"]["temperature_2m"][j].get<double>();
        res[i].wind_speed_ = basicJson["hourly"]["windspeed_10m"][j].get<double>();
        res[i].visibility_ = basicJson["hourly"]["visibility"][j].get<uint8_t>();
        res[i].relative_humidity_ = basicJson["hourly"]["relativehumidity_2m"][j].get<double>();
        res[i].weather_code_ = basicJson["hourly"]["weather_code"][j].get<uint8_t>();
    }
    for (int i = 0; i < 7; ++i) {
        int j = i * 24 + evening_time_;
        res[i].precipitation_ = basicJson["hourly"]["precipitation"][j].get<double>();
        res[i].temperature_ = basicJson["hourly"]["temperature_2m"][j].get<double>();
        res[i].wind_speed_ = basicJson["hourly"]["windspeed_10m"][j].get<double>();
        res[i].visibility_ = basicJson["hourly"]["visibility"][j].get<uint8_t>();
        res[i].relative_humidity_ = basicJson["hourly"]["relativehumidity_2m"][j].get<double>();
        res[i].weather_code_ = basicJson["hourly"]["weather_code"][j].get<uint8_t>();
    }

    for (int i = 0; i < 7; ++i) {
        int j = i * 24 + night_time_;
        res[i].precipitation_ = basicJson["hourly"]["precipitation"][j].get<double>();
        res[i].temperature_ = basicJson["hourly"]["temperature_2m"][j].get<double>();
        res[i].wind_speed_ = basicJson["hourly"]["windspeed_10m"][j].get<double>();
        res[i].visibility_ = basicJson["hourly"]["visibility"][j].get<uint8_t>();
        res[i].relative_humidity_ = basicJson["hourly"]["relativehumidity_2m"][j].get<double>();
        res[i].weather_code_ = basicJson["hourly"]["weather_code"][j].get<uint8_t>();
    }

    return res;
}
