cmake_minimum_required(VERSION 3.0)

project(Composite)

option (_WIN32 ON)

add_definitions(-std=c++11)

aux_source_directory(. DIR_SRCS)

add_executable(Composite ${DIR_SRCS})