#include <cstdint>

namespace JP
{
class Conjugatable
{
public: 
    virtual ~Conjugatable() = default;

    /// @brief This enum class contains conjugatable states.
    enum class State : uint8_t
    {
        Affirmative,
        Negative,
    };

    

};
}