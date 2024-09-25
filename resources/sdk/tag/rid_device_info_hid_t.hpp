#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rid_device_info_hid_t.start.hpp"
namespace tag
{
    // [struct tagRID_DEVICE_INFO_HID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rid_device_info_hid_t        
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t dw_vendor_id;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVendorId
        _m01 uint32_t dw_product_id;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwProductId
        _m02 uint32_t dw_version_number;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwVersionNumber
        _m03 uint16_t us_usage_page;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .usUsagePage
        _m04 uint16_t us_usage;           //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .usUsage
                                        
        SDK_MAGIC_PROPERTIES( "tagRID_DEVICE_INFO_HID.$", 0x10, true, 0x352327c2be561802 );                  
        SDK_FIXED_SIZE( rid_device_info_hid_t, 0x10 );                  
    };                                  
};
#include "magic/rid_device_info_hid_t.end.hpp"
SDK_VERIFY( struct tag::rid_device_info_hid_t, 0x10 );
