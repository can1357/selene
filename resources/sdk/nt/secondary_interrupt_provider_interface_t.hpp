#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/secondary_interrupt_provider_interface_t.start.hpp"
namespace nt
{
    struct driver_object_t;

    // [struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct secondary_interrupt_provider_interface_t    
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 uint16_t                    size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                    version;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                       context;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 uint32_t                    gsiv_base;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GsivBase
        _m04 uint16_t                    gsiv_size;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .GsivSize
        _m05 struct nt::driver_object_t* driver_object;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DriverObject
                                                       
        SDK_MAGIC_PROPERTIES( "_SECONDARY_INTERRUPT_PROVIDER_INTERFACE.$", 0x58, true, 0xca6da7ddb644424e );              
        SDK_FIXED_SIZE( secondary_interrupt_provider_interface_t, 0x58 );              
    };                                                 
};
#include "magic/secondary_interrupt_provider_interface_t.end.hpp"
SDK_VERIFY( struct nt::secondary_interrupt_provider_interface_t, 0x58 );
