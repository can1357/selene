#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"
#include "../nt/guid_t.hpp"
#include "object_header_t.hpp"
#include "physical_medium_t.hpp"
#include "net_if_access_type_t.hpp"
#include "net_if_direction_type_t.hpp"
#include "net_if_connection_type_t.hpp"
#include "net_physical_location_lh_t.hpp"

#include "magic/net_if_information_t.start.hpp"
namespace ndis
{
    // [struct _NET_IF_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_if_information_t                                                    
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                         
        _m00 struct ndis::object_header_t            header;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                flags;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 struct ndis::net_physical_location_lh_t physical_location;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PhysicalLocation
        _m03 uint32_t                                wan_tunnel_type;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .WanTunnelType
        _m04 uint32_t                                port_number;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PortNumber
        _m05 enum ndis::net_if_access_type_t         access_type;                    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .AccessType
        _m06 enum ndis::net_if_direction_type_t      direction_type;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DirectionType
        _m07 enum ndis::net_if_connection_type_t     connection_type;                //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ConnectionType
        _m08 uint8_t                                 if_connector_present;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ifConnectorPresent
        _m09 uint16_t                                phys_address_length;            //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .PhysAddressLength
        _m10 uint16_t                                phys_address_offset;            //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PhysAddressOffset
        _m11 uint16_t                                permanent_phys_address_offset;  //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .PermanentPhysAddressOffset
        _m12 uint16_t                                friendly_name_length;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FriendlyNameLength
        _m13 uint16_t                                friendly_name_offset;           //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .FriendlyNameOffset
        _m14 struct nt::guid_t                       interface_guid;                 //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .InterfaceGuid
        _m15 struct nt::guid_t                       network_guid;                   //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .NetworkGuid
        _m16 uint32_t                                supported_statistics;           //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .SupportedStatistics
        _m17 enum ndis::medium_t                     media_type;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MediaType
        _m18 enum ndis::physical_medium_t            physical_medium_type;           //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .PhysicalMediumType
                                                                                   
        SDK_MAGIC_PROPERTIES( "_NET_IF_INFORMATION.$", 0x60, true, 0xe20b6a1569ce2b9f );                              
        SDK_FIXED_SIZE( net_if_information_t, 0x60 );                              
    };                                                                             
};
#include "magic/net_if_information_t.end.hpp"
SDK_VERIFY( struct ndis::net_if_information_t, 0x60 );
