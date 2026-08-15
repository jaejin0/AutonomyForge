cmake_minimum_required(VERSION 4.4.2)

project(AutonomyForge CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STNADARD_REQUIRED_ON)

add_library(autonomyforge_lib
	src/sim/simulator.cpp
)

target_include_directories(autonomyforge_lib
	PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(autonomyforge apps/autonomyforge.cpp)
target_link_libraries(autonomyforge PRIVATE autonomyforge_lib)

install(TARGETS autonomyforge RUNTIME DESTINATION bin)
