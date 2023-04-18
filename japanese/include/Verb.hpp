// This file contains the Verb class, which is the abstract class for all verbs.

#include <string>

#ifndef VERB_HPP
#define VERB_HPP

namespace JP
{
class Verb
{
public:
    /// @brief This enum class contains all the forms that a verb can be conjugated into.
    enum class Form : uint8_t
    {
        Plain,         
        Past,
        PastPolite,     // た-form
        PlainPolite,    // ます-form
        Te,             // て-form
        Conditional,    // ば-form | たら-form
        Imperative,     // なさい-form
        Volitional,     // ましょう-form
        Potential,      // う-form
        Passive,        // れる-form
        Causative,      // せる-form
        CausativePassive, // れせる-form
    }; 

    /// @brief  This virtual function is used to conjugate a verb into an affirmative with a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @return The conjugated verb.
    virtual std::string Affirmative(Form) const = 0;

    /// @brief  This virtual function is used to conjugate a verb into a negative with a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @return The conjugated verb.
    virtual std::string Negative(Form) const = 0;

    /// @brief This enum class contains verb types.
    enum class Type : uint8_t
    {
        Ichidan,
        Godan,
        Suru,
        Kuru,
    };

    Type type;

    /// @brief This is the default destructor for the Verb class.
    virtual ~Verb() = default;

    std::string reading;
    
};
}

#endif