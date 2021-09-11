cmake_minimum_required(VERSION 3.16.3)

project(SimpleCRUD)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(src/Alarm)
add_subdirectory(src/Equipment)

target_include_directories(${PROJECT_NAME} PUBLIC src/Alarm PUBLIC src/Equipment)

target_link_directories(${PROJECT_NAME} PRIVATE src/Alarm/ PRIVATE src/Equipment)

target_link_libraries(${PROJECT_NAME} alarm equipment)