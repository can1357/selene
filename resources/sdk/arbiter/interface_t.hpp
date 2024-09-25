#pragma once
#include <sdkgen/support_library.hpp>
#include "action_t.hpp"

#include "magic/interface_t.start.hpp"
namespace arbiter
{
    struct parameters_t;

    // [struct _ARBITER_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct interface_t                                         
    {                                                          
        using parbiter_handler_t = sdk::function<int32_t(void*, enum arbiter::action_t, struct arbiter::parameters_t*)>*;                      
                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                     
        _m00 uint16_t                    size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                    version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                       context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>* interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>* interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 parbiter_handler_t          arbiter_handler;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ArbiterHandler
        _m06 uint32_t                    flags;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Flags
                                                               
        SDK_NONVOL_PROPERTIES( "_ARBITER_INTERFACE.$", 0x30, true, 0xa6fafda89e915ca5 );                      
        SDK_FIXED_SIZE( interface_t, 0x30 );                      
    };                                                         
};
#include "magic/interface_t.end.hpp"
SDK_VERIFY( struct arbiter::interface_t, 0x30 );
