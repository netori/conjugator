#include "../include/Verb_Ichidan.hpp"
#include <iostream>

bool test_taberu();

int main()
{
    if (!test_taberu())  
        return 1;
    return 0;
}

bool test_taberu() 
{
    using Form = JP::Verb::Form;
    const JP::Ichidan verb("食べる");
    // Test the affirmative forms.
    std::cout << "Testing affirmative forms...\n";
    if (verb.GetAffirmative(Form::Plain) != "食べる")  
        return false;
    if (verb.GetAffirmative(Form::Past) != "食べた")
        return false;
    if (verb.GetAffirmative(Form::PlainPolite) != "食べます")
        return false;
    if (verb.GetAffirmative(Form::PastPolite) != "食べました")
        return false;
    if (verb.GetAffirmative(Form::Te) != "食べて")
        return false;
    if (verb.GetAffirmative(Form::ConditionalBa) != "食べれば")
        return false;
    if (verb.GetAffirmative(Form::ConditionalTara) != "食べたら")
        return false;
    if (verb.GetAffirmative(Form::Imperative) != "食べろ")
        return false;
    if (verb.GetAffirmative(Form::ImperativeFormal) != "食べなさい")
        return false;
    if (verb.GetAffirmative(Form::Volitional) != "食べよう")
        return false;
    if (verb.GetAffirmative(Form::VolitionalFormal) != "食べましょう")
        return false;
    if (verb.GetAffirmative(Form::Potential) != "食べられる")
        return false;
    if (verb.GetAffirmative(Form::Passive) != "食べられる")
        return false;
    if (verb.GetAffirmative(Form::Causative) != "食べさせる")
        return false;
    if (verb.GetAffirmative(Form::CausativePassive) != "食べさせられる")
        return false;
    // Test negative forms
    std::cout << "Testing negative forms...\n";
    if (verb.GetNegative(Form::Plain) != "食べない")
        return false;
    if (verb.GetNegative(Form::Past) != "食べなかった")
        return false;
    if (verb.GetNegative(Form::PlainPolite) != "食べません")
        return false;
    if (verb.GetNegative(Form::PastPolite) != "食べませんでした")
        return false;
    if (verb.GetNegative(Form::Te) != "食べなくて") 
        return false;
    if (verb.GetNegative(Form::ConditionalBa) != "食べなければ")
        return false;
    if (verb.GetNegative(Form::ConditionalTara) != "食べなかったら")
        return false;
    if (verb.GetNegative(Form::Imperative) != "食べるな")
        return false;
    if (verb.GetNegative(Form::ImperativeFormal) != "食べるな")
        return false;
    if (verb.GetNegative(Form::Volitional) != "")
        return false;
    if (verb.GetNegative(Form::VolitionalFormal) != "") 
        return false;
    if (verb.GetNegative(Form::Potential) != "食べられない")    
        return false;
    if (verb.GetNegative(Form::Passive) != "食べられない")
        return false;
    if (verb.GetNegative(Form::Causative) != "食べさせない")
        return false;
    if (verb.GetNegative(Form::CausativePassive) != "食べさせられない")
        return false;
    std::cout << "All tests passed!\n";
    return true;
}