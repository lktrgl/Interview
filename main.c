#include "mega_c_include.h"

// un-comment line below to enable the logger
// #define DBGPRN_HEADER_BASED_ENABLED
// #define DBGPRN_ENABLED
// #define DBGPRN_TO_STDOUT
#include <lggm/dbgprn.h>

/* Put your code below : */



int main()
{
//  printf ( "%s:%d\n", __PRETTY_FUNCTION__, __LINE__ );
  LGGM_CALL_IN_C(1);

  /* Put your code below : */



  printf ( "%s\n", "BOO" );

//  printf ( "%s:%d\n", __PRETTY_FUNCTION__, __LINE__ );
  LGGM_CALL_OUT_C(1);
  return 0;
}

