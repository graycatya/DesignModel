cmake_minimum_required(VERSION 3.0)

project(Menento)

add_definitions("-std=c++11")

aux_source_directory(. DIR_SRCS)

add_executable(Menento ${DIR_SRCS})