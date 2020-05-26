cmake_minimum_required(VERSION 3.10)
project(v01)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(Logger)
add_subdirectory(Sensor)
add_subdirectory(Uart)

add_executable(main
  main.c
)
target_link_libraries(main
  PRIVATE
    Sensor
)

