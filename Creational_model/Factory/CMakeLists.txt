cmake_minimum_required(VERSION 3.0)

project(Factory)

aux_source_directory(. DIR_SRCS)

add_executable(Factory ${DIR_SRCS})