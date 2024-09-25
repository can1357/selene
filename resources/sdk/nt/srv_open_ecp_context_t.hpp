#pragma once
#include <sdkgen/support_library.hpp>
#include "srv_instance_type_t.hpp"

#include "magic/srv_open_ecp_context_t.start.hpp"
namespace nt
{
    struct sockaddr_storage_t;

    // [struct _SRV_OPEN_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct srv_open_ecp_context_t                              
    {                                                          
        // WDK 10                                              
        //                                                     
        _m00 nt::unicode_view*              share_name;          //{ +0x0000    } | .ShareName
        _m01 struct nt::sockaddr_storage_t* socket_address;      //{ +0x0008    } | .SocketAddress
        _m02 uint8_t                        oplock_block_state;  //{ +0x0010    } | .OplockBlockState
        _m03 uint8_t                        oplock_app_state;    //{ +0x0011    } | .OplockAppState
        _m04 uint8_t                        oplock_final_state;  //{ +0x0012    } | .OplockFinalState
        _m05 uint16_t                       version;             //{ +0x0014    } | .Version
        _m06 enum nt::srv_instance_type_t   instance_type;       //{ +0x0018    } | .InstanceType
                                                               
        SDK_NONVOL_PROPERTIES( "_SRV_OPEN_ECP_CONTEXT.$", 0x0, false, 0xf093a0b8536e1cf9 );                   
        SDK_FIXED_SIZE( srv_open_ecp_context_t, 0x20 );                   
    };                                                         
};
#include "magic/srv_open_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::srv_open_ecp_context_t, 0x20 );
