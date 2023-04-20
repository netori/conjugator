add_library(jp_lang STATIC 
    src/Verb_Ichidan.cpp
    src/Verb_Godan.cpp
)
target_include_directories(jp_lang PRIVATE include)

target_compile_options(jp_lang PRIVATE
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

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND JP_LANG_BUILD_TESTS)
    add_subdirectory(tests)
endif()