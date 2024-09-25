#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "port_characteristics_t.hpp"

#include "magic/port_array_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PORT_ARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_array_t                                     
    {                                                       
        using ports_t = sdk::array<struct ndis::port_characteristics_t, 1>;                  
                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                  
        _m00 struct ndis::object_header_t header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     number_of_ports;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfPorts
        _m02 uint32_t                     offset_first_port;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OffsetFirstPort
        _m03 uint32_t                     element_size;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ElementSize
        _m04 ports_t                      ports;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Ports
                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_PORT_ARRAY.$", 0x50, true, 0x7a078ec490941522 );                  
        SDK_FIXED_SIZE( port_array_t, 0x50 );                  
    };                                                      
};
#include "magic/port_array_t.end.hpp"
SDK_VERIFY( struct ndis::port_array_t, 0x50 );
