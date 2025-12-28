#include "mega_cpp_include.h"

// un-comment line below to enable the logger
// #define LGGM_ENABLE_LOGGER
#include <lggm/lggm.h>

//----------------------------------
// use the dummy call finding out the actual type
// catchType<>();
// catchType<decltype()>();

template<typename T>
void catchType();

//----------------------------------
// include the namespaces for convenience

using namespace std;
using namespace std::chrono;
using namespace std::chrono_literals;

//----------------------------------
// Put your code below :


// Put your code above :
//----------------------------------

int main ([[maybe_unused]]int argc, [[maybe_unused]]char* argv[] )
{
  LGGM_SS();

  //----------------------------------
  // Put your code below :


  std::cout << "BOO" << std::endl;


  // Put your code above :
  //----------------------------------

  return 0;
}

