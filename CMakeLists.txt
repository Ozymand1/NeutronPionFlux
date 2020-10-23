cmake_minimum_required(VERSION 3.16)
project(NeutronPionFlux)

option(WITH_GEANT4_UIVIS "Build example with Geant4 UI and Vis drivers" ON)
if(WITH_GEANT4_UIVIS)
    find_package(Geant4 REQUIRED ui_all vis_all)
else()
    find_package(Geant4 REQUIRED)
endif()

include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/include)

include(${Geant4_USE_FILE})

include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB sources ${PROJECT_SOURCE_DIR}/src/*.cc)

add_executable(NeutronPionFlux main.cc ${sources})
target_link_libraries(NeutronPionFlux ${Geant4_LIBRARIES})