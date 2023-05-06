#include <iostream>
//#include "../../ui/include/ui.hpp"
#include "../../japanese/include/Verb_Ichidan.hpp"
#include "../../japanese/include/Verb_Factory.hpp"

int main() 
{
    using Form = JP::Verb::Form;
    using Tense = JP::Conjugatable::Tense;
    using State = JP::Conjugatable::State;
    // using Tense = JP::Adjective::Tense;
    JP::Ichidan verb = JP::Ichidan("食べる");
    std::cout << verb.Conjugate(Form::Plain, Tense::Present, State::Affirmative) << std::endl;
    //std::cout << verb2.GetNegative(Form::Causative) << std::endl;
    //JP::VerbFactory factory;
    //factory.CreateVerb("食べる",Type::Ichidan);

     //ui::show();
    return 0;
}