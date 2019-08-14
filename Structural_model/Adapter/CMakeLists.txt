cmake_minimum_required(VERSION 3.0)

project(Abapter)

option (_OBJECT ON)

if(_OBJECT)
    add_definitions(-D _OBJECT)
endif(_OBJECT)

add_definitions(-std=c++11)

aux_source_directory(. DIR_SRCS)

add_executable(Abapter ${DIR_SRCS})