// This file contains the Godan class, which is the class for all Godan verbs.

#include "Verb.hpp"

#ifndef VERB_GODAN_HPP
#define VERB_GODAN_HPP

namespace JP
{
class Godan : public Verb
{
public:
    Godan(std::string);

    /// @brief  This overriden function is used to conjugate an Godan verb into an affirmative with a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @return The conjugated verb.
    [[nodiscard]] std::string GetAffirmative(Form) const noexcept override;
    /// @brief  This overriden function is used to conjugate an Godan verb into a negative with a particular form.
    /// @param  form The form to conjugate the verb into.
    /// @return The conjugated verb.
    [[nodiscard]] std::string GetNegative(Form) const noexcept override;

    /// @brief This contains the stem of the Godan verb.
    std::string stem;

private:
    /// @brief  This function gets the stem of the Godan verb.
    /// @return The stem of the Godan verb.
    [[nodiscard]] std::string GetStem() const noexcept;

    /// @brief  This function gets the root of the Godan verb.
    /// @return The root of the Godan verb.
    [[nodiscard]] std::string GetRoot() const noexcept;
};
}

#endif