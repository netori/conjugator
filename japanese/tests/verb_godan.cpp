// This file contains test cases for the following Godan Verbs.
// 行く (to go)
// 読む (to read)
// 帰る (to return)
// 会う (to meet)
// 遊ぶ (to play)
// 持つ (to hold)
// 泳ぐ (to swim)
// 話す (to speak)
// 死ぬ (to die)
// 笑う (to laugh)

#include "../include/Verb_Godan.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE( "行く", "[iku]") {

}

TEST_CASE( "読む", "[yomu]") {
    using Form = JP::Verb::Form;
    const JP::Godan verb("読む");
    CHECK( verb.GetAffirmative(Form::Plain) == "読む" );
    CHECK( verb.GetAffirmative(Form::Past) == "読んだ" );
    CHECK( verb.GetAffirmative(Form::PresentPolite) == "読みます" );
    CHECK( verb.GetAffirmative(Form::PastPolite) == "読みました" );
    CHECK( verb.GetAffirmative(Form::Te) == "読んで" );
    CHECK( verb.GetAffirmative(Form::ConditionalBa) == "読めば" );
    CHECK( verb.GetAffirmative(Form::Potential) == "読める" );   
    CHECK( verb.GetAffirmative(Form::Passive) == "読まれる" );
}

TEST_CASE( "帰る", "[kaeru]") {

}

TEST_CASE( "会う", "[au]") {

}

TEST_CASE( "遊ぶ", "[asobu]") {

}

TEST_CASE( "持つ", "[motsu]") {

}

TEST_CASE( "泳ぐ", "[oyogu]") {

}

TEST_CASE( "話す", "[hanasu]") {

}

TEST_CASE( "死ぬ", "[shinu]") {

}

TEST_CASE( "笑う", "[warau]") {

}