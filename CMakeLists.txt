cmake_minimum_required(VERSION 3.22)

project(tetriz)

aux_source_directory(. src)
add_executable(main ${src})