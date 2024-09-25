#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_dsm_definition_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_DEFINITION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_dsm_definition_t              
    {                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t action;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Action
        _m01 uint8_t  single_range;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SingleRange
        _m02 uint32_t parameter_block_alignment;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ParameterBlockAlignment
        _m03 uint32_t parameter_block_length;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ParameterBlockLength
        _m04 uint8_t  has_output;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HasOutput
        _m05 uint32_t output_block_alignment;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .OutputBlockAlignment
        _m06 uint32_t output_block_length;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OutputBlockLength
                                                
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_DEFINITION.$", 0x1c, true, 0x9ba2d8e998aa51b0 );                          
        SDK_FIXED_SIZE( device_dsm_definition_t, 0x1c );                          
    };                                          
};
#include "magic/device_dsm_definition_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_definition_t, 0x1c );
