#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/devicedump_structure_version_t.start.hpp"
namespace nt
{
    // [struct _DEVICEDUMP_STRUCTURE_VERSION]
    // => WDK 10 (NV)
    //
    struct devicedump_structure_version_t
    {                                    
        // WDK 10                  
        //                         
        _m00 uint32_t dw_signature;        //{ +0x0000    } | .dwSignature
        _m01 uint32_t dw_version;          //{ +0x0004    } | .dwVersion
        _m02 uint32_t dw_size;             //{ +0x0008    } | .dwSize
                                         
        SDK_NONVOL_PROPERTIES( "_DEVICEDUMP_STRUCTURE_VERSION.$", 0x0, false, 0xf719d7ff3f7b65cc );             
        SDK_FIXED_SIZE( devicedump_structure_version_t, 0xc );             
    };                                   
};
#include "magic/devicedump_structure_version_t.end.hpp"
SDK_VERIFY( struct nt::devicedump_structure_version_t, 0xc );
