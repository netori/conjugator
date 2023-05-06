#include <unordered_map>
#include <cstdint>
#include "Verb_Ichidan.hpp"

#ifndef SUFFIX_HPP
#define SUFFIX_HPP

namespace JP
{
class Suffix
{
public:
    static const std::unordered_map<JP::Verb::Form, const std::unordered_map<uint8_t, const std::string>> Ichidan;
private:
};
}

#endif