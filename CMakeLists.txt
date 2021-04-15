cmake_minimum_required(VERSION 3.17)
project(CS202_Group_Project)

set(CMAKE_CXX_STANDARD 14)

add_executable(CS202_Group_Project main.cpp  "PC.h" "PC.cpp")

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

target_link_libraries(CS202_Group_Project sfml-graphics sfml-audio)