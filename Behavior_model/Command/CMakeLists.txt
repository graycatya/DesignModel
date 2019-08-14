cmake_minimum_required(VERSION 3.0)

project(Command0)

add_definitions("-std=c++11")

aux_source_directory(. DIR_SRCS)

add_executable(Command0 ${DIR_SRCS})