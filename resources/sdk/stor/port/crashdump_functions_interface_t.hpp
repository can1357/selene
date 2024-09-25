#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crashdump_functions_interface_t.start.hpp"
namespace stor::port
{
    // [struct _CRASHDUMP_FUNCTIONS_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct crashdump_functions_interface_t                        
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                        
        _m00 uint16_t                       size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                       version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                          context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*    interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*    interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 sdk::function<int32_t(void*)>* power_on;               //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .PowerOn
                                                                  
        SDK_NONVOL_PROPERTIES( "_CRASHDUMP_FUNCTIONS_INTERFACE.$", 0x28, true, 0x67678a17a787d24b );                      
        SDK_FIXED_SIZE( crashdump_functions_interface_t, 0x28 );                      
    };                                                            
};
#include "magic/crashdump_functions_interface_t.end.hpp"
SDK_VERIFY( struct stor::port::crashdump_functions_interface_t, 0x28 );
