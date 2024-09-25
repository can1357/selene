#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/zone_descriptior_t.start.hpp"
namespace nt
{
    // [struct _ZONE_DESCRIPTIOR]
    // => WDK 10 (NV)
    //
    struct zone_descriptior_t                         
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint4_t                zone_type;          //{ +0x0000@0  } | .ZoneType
        _m01 uint1_t                reset;              //{ +0x0001@0  } | .Reset
        _m02 uint1_t                non_seq;            //{ +0x0001@1  } | .Non_Seq
        _m03 uint4_t                zone_condition;     //{ +0x0001@4  } | .ZoneCondition
        _m04 sdk::array<uint8_t, 8> zone_length;        //{ +0x0008    } | .ZoneLength
        _m05 sdk::array<uint8_t, 8> zone_start_lba;     //{ +0x0010    } | .ZoneStartLBA
        _m06 sdk::array<uint8_t, 8> write_pointer_lba;  //{ +0x0018    } | .WritePointerLBA
                                                      
        SDK_NONVOL_PROPERTIES( "_ZONE_DESCRIPTIOR.$", 0x0, false, 0x748edf672b56a7e5 );                  
        SDK_FIXED_SIZE( zone_descriptior_t, 0x40 );                  
    };                                                
};
#include "magic/zone_descriptior_t.end.hpp"
SDK_VERIFY( struct nt::zone_descriptior_t, 0x40 );
