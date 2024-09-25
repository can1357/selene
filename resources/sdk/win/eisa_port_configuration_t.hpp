#pragma once
#include <sdkgen/support_library.hpp>
#include "eisa_port_descriptor_t.hpp"

#include "magic/eisa_port_configuration_t.start.hpp"
namespace win
{
    // [struct _EISA_PORT_CONFIGURATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct eisa_port_configuration_t                          
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                    
        _m00 struct win::eisa_port_descriptor_t configuration;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Configuration
        _m01 uint16_t                           port_address;   //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .PortAddress
                                                              
        SDK_NONVOL_PROPERTIES( "_EISA_PORT_CONFIGURATION.$", 0x3, true, 0x46f4e518b91ff280 );              
        SDK_FIXED_SIZE( eisa_port_configuration_t, 0x3 );              
    };                                                        
};
#include "magic/eisa_port_configuration_t.end.hpp"
SDK_VERIFY( struct win::eisa_port_configuration_t, 0x3 );
