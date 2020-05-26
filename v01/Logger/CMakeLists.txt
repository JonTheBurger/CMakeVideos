add_library(Logger
  logger.c
  logger.h
)
target_include_directories(Logger
  PUBLIC
    .
)

