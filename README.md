## Data Source

- [Open-Meteo](https://open-meteo.com/en/docs#latitude=59.94&longitude=30.31&hourly=temperature_2m&forecast_days=16) for forecasts
- [Api-Ninjas](https://api-ninjas.com/api/city) for determining coordinates by city name

## Usage

- Display the weather forecast for several days ahead (default value set in config)
- Update at a specified frequency (set in config)
- Switch between cities using the "n" and "p" keys
- Exit the program with the Esc key
- Increase/decrease the number of forecast days by pressing the "+" and "-" keys

## Display

![image](interface.png) Screenshot taken from https://wttr.in

## Implementation

For [HTTP requests](https://en.wikipedia.org/wiki/HTTP) used [C++ Requests](https://github.com/libcpr/cpr).

## Config usage

```json
{
  "frequency": 1,
  "day_number": 2,
  "max_day": 7,
  "city_count": 3,
  "city_list": [
    "Moscow",
    "Berlin",
    "Samara"
  ],
  "start_day": "2024-05-08",
  "end_day": "2024-05-14"
}
```
