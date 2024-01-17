#include "foo.h"

#include <itpp/itbase.h>

int main()
{
  itpp::GF2mat G(3,3);
  G.set(1,1,1);
  std::cout<<G<<std::endl;
  itpp::bvec b;
  foo();
  return 0;
}
