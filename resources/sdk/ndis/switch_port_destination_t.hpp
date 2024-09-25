#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/switch_port_destination_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SWITCH_PORT_DESTINATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_port_destination_t    
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t port_id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PortId
        _m01 uint16_t nic_index;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NicIndex
        _m02 uint1_t  is_excluded;        //{ +0x0006@0  +0x0006@0  +0x0006@0  +0x0006@0  } | .IsExcluded
        _m03 uint1_t  preserve_vlan;      //{ +0x0006@1  +0x0006@1  +0x0006@1  +0x0006@1  } | .PreserveVLAN
        _m04 uint1_t  preserve_priority;  //{ +0x0006@2  +0x0006@2  +0x0006@2  +0x0006@2  } | .PreservePriority
                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_SWITCH_PORT_DESTINATION.$", 0x8, true, 0xe4af4b70acca78ed );                  
        SDK_FIXED_SIZE( switch_port_destination_t, 0x8 );                  
    };                                  
};
#include "magic/switch_port_destination_t.end.hpp"
SDK_VERIFY( struct ndis::switch_port_destination_t, 0x8 );
