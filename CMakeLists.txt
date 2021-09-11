cmake_minimum_required(VERSION 3.16.3)

project(SimpleCRUD)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(src/Alarm)

target_include_directories(${PROJECT_NAME} PUBLIC src/Alarm)

target_link_directories(${PROJECT_NAME} PRIVATE src/Alarm/)

target_link_libraries(${PROJECT_NAME} alarm)