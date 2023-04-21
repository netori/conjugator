# TODO: reduce static linking

add_executable(verb_ichidan verb_ichidan.cpp)
target_link_libraries(verb_ichidan PRIVATE jp_lang)
target_link_libraries(verb_ichidan PRIVATE Catch2::Catch2WithMain)
catch_discover_tests(verb_ichidan verb_ichidan_test)

add_executable(verb_godan verb_godan.cpp)
target_link_libraries(verb_godan PRIVATE jp_lang)
target_link_libraries(verb_godan PRIVATE Catch2::Catch2WithMain)
catch_discover_tests(verb_godan verb_godan_test)