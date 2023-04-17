#include "../include/Verb.hpp"

JP::Verb::Verb(std::string verb, std::string reading, std::string type, std::string group)
{
    this->verb = verb;
    this->reading = reading;
    this->type = type;
    this->group = group;
}

std::string JP::Verb::conjugate(ConjugationType tense) const
{

    switch(tense)
    {
        case ConjugationType::NonPast:
            return this->verb;
        case ConjugationType::Past:
        break;

    }
    return "";
}
