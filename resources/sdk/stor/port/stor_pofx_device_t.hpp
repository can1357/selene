#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_pofx_component_t.hpp"

#include "magic/stor_pofx_device_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_POFX_DEVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_pofx_device_t              
    {                                      
        using components_t = sdk::array<struct stor::port::stor_pofx_component_t, 1>;                
                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                 
        _m00 uint32_t      version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t      size;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t      component_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ComponentCount
        _m03 uint32_t      flags;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m04 components_t  components;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Components
                                           
        SDK_MAGIC_PROPERTIES( "_STOR_POFX_DEVICE.$", 0x50, true, 0xd1b10f2cef9c4308 );                
        SDK_FIXED_SIZE( stor_pofx_device_t, 0x50 );                
    };                                     
};
#include "magic/stor_pofx_device_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_pofx_device_t, 0x50 );
