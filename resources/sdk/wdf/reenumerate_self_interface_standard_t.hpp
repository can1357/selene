#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reenumerate_self_interface_standard_t.start.hpp"
namespace wdf
{
    // [struct _REENUMERATE_SELF_INTERFACE_STANDARD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reenumerate_self_interface_standard_t                              
    {                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                    
        _m00 uint16_t                    size;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                    version;                               //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                       context;                               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>* interface_reference;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>* interface_dereference;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 sdk::function<void(void*)>* surprise_remove_and_reenumerate_self;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SurpriseRemoveAndReenumerateSelf
                                                                              
        SDK_NONVOL_PROPERTIES( "_REENUMERATE_SELF_INTERFACE_STANDARD.$", 0x28, true, 0xde18c9319dd4f26a );                                     
        SDK_FIXED_SIZE( reenumerate_self_interface_standard_t, 0x28 );                                     
    };                                                                        
};
#include "magic/reenumerate_self_interface_standard_t.end.hpp"
SDK_VERIFY( struct wdf::reenumerate_self_interface_standard_t, 0x28 );
