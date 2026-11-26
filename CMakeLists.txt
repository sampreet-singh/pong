cmake_minimum_required(VERSION 4.5.1)

project(pong)

find_package(SFML 3 REQUIRED COMPONENTS Graphics)

add_executable(pong source/main.cpp)

target_compile_features(pong PRIVATE cxx_std_17)

target_link_libraries(pong PRIVATE SFML::Graphics)