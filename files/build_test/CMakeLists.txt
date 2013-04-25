cmake_minimum_required(VERSION 2.8.3)
project(xsd2cpp_build_test)

set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

aux_source_directory(${SRC_DIR} SRC_FILES)
aux_source_directory(${SRC_DIR}/xsdtype SRC_FILES)
list(REMOVE_ITEM SRC_FILES ${SRC_DIR}/main.cpp)

set(HEADER_FILES "")
file(GLOB HEADER_FILES "${INCLUDE_DIR}/xsdtype/*.h")
file(GLOB HEADER_FILES "${INCLUDE_DIR}/*.h")

include_directories(${INCLUDE_DIR})
include_directories(${INCLUDE_DIR}/xsdtype)

add_library(${PROJECT_NAME} ${SRC_FILES} ${HEADER_FILES})

add_executable(${PROJECT_NAME}_exe ${SRC_DIR}/main.cpp)
target_link_libraries(${PROJECT_NAME}_exe ${PROJECT_NAME})