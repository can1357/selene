#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_attributes_t.start.hpp"
namespace hid
{
    // [struct _HID_DEVICE_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_attributes_t       
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t vendor_id;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .VendorID
        _m02 uint16_t product_id;      //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .ProductID
        _m03 uint16_t version_number;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VersionNumber
                                     
        SDK_MAGIC_PROPERTIES( "_HID_DEVICE_ATTRIBUTES.$", 0x20, true, 0x401466dfcff7625b );               
        SDK_FIXED_SIZE( device_attributes_t, 0x20 );               
    };                               
};
#include "magic/device_attributes_t.end.hpp"
SDK_VERIFY( struct hid::device_attributes_t, 0x20 );
