#pragma once
#include <sdkgen/support_library.hpp>
#include "descriptor_desc_list_t.hpp"

#include "magic/descriptor_t.start.hpp"
namespace hid
{
    // [struct _HID_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct descriptor_t                           
    {                                             
        using descriptor_list_t = sdk::array<struct hid::descriptor_desc_list_t, 1>;                  
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                        
        _m00 uint8_t            b_length;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t            b_descriptor_type;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 uint16_t           bcd_hid;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .bcdHID
        _m03 uint8_t            b_country;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .bCountry
        _m04 uint8_t            b_num_descriptors;  //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .bNumDescriptors
        _m05 descriptor_list_t  descriptor_list;    //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .DescriptorList
                                                  
        SDK_MAGIC_PROPERTIES( "_HID_DESCRIPTOR.$", 0x9, true, 0xe3e84c8610b27f7a );                  
        SDK_FIXED_SIZE( descriptor_t, 0x9 );                  
    };                                            
};
#include "magic/descriptor_t.end.hpp"
SDK_VERIFY( struct hid::descriptor_t, 0x9 );
