#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/registry_t.start.hpp"
namespace wmi
{
    // [struct _WMI_REGISTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct registry_t                            
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 int64_t                initial_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InitialTime
        _m01 uint32_t               status;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
        _m02 uint32_t               index;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Index
        _m03 uint32_t               info_class;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .InfoClass
        _m04 void*                  kcb;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Kcb
        _m05 sdk::array<wchar_t, 1> name;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Name
                                                 
        SDK_MAGIC_PROPERTIES( "_WMI_REGISTRY.$", 0x20, true, 0xf9ccafa5ee11f9a3 );             
        SDK_FIXED_SIZE( registry_t, 0x20 );             
    };                                           
};
#include "magic/registry_t.end.hpp"
SDK_VERIFY( struct wmi::registry_t, 0x20 );
