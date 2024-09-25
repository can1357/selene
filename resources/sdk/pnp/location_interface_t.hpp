#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/location_interface_t.start.hpp"
namespace pnp
{
    // [struct _PNP_LOCATION_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct location_interface_t                                              
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m00 uint16_t                                  size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                  version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                     context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*               interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*               interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 sdk::function<int32_t(void*, wchar_t**)>* get_location_string;    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .GetLocationString
                                                                             
        SDK_NONVOL_PROPERTIES( "_PNP_LOCATION_INTERFACE.$", 0x28, true, 0x3c09dc59a8ddb603 );                      
        SDK_FIXED_SIZE( location_interface_t, 0x28 );                        
    };                                                                       
};
#include "magic/location_interface_t.end.hpp"
SDK_VERIFY( struct pnp::location_interface_t, 0x28 );
