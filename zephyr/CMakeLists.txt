cmake_minimum_required(VERSION 3.13.1)

include($ENV{ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)
project(civetweb-zephyr)
include(../CMakeLists.txt)

zephyr_include_directories(../include)
target_sources(app PRIVATE ../src/civetweb.c ../examples/embedded_c/embedded_c.c)
