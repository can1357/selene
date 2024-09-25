#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_trim_descriptor_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_TRIM_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct device_trim_descriptor_t
    {                              
        // WDK 10                  
        //                         
        _m00 uint32_t version;       //{ +0x0000    } | .Version
        _m01 uint32_t size;          //{ +0x0004    } | .Size
        _m02 uint8_t  trim_enabled;  //{ +0x0008    } | .TrimEnabled
                                   
        SDK_NONVOL_PROPERTIES( "_DEVICE_TRIM_DESCRIPTOR.$", 0x0, false, 0xee4eddced49c18ba );             
        SDK_FIXED_SIZE( device_trim_descriptor_t, 0xc );             
    };                             
};
#include "magic/device_trim_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::device_trim_descriptor_t, 0xc );
