// This file contains the Ichidan class, which is the class for all Ichidan verbs.

#include <unordered_map>
#include "Verb.hpp"

#ifndef VERB_ICHIDAN_HPP
#define VERB_ICHIDAN_HPP

namespace JP
{
class Ichidan : public Verb
{
public:
    Ichidan(std::string reading);

    /// @brief  This overriden function is used to conjugate an Ichidan verb into an affirmative with a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @return The conjugated verb.
    [[nodiscard]] std::string GetAffirmative(Form) const noexcept override;
    /// @brief  This overriden function is used to conjugate an Ichidan verb into a negative with a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @return The conjugated verb.
    [[nodiscard]] std::string GetNegative(Form) const noexcept override;

    /// @brief  This function conjugates an Ichidan verb into a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @param  tense The tense to conjugate the verb into.
    /// @param  state The state to conjugate the verb into.
    /// @return The conjugated verb.
    [[nodiscard]] std::string Conjugate(Form, Tense, State) const noexcept;

    /// @brief This contains the stem of the Ichidan verb.
    std::string stem;

private:
    /// @brief  This function gets the stem of the Ichidan verb.
    /// @return The stem of the Ichidan verb.
    [[nodiscard]] std::string GetStem() const noexcept;

    static const std::unordered_map<JP::Verb::Form, const std::unordered_map<JP::Verb::Inflection, const std::string>> suffix;
};
}

#endif