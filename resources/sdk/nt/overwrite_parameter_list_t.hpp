#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/overwrite_parameter_list_t.start.hpp"
namespace nt
{
    // [struct _OVERWRITE_PARAMETER_LIST]
    // => WDK 10 (NV)
    //
    struct overwrite_parameter_list_t                             
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint5_t                over_write_count;               //{ +0x0000@0  } | .OverWriteCount
        _m01 uint2_t                test;                           //{ +0x0000@5  } | .Test
        _m02 uint1_t                invert;                         //{ +0x0000@7  } | .Invert
        _m03 sdk::array<uint8_t, 2> initialization_pattern_length;  //{ +0x0002    } | .InitializationPatternLength
        _m04 sdk::array<uint8_t, 1> initialization_pattern;         //{ +0x0004    } | .InitializationPattern
                                                                  
        SDK_NONVOL_PROPERTIES( "_OVERWRITE_PARAMETER_LIST.$", 0x0, false, 0x86058959d74ae0bb );                              
        SDK_FIXED_SIZE( overwrite_parameter_list_t, 0x5 );                              
    };                                                            
};
#include "magic/overwrite_parameter_list_t.end.hpp"
SDK_VERIFY( struct nt::overwrite_parameter_list_t, 0x5 );
