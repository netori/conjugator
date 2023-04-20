// This file contains the Ichidan class, which is the class for all Ichidan verbs.

#include "Verb.hpp"

#ifndef VERB_ICHIDAN_HPP
#define VERB_ICHIDAN_HPP

namespace JP
{
class Ichidan : public Verb
{
public:
    Ichidan(std::string);

    /// @brief  This overriden function is used to conjugate an Ichidan verb into an affirmative with a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @return The conjugated verb.
    [[nodiscard]] std::string GetAffirmative(Form) const noexcept override;
    /// @brief  This overriden function is used to conjugate an Ichidan verb into a negative with a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @return The conjugated verb.
    [[nodiscard]] std::string GetNegative(Form) const noexcept override;

    /// @brief This contains the stem of the Ichidan verb.
    std::string stem;

private:
    /// @brief  This function gets the stem of the Ichidan verb.
    /// @return The stem of the Ichidan verb.
    [[nodiscard]] std::string GetStem() const noexcept;
};
}

#endif