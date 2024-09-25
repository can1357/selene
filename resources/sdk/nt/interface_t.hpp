#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interface_t.start.hpp"
namespace nt
{
    // [struct _INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct interface_t                                         
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                     
        _m00 uint16_t                    size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                    version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                       context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>* interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>* interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
                                                               
        SDK_NONVOL_PROPERTIES( "_INTERFACE.$", 0x20, true, 0xfdd1f61270d60d77 );                      
        SDK_FIXED_SIZE( interface_t, 0x20 );                      
    };                                                         
};
#include "magic/interface_t.end.hpp"
SDK_VERIFY( struct nt::interface_t, 0x20 );
