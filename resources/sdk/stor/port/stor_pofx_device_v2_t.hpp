#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_pofx_component_t.hpp"

#include "magic/stor_pofx_device_v2_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_POFX_DEVICE_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_pofx_device_v2_t                       
    {                                                  
        using components_t = sdk::array<struct stor::port::stor_pofx_component_t, 1>;                            
                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                             
        _m00 uint32_t      version;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t      size;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t      component_count;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ComponentCount
        _m03 uint32_t      flags;                        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m04 uint32_t      unit_min_idle_timeout_in_ms;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UnitMinIdleTimeoutInMS
        _m05 uint32_t      adapter_idle_timeout_in_ms;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AdapterIdleTimeoutInMS
        _m06 components_t  components;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Components
                                                       
        SDK_MAGIC_PROPERTIES( "_STOR_POFX_DEVICE_V2.$", 0x58, true, 0x4f2eea04eeace871 );                            
        SDK_FIXED_SIZE( stor_pofx_device_v2_t, 0x58 );                            
    };                                                 
};
#include "magic/stor_pofx_device_v2_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_pofx_device_v2_t, 0x58 );
