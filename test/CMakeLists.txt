
include_directories("../src/")

file(GLOB ALL_TEST "./*cc")
foreach(FILE_PATH ${ALL_TEST}) 
  STRING(REGEX REPLACE ".+/(.+)\\..*" "\\1" FILE_NAME ${FILE_PATH})
  add_executable(${FILE_NAME} ${FILE_PATH}) 
  target_link_libraries(${FILE_NAME} optmath)
endforeach()
 