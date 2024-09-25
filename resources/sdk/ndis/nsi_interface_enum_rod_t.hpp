#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "net_if_oper_status_t.hpp"
#include "net_if_admin_status_t.hpp"
#include "if_counted_string_lh_t.hpp"
#include "if_physical_address_lh_t.hpp"
#include "net_if_media_duplex_state_t.hpp"
#include "net_if_media_connect_state_t.hpp"

#include "magic/nsi_interface_enum_rod_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NSI_INTERFACE_ENUM_ROD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nsi_interface_enum_rod_t                                           
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                    
        _m00 uint32_t                                compartment_id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CompartmentId
        _m01 struct nt::guid_t                       network_guid;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NetworkGuid
        _m02 struct ndis::if_counted_string_lh_t     if_alias;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ifAlias
        _m03 enum ndis::net_if_oper_status_t         if_oper_status;            //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .ifOperStatus
        _m04 uint32_t                                if_oper_status_flags;      //{ +0x021c    +0x021c    +0x021c    +0x021c    } | .ifOperStatusFlags
        _m05 uint32_t                                if_mtu;                    //{ +0x0220    +0x0220    +0x0220    +0x0220    } | .ifMtu
        _m06 struct ndis::if_physical_address_lh_t   if_phys_address;           //{ +0x0224    +0x0224    +0x0224    +0x0224    } | .ifPhysAddress
        _m07 struct ndis::if_physical_address_lh_t   permanent_phys_address;    //{ +0x0246    +0x0246    +0x0246    +0x0246    } | .PermanentPhysAddress
        _m08 enum ndis::net_if_admin_status_t        if_admin_status;           //{ +0x0268    +0x0268    +0x0268    +0x0268    } | .ifAdminStatus
        _m09 uint64_t                                xmit_link_speed;           //{ +0x0270    +0x0270    +0x0270    +0x0270    } | .XmitLinkSpeed
        _m10 uint64_t                                rcv_link_speed;            //{ +0x0278    +0x0278    +0x0278    +0x0278    } | .RcvLinkSpeed
        _m11 uint8_t                                 if_promiscuous_mode;       //{ +0x0280    +0x0280    +0x0280    +0x0280    } | .ifPromiscuousMode
        _m12 uint8_t                                 if_device_wake_up_enable;  //{ +0x0281    +0x0281    +0x0281    +0x0281    } | .ifDeviceWakeUpEnable
        _m13 enum ndis::net_if_media_connect_state_t media_connect_state;       //{ +0x0284    +0x0284    +0x0284    +0x0284    } | .MediaConnectState
        _m14 enum ndis::net_if_media_duplex_state_t  media_duplex_state;        //{ +0x0288    +0x0288    +0x0288    +0x0288    } | .MediaDuplexState
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                    
        _m15 uint8_t                                 if_hide_interface_in_ui;   //{ +0x0282    +0x0282    +0x0282    } | .ifHideInterfaceInUi
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_NSI_INTERFACE_ENUM_ROD.$", 0x290, true, 0x1d4c5e9901e51f94 );                         
        SDK_FIXED_SIZE( nsi_interface_enum_rod_t, 0x290 );                         
    };                                                                        
};
#include "magic/nsi_interface_enum_rod_t.end.hpp"
SDK_VERIFY( struct ndis::nsi_interface_enum_rod_t, 0x290 );
