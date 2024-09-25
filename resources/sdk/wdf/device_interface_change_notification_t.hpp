#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/device_interface_change_notification_t.start.hpp"
namespace wdf
{
    // [struct _DEVICE_INTERFACE_CHANGE_NOTIFICATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_interface_change_notification_t   
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 uint16_t          version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t          size;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::guid_t event;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Event
        _m03 struct nt::guid_t interface_class_guid;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .InterfaceClassGuid
        _m04 nt::unicode_view* symbolic_link_name;    //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SymbolicLinkName
                                                    
        SDK_NONVOL_PROPERTIES( "_DEVICE_INTERFACE_CHANGE_NOTIFICATION.$", 0x30, true, 0xdd087538fe7be1c9 );                     
        SDK_FIXED_SIZE( device_interface_change_notification_t, 0x30 );                     
    };                                              
};
#include "magic/device_interface_change_notification_t.end.hpp"
SDK_VERIFY( struct wdf::device_interface_change_notification_t, 0x30 );
