#include <string>
#include "Conjugatable.hpp"

#ifndef VERB_HPP
#define VERB_HPP

namespace JP
{
class Verb : public Conjugatable
{
public:
    Verb(std::string verb, std::string reading, std::string type, std::string group);
    std::string conjugate(ConjugationType) const override;
    std::string verb;
};
}

#endif