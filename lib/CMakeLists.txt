add_executable(app ../main.cpp meteo.cpp city.cpp ui.cpp)
target_link_libraries(app
        PRIVATE cpr::cpr
        PRIVATE ftxui::dom
        PRIVATE ftxui::component
        PRIVATE nlohmann_json::nlohmann_json
)


