#pragma once


#ifndef __MARLIN_FIRMWARE__
#define __MARLIN_FIRMWARE__
#endif

//
// Prefix header to acquire configurations
//
#include <stdint.h>

#include "Configuration.h"

//below are the mounts available as offsets. Up to double nests can be configured. #if, #if, #define

  #if ENABLED(BLTOUCH) //variable

    #if ENABLED(KAY3DCoreXY_BLTOUCH_E5P) //variable
      #define NOZZLE_TO_PROBE_OFFSET { 36, -2, 0 }
    #endif

    #if ENABLED(Herome_fanduct_40105015) //variable
      #define NOZZLE_TO_PROBE_OFFSET { -42, -16, 0 }
    #endif

    #if ENABLED(Herome_fanduct_dual5015) //variable
      #define NOZZLE_TO_PROBE_OFFSET { -50, -16, 0 }
    #endif
  
    #if ENABLED(Petsfang_fanduct)
      #define NOZZLE_TO_PROBE_OFFSET { -42, -5, 0 }
    #endif

    #if ENABLED(Simple_bltouch_mount)
      #define NOZZLE_TO_PROBE_OFFSET { -44, -14, 0 } // Measure your  own X, Y & Z offsets and place them inside the brackets
    #endif

    #if ENABLED(Bltouch_creality_kit)
      #define NOZZLE_TO_PROBE_OFFSET { -41, -8, 0 } 
    #endif

  #endif//for bltouch


   #if ENABLED(FIX_MOUNTED_PROBE) //variable

   #if ENABLED(KAY3DCoreXY_KAVA_E3)
      #define NOZZLE_TO_PROBE_OFFSET { -42, -12, 0 }
      #endif 

    #if ENABLED(Herome_fanduct_40105015) //variable
      #define NOZZLE_TO_PROBE_OFFSET { -45.4, -12, 0 }
    #endif

      #if ENABLED(Herome_fanduct_dual5015) //variable
      #define NOZZLE_TO_PROBE_OFFSET { -57, -12, 0 }
      #endif


    #if ENABLED(Petsfang_fanduct)
      #define NOZZLE_TO_PROBE_OFFSET { +48, -2, 0 }
    #endif

  
  #endif //for fixed mount


#if ENABLED(Manual_mesh_bed_level) //variable
#define NOZZLE_TO_PROBE_OFFSET { 0, 0, 0 }
#endif

