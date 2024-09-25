#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/interface_t.hpp"

#include "magic/sdev_identifier_interface_t.start.hpp"
namespace wdf
{
    // [struct _SDEV_IDENTIFIER_INTERFACE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sdev_identifier_interface_t                        
    {                                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 struct nt::interface_t          interface_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceHeader
        _m01 sdk::function<uint64_t(void*)>* get_identifier;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GetIdentifier
                                                              
        SDK_NONVOL_PROPERTIES( "_SDEV_IDENTIFIER_INTERFACE.$", 0x28, true, 0x6c17887a9747855d );                 
        SDK_FIXED_SIZE( sdev_identifier_interface_t, 0x28 );                 
    };                                                        
};
#include "magic/sdev_identifier_interface_t.end.hpp"
SDK_VERIFY( struct wdf::sdev_identifier_interface_t, 0x28 );
