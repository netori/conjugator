#include "../include/Verb_Ichidan.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE( "食べる", "[Verb_Ichidan]") {
    using Form = JP::Verb::Form;
    const JP::Ichidan verb("食べる");
    REQUIRE( verb.GetAffirmative(Form::Present) == "食べる" );
    REQUIRE( verb.GetAffirmative(Form::PlainPolite) == "食べます" );
    REQUIRE( verb.GetAffirmative(Form::Past) == "食べた" );
    REQUIRE( verb.GetAffirmative(Form::PastPolite) == "食べました" );
    REQUIRE( verb.GetAffirmative(Form::Te) == "食べて" );
    REQUIRE( verb.GetAffirmative(Form::Volitional) == "食べよう" );
    REQUIRE( verb.GetAffirmative(Form::VolitionalPolite) == "食べましょう" );
    REQUIRE( verb.GetAffirmative(Form::ConditionalBa) == "食べれば" );
    REQUIRE( verb.GetAffirmative(Form::ConditionalTara) == "食べたら" );
    REQUIRE( verb.GetAffirmative(Form::Imperative) == "食べろ" );
    REQUIRE( verb.GetAffirmative(Form::ImperativePolite) == "食べてください" );
    REQUIRE( verb.GetAffirmative(Form::ImperativePoliteShort) == "食べなさい" );
    REQUIRE( verb.GetAffirmative(Form::Potential) == "食べられる" );
    REQUIRE( verb.GetAffirmative(Form::Passive) == "食べられる" );
    REQUIRE( verb.GetAffirmative(Form::Causative) == "食べさせる" );
    REQUIRE( verb.GetAffirmative(Form::CausativePassive) == "食べさせられる" );
    REQUIRE( verb.GetNegative(Form::Present) == "食べない" );
    REQUIRE( verb.GetNegative(Form::Past) == "食べなかった" );
    REQUIRE( verb.GetNegative(Form::PlainPolite) == "食べません" );
    REQUIRE( verb.GetNegative(Form::PastPolite) == "食べませんでした" );
    REQUIRE( verb.GetNegative(Form::Te) == "食べなくて" );
    REQUIRE( verb.GetNegative(Form::ConditionalBa) == "食べなければ" );
    REQUIRE( verb.GetNegative(Form::ConditionalTara) == "食べなかったら" );
    REQUIRE( verb.GetNegative(Form::Potential) == "食べられない" );
    REQUIRE( verb.GetNegative(Form::Passive) == "食べられない" );
    REQUIRE( verb.GetNegative(Form::Causative) == "食べさせない" );
    REQUIRE( verb.GetNegative(Form::CausativePassive) == "食べさせられない" );
}