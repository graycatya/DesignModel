cmake_minimum_required(VERSION 3.0)

project(Visitor)

aux_source_directory(. DIR_SRCS)

add_executable(Visitor ${DIR_SRCS})