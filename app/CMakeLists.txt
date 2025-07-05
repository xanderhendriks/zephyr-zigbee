cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(zephyr-zigbee)

target_sources(app PRIVATE
  src/main.c)

execute_process(
  COMMAND git describe --tags --dirty --always
  OUTPUT_VARIABLE GIT_VERSION
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

add_definitions(-DGIT_VERSION="${GIT_VERSION}")