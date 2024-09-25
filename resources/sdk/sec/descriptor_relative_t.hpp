#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/descriptor_relative_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_DESCRIPTOR_RELATIVE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct descriptor_relative_t
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint8_t  revision;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
        _m01 uint8_t  sbz1;       //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Sbz1
        _m02 uint16_t control;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Control
        _m03 uint32_t owner;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Owner
        _m04 uint32_t group;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Group
        _m05 uint32_t sacl;       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Sacl
        _m06 uint32_t dacl;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Dacl
                                
        SDK_NONVOL_PROPERTIES( "_SECURITY_DESCRIPTOR_RELATIVE.$", 0x14, true, 0xbb7db53e6826448f );         
        SDK_FIXED_SIZE( descriptor_relative_t, 0x14 );         
    };                          
};
#include "magic/descriptor_relative_t.end.hpp"
SDK_VERIFY( struct sec::descriptor_relative_t, 0x14 );
