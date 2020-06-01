#include "mega_cpp_include.h"

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




int main()
{
  std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ << std::endl;

  //----------------------------------
  // Put your code below :




  std::cout << "BOO" << std::endl;

  std::cout << __PRETTY_FUNCTION__ << ":" << __LINE__ << std::endl;
  return 0;
}

