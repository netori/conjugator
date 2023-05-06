// This file contains test cases for the following Ichidan Verbs.
// 食べる (to eat)

#include "../include/Verb_Ichidan.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE( "食べる", "[taberu]") {
    using Form = JP::Verb::Form;
    const JP::Ichidan verb("食べる");
    CHECK( verb.GetAffirmative(Form::Plain) == "食べる" );
    CHECK( verb.GetAffirmative(Form::PresentPolite) == "食べます" );
    CHECK( verb.GetAffirmative(Form::Past) == "食べた" );
    CHECK( verb.GetAffirmative(Form::PastPolite) == "食べました" );
    CHECK( verb.GetAffirmative(Form::Te) == "食べて" );
    CHECK( verb.GetAffirmative(Form::Volitional) == "食べよう" );
    CHECK( verb.GetAffirmative(Form::VolitionalPolite) == "食べましょう" );
    CHECK( verb.GetAffirmative(Form::ConditionalBa) == "食べれば" );
    CHECK( verb.GetAffirmative(Form::ConditionalTara) == "食べたら" );
    CHECK( verb.GetAffirmative(Form::Imperative) == "食べろ" );
    CHECK( verb.GetAffirmative(Form::ImperativePolite) == "食べてください" );
    CHECK( verb.GetAffirmative(Form::ImperativeNasai) == "食べなさい" );
    CHECK( verb.GetAffirmative(Form::Potential) == "食べられる" );
    CHECK( verb.GetAffirmative(Form::Passive) == "食べられる" );
    CHECK( verb.GetAffirmative(Form::Causative) == "食べさせる" );
    CHECK( verb.GetAffirmative(Form::CausativePassive) == "食べさせられる" );
    CHECK( verb.GetNegative(Form::Plain) == "食べない" );
    CHECK( verb.GetNegative(Form::Past) == "食べなかった" );
    CHECK( verb.GetNegative(Form::PresentPolite) == "食べません" );
    CHECK( verb.GetNegative(Form::PastPolite) == "食べませんでした" );
    CHECK( verb.GetNegative(Form::Te) == "食べなくて" );
    CHECK( verb.GetNegative(Form::ConditionalBa) == "食べなければ" );
    CHECK( verb.GetNegative(Form::ConditionalTara) == "食べなかったら" );
    CHECK( verb.GetNegative(Form::Potential) == "食べられない" );
    CHECK( verb.GetNegative(Form::Passive) == "食べられない" );
    CHECK( verb.GetNegative(Form::Causative) == "食べさせない" );
    CHECK( verb.GetNegative(Form::CausativePassive) == "食べさせられない" );
}