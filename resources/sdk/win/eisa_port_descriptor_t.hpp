#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eisa_port_descriptor_t.start.hpp"
namespace win
{
    // [struct _EISA_PORT_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct eisa_port_descriptor_t 
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 uint5_t number_ports;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .NumberPorts
        _m01 uint1_t shared;        //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Shared
        _m02 uint1_t more_entries;  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .MoreEntries
                                  
        SDK_NONVOL_PROPERTIES( "_EISA_PORT_DESCRIPTOR.$", 0x1, true, 0xaeb492969f005bc2 );             
        SDK_FIXED_SIZE( eisa_port_descriptor_t, 0x1 );             
    };                            
};
#include "magic/eisa_port_descriptor_t.end.hpp"
SDK_VERIFY( struct win::eisa_port_descriptor_t, 0x1 );
