#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vposversioninfo_t.start.hpp"
namespace nt
{
    // [struct _VPOSVERSIONINFO]
    // => WDK 10 (NV)
    //
    struct vposversioninfo_t             
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t size;                //{ +0x0000    } | .Size
        _m01 uint32_t major_version;       //{ +0x0004    } | .MajorVersion
        _m02 uint32_t minor_version;       //{ +0x0008    } | .MinorVersion
        _m03 uint32_t build_number;        //{ +0x000c    } | .BuildNumber
        _m04 uint16_t service_pack_major;  //{ +0x0010    } | .ServicePackMajor
        _m05 uint16_t service_pack_minor;  //{ +0x0012    } | .ServicePackMinor
                                         
        SDK_NONVOL_PROPERTIES( "_VPOSVERSIONINFO.$", 0x0, false, 0x3054f0957ff4c6bc );                   
        SDK_FIXED_SIZE( vposversioninfo_t, 0x14 );                   
    };                                   
};
#include "magic/vposversioninfo_t.end.hpp"
SDK_VERIFY( struct nt::vposversioninfo_t, 0x14 );
