cmake_minimum_required(VERSION 3.0)

project(Template)

aux_source_directory(. DIR_SRCS)

add_executable(Template ${DIR_SRCS})