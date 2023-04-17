#include <string>
#include "Conjugatable.hpp"

#ifndef VERB_HPP
#define VERB_HPP

namespace JP
{
class Verb : public Conjugatable
{
public:
    Verb(std::wstring verb, std::string reading, std::string type, std::string group);
    std::wstring verb;
    Conjugatable* conjugate() const override;
};
}

#endif