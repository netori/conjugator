#include "Verb_Ichidan.hpp"
#include "Suffix.hpp"

/// @todo Add a wrapper that checks for invalid argument, and invalid verbs.
JP::Ichidan::Ichidan(std::string reading)
{   
    this->reading = reading;
    type = Type::Ichidan;
    stem = GetStem();
}

std::string JP::Ichidan::GetAffirmative(Form form) const noexcept
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
        return stem + "てください";
    case Form::ImperativeNasai:
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

std::string JP::Ichidan::GetNegative(Form form) const noexcept
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
        return stem + "ないでください";
    case Form::ImperativeNasai:
        return stem + "ないでください";
    case Form::Volitional:          // TODO: Add functions.
        return "";
    case Form::VolitionalPolite:    // TODO: Add functions.
        return "";
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

std::string JP::Ichidan::GetStem() const noexcept
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

std::string JP::Ichidan::Conjugate(Form form, Tense tense, State state) const noexcept
{
    int a = static_cast<int>(form);
    //int b = form + tense;
    return "";
    //return stem + JP::Suffix::imperative.at(state).at(tense);
}

const std::unordered_map<JP::Verb::Form, const std::unordered_map<JP::Verb::Inflection, const std::string>> JP::Ichidan::suffix = {
    {Form::Plain,{
        {Inflection::PresentAffirmativeCasual, "る"},
        {Inflection::PresentAffirmativePolite, "ます"},
        {Inflection::PresentNegativeCasual, "ない"},
        {Inflection::PresentNegativePolite, "ません"},
        {Inflection::PastAffirmativeCasual, "た"},
        {Inflection::PastAffirmativePolite, "ました"},
        {Inflection::PastNegativeCasual, "なかった"},
        {Inflection::PastNegativePolite, "ませんでした"},
    }},
    {Form::Te, {
        {Inflection::PresentAffirmativeCasual, "て"},
        {Inflection::PresentAffirmativePolite, "て"},
        {Inflection::PresentNegativeCasual, "なくて"},
        {Inflection::PresentNegativePolite, "なくて"},
        {Inflection::PastAffirmativeCasual, ""},
        {Inflection::PastAffirmativePolite, ""},
        {Inflection::PastNegativeCasual, "なくて"},
        {Inflection::PastNegativePolite, " なくて"},
    }},
    {Form::ConditionalBa, {
        {Inflection::PresentAffirmativeCasual, "れば"},
        {Inflection::PresentAffirmativePolite, "れば"},
        {Inflection::PresentNegativeCasual, "なければ"},
        {Inflection::PresentNegativePolite, "なければ"},
        {Inflection::PastAffirmativeCasual, "たら"},
        {Inflection::PastAffirmativePolite, "ましたら"},
        {Inflection::PastNegativeCasual, "なかったら"},
        {Inflection::PastNegativePolite, "ませんでしたら"},
    }},
};
