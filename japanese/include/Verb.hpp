// This file contains the Verb class, which is the abstract class for all verbs.
#include "Conjugatable.hpp"
#include <string>

#ifndef VERB_HPP
#define VERB_HPP

namespace JP
{
class Verb : public Conjugatable
{
public:
    /// @brief This is the default destructor for the Verb class.
    virtual ~Verb() = default;

    /// @brief The `Form` enum class contains all the forms that a verb can be conjugated into.
    enum class Form : uint8_t
    {
        Plain,
        Past,
        Te,
        ConditionalBa,
        ConditionalTara,
        Imperative,
        ImperativeNasai,
        Volitional,
        Potential,
        Passive,
        Causative,
        CausativePassive,
    }; 

    enum class Inflection : uint8_t
    {
        PresentAffirmativeCasual,
        PresentAffirmativePolite,
        PresentNegativeCasual,
        PresentNegativePolite,
        PastAffirmativeCasual,
        PastAffirmativePolite,
        PastNegativeCasual,
        PastNegativePolite,
    };

    /// @brief  This virtual function is used to conjugate a verb into an affirmative with a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @return The conjugated verb.
    virtual std::string GetAffirmative(Form) const = 0;

    /// @brief  This virtual function is used to conjugate a verb into a negative with a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @return The conjugated verb.
    virtual std::string GetNegative(Form) const = 0;

    /// @brief This enum class contains verb types. This might be pointless.
    enum class Type : uint8_t
    {
        Ichidan,
        Godan,
        Suru,
        Kuru,
    };

    /// @brief This contains the type of the verb.
    Type type;

    /// @brief This contains the reading of the verb.
    std::string reading;

private:

};
}

#endif