cmake_minimum_required(VERSION 3.26)

project(mazui
    VERSION 1.0.0
    DESCRIPTION "A tool to practice Japanese Verb and Adjective conjugations."
    LANGUAGES CXX
)

# Set C++ standard here. (change as needed)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --------------------------------------------------------------------------------
#                                  Fetch FTXUI
# --------------------------------------------------------------------------------

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
#                                  Fetch Catch2
# --------------------------------------------------------------------------------

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.3.2 # or a later release
)

FetchContent_MakeAvailable(Catch2)
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)

# --------------------------------------------------------------------------------
#                             Compile the executable
# --------------------------------------------------------------------------------

add_executable(${PROJECT_NAME} app/src/main.cpp)

# Add the Japanese language library.
add_subdirectory(japanese)
target_link_libraries(${PROJECT_NAME} PRIVATE jp_lang)

# Add the Japanese UI library.
#add_subdirectory(ui)
#target_link_libraries(${PROJECT_NAME} PRIVATE jp_ui)

# Add compile options
target_compile_options(${PROJECT_NAME} PRIVATE
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
