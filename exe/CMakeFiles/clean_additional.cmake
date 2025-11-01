# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\VMDRenamer_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\VMDRenamer_autogen.dir\\ParseCache.txt"
  "VMDRenamer_autogen"
  )
endif()
