#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "navigation_interfaces::navigation_interfaces__rosidl_generator_py" for configuration ""
set_property(TARGET navigation_interfaces::navigation_interfaces__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(navigation_interfaces::navigation_interfaces__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libnavigation_interfaces__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libnavigation_interfaces__rosidl_generator_py.so"
  )

list(APPEND _cmake_import_check_targets navigation_interfaces::navigation_interfaces__rosidl_generator_py )
list(APPEND _cmake_import_check_files_for_navigation_interfaces::navigation_interfaces__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libnavigation_interfaces__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
