add_library(Sensor
  sensor.c
  sensor.h
)
target_include_directories(Sensor
  PUBLIC
    .
)
target_link_libraries(Sensor
  PUBLIC
    Uart
  PRIVATE
    Logger
)

