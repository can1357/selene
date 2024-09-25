#pragma once
#include <sdkgen/support_library.hpp>
#include "port_pnp_state_t.hpp"
#include "port_characteristics_t.hpp"

#include "magic/port_block_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PORT_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_block_t                                               
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 nt::list_entry_t                    link;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 enum ndis::port_pnp_state_t         port_pn_p_state;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PortPnPState
        _m02 enum ndis::port_pnp_state_t         prev_port_pn_p_state;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PrevPortPnPState
        _m03 struct ndis::port_characteristics_t port_characteristics;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PortCharacteristics
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PORT_BLOCK.$", 0x58, true, 0x87eec4e54c0c6c95 );                     
        SDK_FIXED_SIZE( port_block_t, 0x58 );                         
    };                                                                
};
#include "magic/port_block_t.end.hpp"
SDK_VERIFY( struct ndis::port_block_t, 0x58 );
