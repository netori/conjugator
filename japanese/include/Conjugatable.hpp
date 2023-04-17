#include <string>

#ifndef CONJUGATABLE_HPP
#define CONJUGATABLE_HPP

namespace JP
{
class Conjugatable
{
public:
    virtual Conjugatable* conjugate() const = 0;
    virtual ~Conjugatable() {}
    std::string group;
    std::string type;
    std::string reading;
};
}

#endif