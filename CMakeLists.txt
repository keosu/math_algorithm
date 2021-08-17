cmake_minimum_required(VERSION 3.0.0)
project(optmath VERSION 0.1.0)



include_directories('src')
file(GLOB OPTMATH_FILES ./src/*.cc)
add_library(optmath ${OPTMATH_FILES})

# include(CTest)
# enable_testing()
# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)

add_subdirectory(test)
