#pragma once
#include <sdkgen/support_library.hpp>
#include "pointer_device_type_t.hpp"

namespace win { struct hmonitor_t; }

#include "magic/pointer_device_info_t.start.hpp"
namespace tag
{
    // [struct tagPOINTER_DEVICE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pointer_device_info_t                                 
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                       
        _m00 uint32_t                        display_orientation;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .displayOrientation
        _m01 void*                           device;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .device
        _m02 enum tag::pointer_device_type_t pointer_device_type;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pointerDeviceType
        _m03 struct win::hmonitor_t*         monitor;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .monitor
        _m04 uint32_t                        starting_cursor_id;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .startingCursorId
        _m05 uint16_t                        max_active_contacts;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .maxActiveContacts
        _m06 sdk::array<wchar_t, 520>        product_string;       //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .productString
                                                                 
        SDK_MAGIC_PROPERTIES( "tagPOINTER_DEVICE_INFO.$", 0x438, true, 0xea10a27c737bae2d );                    
        SDK_FIXED_SIZE( pointer_device_info_t, 0x438 );                    
    };                                                           
};
#include "magic/pointer_device_info_t.end.hpp"
SDK_VERIFY( struct tag::pointer_device_info_t, 0x438 );
