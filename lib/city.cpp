#include "city.h"

City::City(const std::string& name) : latitude_(0), longitude_(0) {
    name_ = name;
}

std::pair<double, double> City::get_cords() {
    set_cords();
    return std::make_pair(latitude_, longitude_);
}

void City::set_cords() {
    cpr::Response response = cpr::Get(cpr::Url{"https://api.api-ninjas.com/v1/city?name="} + cpr::Url{name_},
                                      cpr::Header{{"X-Api-Key", "9Zl7w5s4Yh6HzQvhVFp/Lg==aZZVDFodXciYFSjv"}});

    if (response.status_code == 200) {
        nlohmann::json basicJson = nlohmann::json::parse(response.text);
        latitude_ = stod(basicJson[0]["latitude"].dump());
        longitude_ = stod(basicJson[0]["longitude"].dump());
    } else {
        throw;
    }
}
