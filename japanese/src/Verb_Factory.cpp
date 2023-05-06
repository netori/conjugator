#include "Verb_Factory.hpp"
#include "Verb_Ichidan.hpp"
#include "Verb_Godan.hpp"
#include <memory>

std::unique_ptr<JP::Verb> JP::VerbFactory::CreateVerb(std::string const reading)
{

}

std::unique_ptr<JP::Verb> JP::VerbFactory::CreateVerb(std::string const reading, JP::Verb::Type const type)
{
    switch (type)
    {
    case JP::Verb::Type::Ichidan:
        return std::make_unique<JP::Ichidan>(reading);
    case JP::Verb::Type::Godan:
        return std::make_unique<JP::Godan>(reading);
    default:
        return nullptr;
    }
}