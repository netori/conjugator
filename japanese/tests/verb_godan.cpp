#include "../include/Verb_Godan.hpp"
#include <iostream>

bool test_yomu();
bool test_kiku();

int main()
{
    if (!test_yomu())  
        return 1;
    return 0;
}

bool test_yomu() 
{
    using Form = JP::Verb::Form;
    const JP::Godan verb("読む");
    if (verb.GetAffirmative(Form::Plain) != "読む")  
        return false;
    if (verb.GetAffirmative(Form::Past) != "読んだ")
        return false;
    if (verb.GetAffirmative(Form::PlainPolite) != "読みます")
        return false;
    if (verb.GetAffirmative(Form::PastPolite) != "読みました")
        return false;
    if (verb.GetAffirmative(Form::Te) != "読んで")
        return false;
    if (verb.GetAffirmative(Form::ConditionalBa) != "読めば")
        return false;
    if (verb.GetAffirmative(Form::ConditionalTara) != "読んだら")
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
    return true;
}