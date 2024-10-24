cmake_minimum_required(VERSION 3.27)

project(
        labwork7
#        VERSION 0.1.0
        LANGUAGES CXX
        VERSION 1.0.0
)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

# request lib
FetchContent_Declare(cpr
        GIT_REPOSITORY https://github.com/libcpr/cpr.git
        GIT_TAG 67e2a4d2a76ed520e352f10e651a6f98e220dbd7
)
FetchContent_MakeAvailable(cpr)

# json lib
FetchContent_Declare(json
        GIT_REPOSITORY https://github.com/nlohmann/json.git
        GIT_TAG v3.11.3
)
FetchContent_MakeAvailable(json)

# TUI lib
FetchContent_Declare(ftxui
        GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui.git
        GIT_TAG v5.0.0
)
FetchContent_GetProperties(ftxui)
if (NOT ftxui_POPULATED)
    FetchContent_Populate(ftxui)
    add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif ()


add_subdirectory(lib)
