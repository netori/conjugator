add_library(jp_ui STATIC src/ui.cpp)
target_include_directories(jp_ui PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(jp_ui PRIVATE ftxui::component)
target_link_libraries(jp_ui PRIVATE ftxui::dom)
target_link_libraries(jp_ui PRIVATE ftxui::screen)

target_compile_options(jp_ui PRIVATE
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
