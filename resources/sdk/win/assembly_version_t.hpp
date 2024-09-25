#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/assembly_version_t.start.hpp"
namespace win
{
    // [union _ASSEMBLY_VERSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union assembly_version_t    
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint16_t build;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Build
        _m01 uint16_t revision;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 uint16_t minor;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Minor
        _m03 uint16_t major;      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Major
        _m04 uint64_t quad_part;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QuadPart
                                
        SDK_MAGIC_PROPERTIES( "_ASSEMBLY_VERSION.$", 0x8, true, 0x27bda8a81a3f02a8 );          
        SDK_FIXED_SIZE( assembly_version_t, 0x8 );          
    };                          
};
#include "magic/assembly_version_t.end.hpp"
SDK_VERIFY( union win::assembly_version_t, 0x8 );
