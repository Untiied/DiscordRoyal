cmake_minimum_required(VERSION 3.17)
project(DiscordRoyal)
set(CMAKE_CXX_STANDARD 17)  

file(GLOB_RECURSE SOURCE ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE HEADER ${PROJECT_SOURCE_DIR}/src/*.h)

add_subdirectory(libs/sleepy-discord)
add_executable(DiscordRoyal ${HEADER} ${SOURCE})
target_link_libraries(DiscordRoyal sleepy-discord)