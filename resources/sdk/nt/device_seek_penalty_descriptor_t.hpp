#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_seek_penalty_descriptor_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_SEEK_PENALTY_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct device_seek_penalty_descriptor_t
    {                                      
        // WDK 10                         
        //                                
        _m00 uint32_t version;               //{ +0x0000    } | .Version
        _m01 uint32_t size;                  //{ +0x0004    } | .Size
        _m02 uint8_t  incurs_seek_penalty;   //{ +0x0008    } | .IncursSeekPenalty
                                           
        SDK_NONVOL_PROPERTIES( "_DEVICE_SEEK_PENALTY_DESCRIPTOR.$", 0x0, false, 0x6f12be3bd7c1c504 );                    
        SDK_FIXED_SIZE( device_seek_penalty_descriptor_t, 0xc );                    
    };                                     
};
#include "magic/device_seek_penalty_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::device_seek_penalty_descriptor_t, 0xc );
