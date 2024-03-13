cmake_minimum_required(VERSION 3.27)
project(demo_oop_143)

set(CMAKE_CXX_STANDARD 14)

add_executable(demo_oop_143
        main.cpp
        Recipe.h
        Recipe.cpp
        Ingredient.cpp
        Category.cpp)
