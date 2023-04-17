cmake_minimum_required(VERSION 3.11)

# Set project name, version and laguages here. (change as needed)
# Version numbers are available by including "exampleConfig.h" in
# the source. See exampleConfig.h.in for some more details.
project(
  YOMU
  VERSION 1.0.0
  LANGUAGES CXX
)

# Set C++ standard here. (change as needed)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include FTXUI.
include(FetchContent)

FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
  GIT_TAG v4.0.0
)

FetchContent_GetProperties(ftxui)
if(NOT ftxui_POPULATED)
  FetchContent_Populate(ftxui)
  add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

# --------------------------------------------------------------------------------
#                         Locate files (change as needed).
# --------------------------------------------------------------------------------

add_executable(mazui app/src/main.cpp)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/japanese)
target_link_libraries(mazui PRIVATE jp_lang)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/ui)
target_link_libraries(mazui PRIVATE jp_ui)

target_compile_options(mazui PRIVATE
-Wall
-Wextra # reasonable and standard
-Wshadow # warn the user if a variable declaration shadows one from a
# parent context
-Wnon-virtual-dtor # warn the user if a class with virtual functions has a
# non-virtual destructor. This helps catch hard to
# track down memory errors
-Wold-style-cast # warn for c-style casts
-Wcast-align # warn for potential performance problem casts
-Wunused # warn on anything being unused
-Woverloaded-virtual # warn if you overload (not override) a virtual
# function
-Wpedantic # warn if non-standard C++ is used
-Wconversion # warn on type conversions that may lose data
-Wmisleading-indentation # warn if identation implies blocks where blocks
# do not exist
-Wnull-dereference # warn if a null dereference is detected
-Wdouble-promotion # warn if float is implicit promoted to double
-Wformat=2 # warn on security issues around functions that format output
# (ie printf)
# MSVC warnings
$<$<CXX_COMPILER_ID:MSVC>:
"/Wall" >
)
