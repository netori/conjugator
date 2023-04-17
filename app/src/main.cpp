#include <iostream>
#include "../../ui/include/ui.hpp"
#include "../../japanese/include/Verb.hpp"

int main() 
{
  std::string b = "たべる";
  JP::Verb verb(b, "たべる", "う-verb", "1");
  std::cout << verb.verb << std::endl;
  std::cout << verb.conjugate(JP::Conjugatable::ConjugationType::NonPast) << std::endl;
  //ui::show();
  return 0;
}