#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/switch_nic_status_indication_t.start.hpp"
namespace ndis
{
    struct status_indication_t;

    // [struct _NDIS_SWITCH_NIC_STATUS_INDICATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct switch_nic_status_indication_t                            
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                           
        _m00 struct ndis::object_header_t      header;                 //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                          flags;                  //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                          source_port_id;         //{ +0x0008    +0x0008    +0x0008    } | .SourcePortId
        _m03 uint16_t                          source_nic_index;       //{ +0x000c    +0x000c    +0x000c    } | .SourceNicIndex
        _m04 uint32_t                          destination_port_id;    //{ +0x0010    +0x0010    +0x0010    } | .DestinationPortId
        _m05 uint16_t                          destination_nic_index;  //{ +0x0014    +0x0014    +0x0014    } | .DestinationNicIndex
        _m06 struct ndis::status_indication_t* status_indication;      //{ +0x0018    +0x0018    +0x0018    } | .StatusIndication
                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_SWITCH_NIC_STATUS_INDICATION.$", 0x20, true, 0xe8dc70548f174826 );                      
        SDK_FIXED_SIZE( switch_nic_status_indication_t, 0x20 );                      
    };                                                               
};
#include "magic/switch_nic_status_indication_t.end.hpp"
SDK_VERIFY( struct ndis::switch_nic_status_indication_t, 0x20 );
