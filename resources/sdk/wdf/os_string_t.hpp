#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/os_string_t.start.hpp"
namespace wdf
{
    // [struct _OS_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct os_string_t                                
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint8_t                b_length;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bLength
        _m01 uint8_t                b_descriptor_type;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .bDescriptorType
        _m02 sdk::array<wchar_t, 7> microsoft_string;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MicrosoftString
        _m03 uint8_t                b_vendor_code;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bVendorCode
        _m04 uint8_t                b_pad;              //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .bPad
        _m05 uint8_t                b_flags;            //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .bFlags
                                                      
        SDK_MAGIC_PROPERTIES( "_OS_STRING.$", 0x12, true, 0x47e969b99fad4faa );                  
        SDK_FIXED_SIZE( os_string_t, 0x12 );                  
    };                                                
};
#include "magic/os_string_t.end.hpp"
SDK_VERIFY( struct wdf::os_string_t, 0x12 );
