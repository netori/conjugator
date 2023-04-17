#include <string>
#include <cstdint>

#ifndef CONJUGATABLE_HPP
#define CONJUGATABLE_HPP

namespace JP
{
class Conjugatable
{
public:
    enum class ConjugationType : uint8_t
    {
        NonPast,
        Past,
    };
    virtual std::string conjugate(ConjugationType) const = 0;
    virtual ~Conjugatable() {}
    std::string group;
    std::string type;
    std::string reading;
};
}

#endif