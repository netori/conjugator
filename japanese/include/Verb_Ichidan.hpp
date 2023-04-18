#include "Verb.hpp"

namespace JP
{
class Ichidan : public Verb
{
public:
    Ichidan(std::string);
    [[nodiscard]] std::string Affirmative(Form) const noexcept override;
    [[nodiscard]] std::string Negative(Form) const noexcept override;
    Type type = Type::Ichidan;
};
}