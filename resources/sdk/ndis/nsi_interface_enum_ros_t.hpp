#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"
#include "../nt/guid_t.hpp"
#include "physical_medium_t.hpp"
#include "net_if_access_type_t.hpp"
#include "if_counted_string_lh_t.hpp"
#include "net_if_direction_type_t.hpp"
#include "net_if_connection_type_t.hpp"

#include "magic/nsi_interface_enum_ros_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NSI_INTERFACE_ENUM_ROS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nsi_interface_enum_ros_t                                   
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 uint32_t                            if_index;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ifIndex
        _m01 struct ndis::if_counted_string_lh_t if_descr;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ifDescr
        _m02 uint16_t                            if_type;               //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .ifType
        _m03 enum ndis::net_if_access_type_t     access_type;           //{ +0x020c    +0x020c    +0x020c    +0x020c    } | .AccessType
        _m04 enum ndis::net_if_direction_type_t  direction_type;        //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .DirectionType
        _m05 enum ndis::net_if_connection_type_t connection_type;       //{ +0x0214    +0x0214    +0x0214    +0x0214    } | .ConnectionType
        _m06 struct nt::guid_t                   interface_guid;        //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .InterfaceGuid
        _m07 uint8_t                             if_connector_present;  //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .ifConnectorPresent
        _m08 uint32_t                            if_flags;              //{ +0x022c    +0x022c    +0x022c    +0x022c    } | .ifFlags
        _m09 enum ndis::medium_t                 media_type;            //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .MediaType
        _m10 enum ndis::physical_medium_t        physical_medium_type;  //{ +0x0234    +0x0234    +0x0234    +0x0234    } | .PhysicalMediumType
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_NSI_INTERFACE_ENUM_ROS.$", 0x238, true, 0xcb13f0747f91e6f0 );                     
        SDK_FIXED_SIZE( nsi_interface_enum_ros_t, 0x238 );                     
    };                                                                
};
#include "magic/nsi_interface_enum_ros_t.end.hpp"
SDK_VERIFY( struct ndis::nsi_interface_enum_ros_t, 0x238 );
