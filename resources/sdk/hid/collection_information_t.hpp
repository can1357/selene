#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/collection_information_t.start.hpp"
namespace hid
{
    // [struct _HID_COLLECTION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct collection_information_t   
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t descriptor_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DescriptorSize
        _m01 uint8_t  polled;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Polled
        _m02 uint16_t vendor_id;        //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .VendorID
        _m03 uint16_t product_id;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProductID
        _m04 uint16_t version_number;   //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .VersionNumber
                                      
        SDK_MAGIC_PROPERTIES( "_HID_COLLECTION_INFORMATION.$", 0xc, true, 0xd96c88935ca730ea );                
        SDK_FIXED_SIZE( collection_information_t, 0xc );                
    };                                
};
#include "magic/collection_information_t.end.hpp"
SDK_VERIFY( struct hid::collection_information_t, 0xc );
