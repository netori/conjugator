#include "Verb.hpp"
#include <memory>

#ifndef VERB_FACTORY_HPP
#define VERB_FACTORY_HPP

namespace JP
{
class VerbFactory
{
public:
    [[nodiscard]] static std::unique_ptr<Verb> CreateVerb(const std::string);
    [[nodiscard]] static std::unique_ptr<Verb> CreateVerb(const std::string, const JP::Verb::Type);
};
}

#endif
