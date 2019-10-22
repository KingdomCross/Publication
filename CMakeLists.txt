cmake_minimum_required(VERSION 3.15)
project(Publication)

set(CMAKE_CXX_STANDARD 17)

add_executable(Publication main.cpp Publication.cpp Publication.h Book.cpp Book.h Sale.cpp Sale.h Digital.cpp Digital.h)