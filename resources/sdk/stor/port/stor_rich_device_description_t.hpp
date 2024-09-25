#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_rich_device_description_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_RICH_DEVICE_DESCRIPTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_rich_device_description_t           
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                          
        _m00 uint32_t             version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t             size;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 sdk::array<char, 17> vendor_id;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VendorId
        _m03 sdk::array<char, 65> model_number;       //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .ModelNumber
        _m04 sdk::array<char, 17> firmware_revision;  //{ +0x005a    +0x005a    +0x005a    +0x005a    } | .FirmwareRevision
                                                    
        SDK_MAGIC_PROPERTIES( "_STOR_RICH_DEVICE_DESCRIPTION.$", 0x6c, true, 0x69c81eaa5dfe34b4 );                  
        SDK_FIXED_SIZE( stor_rich_device_description_t, 0x6c );                  
    };                                              
};
#include "magic/stor_rich_device_description_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_rich_device_description_t, 0x6c );
