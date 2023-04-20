# TODO: reduce static linking

add_executable(verb_ichidan verb_ichidan.cpp)
target_link_libraries(verb_ichidan PRIVATE jp_lang)
add_test(NAME verb_ichidan_test COMMAND verb_ichidan)

#add_executable(verb_godan verb_godan.cpp)
#target_link_libraries(verb_godan PRIVATE jp_lang)
#add_test(NAME verb_godan_test COMMAND verb_godan)