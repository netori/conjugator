#include <cstdint>

#ifndef CONJUGATABLE_HPP
#define CONJUGATABLE_HPP

namespace JP
{
class Conjugatable
{
public: 
    virtual ~Conjugatable() = default;

    /// @brief This enum class contains conjugatable states.
    enum State : uint8_t
    {
        Affirmative = 0,
        Negative = 1,
    };

    /// @brief This enum class contains conjugatable tenses.
    enum Tense : uint8_t
    {
        Present = 0,
        Past = 1,
    };

    enum Form : uint8_t
    {
        Casual = 0,
        Polite = 1,
    };


};
}

#endif