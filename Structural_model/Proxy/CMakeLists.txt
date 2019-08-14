cmake_minimum_required(VERSION 3.0)

project(Proxy)

aux_source_directory(. DIR_SRCS)

add_executable(Proxy ${DIR_SRCS})