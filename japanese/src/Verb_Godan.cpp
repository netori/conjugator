#include "Verb_Godan.hpp"
#include <iostream>

/// @todo Add a wrapper that checks for invalid argument, and invalid verbs.
JP::Godan::Godan(std::string reading) : Verb()
{   
    this->reading = reading;
    type = Type::Godan;
    stem = GetStem();
}

std::string JP::Godan::GetAffirmative(Form form) const noexcept
{
    
    switch (form)
    {
    case Form::Plain:
        return reading;
    case Form::PresentPolite:
        return stem + "ます";
    case Form::Past:
        return stem + "た";
    case Form::PastPolite:
        return stem + "ました";
    case Form::Te:
        return stem + "て";
    case Form::ConditionalBa:
        return stem + "れば";
    case Form::ConditionalTara:
        return stem + "たら";
    case Form::Imperative:
        return stem + "ろ";
    case Form::ImperativePolite:
        return stem + "なさい";
    case Form::Volitional:
        return stem + "よう";
    case Form::VolitionalPolite:
        return stem + "ましょう";
    case Form::Potential:
        return stem + "られる";
    case Form::Passive:
        return stem + "られる";
    case Form::Causative:
        return stem + "させる";
    case Form::CausativePassive:
        return stem + "させられる";
    default:
        return reading;
    }
}

std::string JP::Godan::GetNegative(Form form) const noexcept
{
    switch (form)
    {
    case Form::Plain:
        return stem + "ない";
    case Form::PresentPolite:
        return stem + "ません";
    case Form::Past:
        return stem + "なかった";
    case Form::PastPolite:
        return stem + "ませんでした";
    case Form::Te:
        return stem + "なくて";
    case Form::ConditionalBa:
        return stem + "なければ";
    case Form::ConditionalTara:
        return stem + "なかったら";
    case Form::Imperative:
        return stem + "るな";
    case Form::ImperativePolite:
        return stem + "るな";
    case Form::Volitional:          // TODO: Add functions.
        return stem + "ません";
    case Form::VolitionalPolite:    // TODO: Add functions.
        return stem + "ません";
    case Form::Potential:
        return stem + "られない";
    case Form::Passive:
        return stem + "られない";
    case Form::Causative:
        return stem + "させない";
    case Form::CausativePassive:
        return stem + "させられない";
    default:
        return stem + "ない";
    }
}

/// @todo Add a test for this function.
std::string JP::Godan::GetStem() const noexcept
{
    std::string trim = reading;

    if(trim.empty())
        return "";
    
    char* cp = trim.data() + trim.size();
    while(--cp >= trim.data() && ((*cp & 0b10000000) && !(*cp & 0b01000000))) {}
    if(cp >= trim.data())
        trim.resize(cp - trim.data());

    return trim;
}

std::string JP::Godan::GetRoot() const noexcept
{
    return "";
}