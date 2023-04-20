#include <iostream>
//#include "../../ui/include/ui.hpp"
#include "../../japanese/include/Verb_Ichidan.hpp"

int main() 
{
    using Form = JP::Verb::Form;
    // using Tense = JP::Adjective::Tense;
    JP::Ichidan verb2 = JP::Ichidan("食べる");
    std::cout << verb2.GetNegative(Form::Causative) << std::endl;
     //ui::show();
    return 0;
}