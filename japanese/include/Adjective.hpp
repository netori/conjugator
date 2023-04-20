#include <string>

#ifndef ADJECTIVE_HPP
#define ADJECTIVE_HPP

namespace JP
{
class Adjective
{
    /// @brief This enum class contains all the forms that a verb can be conjugated into.
    enum class Tense : uint8_t
    {
        Plain,
        Past,
    }; 

    /// @brief  This virtual function is used to conjugate a verb into an affirmative with a particular form.
    /// @param  tense The tense to conjugate the verb into.
    /// @return The conjugated verb.
    virtual std::string Affirmative(Tense) const = 0;

    /// @brief  This virtual function is used to conjugate a verb into a negative with a particular form.
    /// @param  tense The tense to conjugate the verb into.
    /// @return The conjugated verb.
    virtual std::string Negative(Tense) const = 0;

    /// @brief This enum class contains verb types.
    enum class Type : uint8_t
    {
        na,
        i,
    };

    Type type;
    std::string reading;
};
}

#endif