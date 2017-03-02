cmake_minimum_required (VERSION 3.1)

project(PrDe CXX)

find_package(OpenMP REQUIRED)
include(FindOpenMP)
if(OPENMP_FOUND)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
endif()

file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/external/*.cpp")

# set our library and executable destination dirs
  set( EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin" )
  
  file (GLOB CPPFILES "${CMAKE_SOURCE_DIR}/src/*.cpp")
  file (GLOB HFILES "${CMAKE_SOURCE_DIR}/include/*.h") 
  file (GLOB HPPFILES "${CMAKE_SOURCE_DIR}/include/*.hpp")

  add_executable(DesignProbes ${CPPFILES} ${HFILES} ${HPPFILES} ${SOURCES})
   
  set_property(TARGET DesignProbes PROPERTY CXX_STANDARD 11)
  set_property(TARGET DesignProbes PROPERTY CXX_STANDARD_REQUIRED ON)

  find_package(ZLIB REQUIRED)
  include_directories( "${CMAKE_SOURCE_DIR}/boost")
  include_directories("${CMAKE_SOURCE_DIR}/include")
  include_directories("${CMAKE_SOURCE_DIR}/external")
  target_link_libraries( PrDe ${ZLIB_LIBRARIES})
