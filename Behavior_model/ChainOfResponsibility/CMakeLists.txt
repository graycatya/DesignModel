cmake_minimum_required(VERSION 3.0)

project(ChainOfResponsibility)

add_definitions("-std=c++11")

aux_source_directory(. DIR_SRCS)

add_executable(ChainOfResponsibility ${DIR_SRCS})