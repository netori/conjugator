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