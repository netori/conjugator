#include "../include/Verb.hpp"

JP::Verb::Verb(std::wstring verb, std::string reading, std::string type, std::string group)
{
    this->verb = verb;
    this->reading = reading;
    this->type = type;
    this->group = group;
}

JP::Conjugatable* JP::Verb::conjugate() const
{
    return nullptr;
}
