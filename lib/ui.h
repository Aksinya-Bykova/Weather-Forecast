#ifndef LABWORK7_UI_H
#define LABWORK7_UI_H

#include <cstdint>
#include <map>

#include "../cmake-build-debug/_deps/ftxui-src/include/ftxui/dom/elements.hpp"
#include "../cmake-build-debug/_deps/ftxui-src/include/ftxui/screen/screen.hpp"
#include "../cmake-build-debug/_deps/ftxui-src/include/ftxui/screen/box.hpp"
#include "../cmake-build-debug/_deps/ftxui-src/include/ftxui/component/component.hpp"
#include "../cmake-build-debug/_deps/ftxui-src/include/ftxui/component/screen_interactive.hpp"

#include "meteo.h"

using namespace ftxui;

Element get_part_picture(const UnitForecast& weather);

void play();

#endif //LABWORK7_UI_H
