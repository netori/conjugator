#include "../include/Verb_Godan.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE( "読む", "[Verb_Godan]") {
    using Form = JP::Verb::Form;
    const JP::Godan verb("読む");
    REQUIRE( verb.GetAffirmative(Form::Present) == "読む" );
    REQUIRE( verb.GetAffirmative(Form::Past) == "読んだ" );
    REQUIRE( verb.GetAffirmative(Form::PlainPolite) == "読みます" );
    REQUIRE( verb.GetAffirmative(Form::PastPolite) == "読みました" );
    REQUIRE( verb.GetAffirmative(Form::Te) == "読んで" );
    REQUIRE( verb.GetAffirmative(Form::ConditionalBa) == "読めば" );
    REQUIRE( verb.GetAffirmative(Form::Potential) == "読める" );   
    REQUIRE( verb.GetAffirmative(Form::Passive) == "読まれる" );
}

TEST_CASE( "会う", "[Verb_Godan]") {

}

TEST_CASE( "聞く", "[Verb_Godan]") {

}