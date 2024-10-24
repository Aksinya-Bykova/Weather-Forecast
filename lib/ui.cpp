#include "ui.h"

std::map<uint8_t, Element> pictures{
        {0,  vbox({
                          text("      \\   /      "),
                          text("       .-.        "),
                          text("    ― (   ) ―    "),
                          text("       `-’        "),
                          text("      /   \\      ")
                  })},
        {1,  vbox({
                          text("      \\   /      "),
                          text("       .-.        "),
                          text("    ― (   ) ―    "),
                          text("       `-’        "),
                          text("      /   \\      ")
                  })},
        {2,  vbox({
                          text("   .( ).           "),
                          text("  (_._)_) .(  )    "),
                          text("         (_.)_._)  ")
                  })},
        {3,  vbox({
                          text("          .--.     "),
                          text("      .-( --- ).   "),
                          text("    (___.__)__)    ")
                  })},
        {45, vbox({
                          text("   _   -_   _-     "),
                          text("  -_   -  _ -- _   "),
                          text("    _  -  _- -_    "),
                          text("   - _-  _ _- -    ")
                  })},
        {48, vbox({
                          text("   _   _   _   _   "),
                          text("   _   _   _   _   "),
                          text("   _   _   _   _   "),
                          text("   _   _   _   _   ")
                  })},
        {51, vbox({
                          text("   .( ).           "),
                          text("  (_._)_)  .(  )   "),
                          text("  ' '   ' (_.)_._) "),
                          text("   '   '    '  '   "),
                          text("          '  '   ' ")
                  })},
        {53, vbox({
                          text("   .( ).           "),
                          text("  (_._)_)  .(  )   "),
                          text("  ' '   ' (_.)_._) "),
                          text("   '   '    '  '   "),
                          text("          '  '   ' ")
                  })},
        {55, vbox({
                          text("   .( ).           "),
                          text("  (_._)_)  .(  )   "),
                          text("  ' '   ' (_.)_._) "),
                          text("   '   '    '  '   "),
                          text("          '  '   ' ")
                  })},
        {56, vbox({
                          text("   .( ).           "),
                          text("  (_._)_)  .(  )   "),
                          text("  ' '   ' (_.)_._) "),
                          text("   '   '    '  '   "),
                          text("          '  '   ' ")
                  })},
        {57, vbox({
                          text("   .( ).           "),
                          text("  (_._)_)  .(  )   "),
                          text("  ' '   ' (_.)_._) "),
                          text("   '   '    '  '   "),
                          text("          '  '   ' ")
                  })},
        {61, vbox({
                          text("   .( ).           "),
                          text("  (_._)_)  .(  )   "),
                          text("  ' '   ' (_.)_._) "),
                          text("   '   '    '  '   "),
                          text("          '  '   ' ")
                  })},
        {63, vbox({
                          text("   .( ).           "),
                          text("  (_._)_)  .(  )   "),
                          text("  ' '   ' (_.)_._) "),
                          text("   '   '    '  '   "),
                          text("          '  '   ' ")
                  })},
        {66, vbox({
                          text("   .( ).           "),
                          text("  (_._)_)  .(  )   "),
                          text("  ' '   ' (_.)_._) "),
                          text("   '   '    '  '   "),
                          text("          '  '   ' ")
                  })},
        {65, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("     / /  /  /     "),
                          text("    / /  /  /      ")
                  })},
        {67, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("     / /  /  /     "),
                          text("    / /  /  /      ")
                  })},
        {80, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("     / /  /  /     "),
                          text("    / /  /  /      ")
                  })},
        {81, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("     / /  /  /     "),
                          text("    / /  /  /      ")
                  })},
        {82, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("     / /  /  /     "),
                          text("    / /  /  /      ")
                  })},
        {71, vbox({
                          text("   .( ).           "),
                          text("  (_._)_)  .(  )   "),
                          text("  *   *  (_.)_._)  "),
                          text("     *    *    *   "),
                          text("        *    *     ")
                  })},
        {73, vbox({
                          text("   .( ).           "),
                          text("  (_._)_)  .(  )   "),
                          text("  *   *  (_.)_._)  "),
                          text("     *    *    *   "),
                          text("        *    *     ")
                  })},
        {75, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("    * *  * * *     "),
                          text("   * * * * * *     ")
                  })},
        {85, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("    * *  * * *     "),
                          text("   * * * * * *     ")
                  })},
        {86, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("    * *  * * *     "),
                          text("   * * * * * *     ")
                  })},
        {77, vbox({
                          text("          .--.      "),
                          text("      .-( --- ).    "),
                          text("     (___.__)__)    "),
                          text("     o   0   o      "),
                          text("   o   o     o     "),
                  })},
        {95, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("      _/  _/       "),
                          text("     /   /         ")
                  })},
        {96, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("    o  _/  _/      "),
                          text("      / o /  o     "),
                  })},
        {99, vbox({
                          text("         .--.      "),
                          text("     .-( --- ).    "),
                          text("    (___.__)__)    "),
                          text("    o  _/  _/      "),
                          text("      / o /  o     "),
                  })}
};

using namespace ftxui;

Element get_part_picture(const UnitForecast& weather) {
    if (pictures.find(weather.weather_code_) == pictures.end()) {
        throw std::invalid_argument("Incorrect weather code");
    }
    Element picture = pictures[weather.weather_code_];
    std::string temperature = std::to_string(weather.temperature_);
    std::string visibility = std::to_string(weather.visibility_);
    std::string relative_humidity = std::to_string(weather.relative_humidity_);
    std::string wind_speed = std::to_string(weather.wind_speed_);
    std::string precipitation = std::to_string(weather.precipitation_);

    return vbox({picture,
                 separator(),
                 text("temperature: " + temperature),
                 text("visibility: " + visibility),
                 text("relative humidity: " + relative_humidity),
                 text("wind speed: " + wind_speed),
                 text("precipitation: " + precipitation)
                }) | border;
}

void play() {
    std::ifstream ifs("config.json", std::ifstream::binary);
    nlohmann::json j;
    ifs >> j;
    ifs.close();

    size_t current_city = 0;
    int day_count = j["day_number"].get<int>();
    int max_day = j["max_day"].get<int>();
    int city_count = j["city_count"].get<int>();

    std::vector<std::string> city_names(city_count);
    for (int i = 0; i < city_count; ++i) {
        city_names[i] = j["city_list"][i].get<std::string>();
    }

    std::string start_day = j["start_day"].get<std::string>();
    std::string end_day = j["end_day"].get<std::string>();

    WeatherForecast wf(city_names[current_city]);

    auto renderer = Renderer([&] {
        auto day_list = std::vector<ftxui::Element>{};
        std::vector<UnitForecast> uf = wf.get_weather_forecast(start_day, end_day);

        for (size_t i = 0; i < day_count; ++i) {
            day_list.push_back(
                    hbox(get_part_picture(uf[i * 4]),
                         get_part_picture(uf[i * 4 + 1]),
                         get_part_picture(uf[i * 4 + 2]),
                         get_part_picture(uf[i * 4 + 3])) | border);
        }

        return vbox(std::move(day_list));
    });
    auto screen = ScreenInteractive::FitComponent();

    renderer |= CatchEvent([&](Event event) {
        if (event == Event::Character('q')) {
            screen.ExitLoopClosure()();
            return true;
        }
        return false;
    });

    renderer |= CatchEvent([&](Event event) {
        if (event == Event::Escape) {
            screen.ExitLoopClosure()();
            return true;
        }
        return false;
    });

    renderer |= CatchEvent([&](Event event) {
        if (event == Event::Character('n')) {
            wf = WeatherForecast(city_names[(current_city - 1) % city_names.size()]);
            return true;
        }
        return false;
    });

    renderer |= CatchEvent([&](Event event) {
        if (event == Event::Character('p')) {
            wf = WeatherForecast(city_names[(current_city + 1) % city_names.size()]);
            return true;
        }
        return false;
    });

    renderer |= CatchEvent([&](Event event) {
        if (event == Event::Character('+')) {
            if (day_count < max_day) {
                ++day_count;
            }
            return true;
        }
        return false;
    });

    renderer |= CatchEvent([&](Event event) {
        if (event == Event::Character('-')) {
            if (day_count > 1) {
                --day_count;
            }
            return true;
        }
        return false;
    });

    screen.Loop(renderer);

    system("clear");
}
