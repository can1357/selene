#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_device_address_t.start.hpp"
namespace nt
{
    // [struct DEBUG_DEVICE_ADDRESS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct debug_device_address_t        
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint8_t  type;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  valid;               //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Valid
        _m02 uint8_t* translated_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TranslatedAddress
        _m03 uint32_t length;              //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m04 uint8_t  bit_width;           //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BitWidth
        _m05 uint8_t  access_size;         //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .AccessSize
                                         
        SDK_NONVOL_PROPERTIES( "DEBUG_DEVICE_ADDRESS.$", 0x18, true, 0xaa47c9f86b674cc );                   
        SDK_FIXED_SIZE( debug_device_address_t, 0x18 );                   
    };                                   
};
#include "magic/debug_device_address_t.end.hpp"
SDK_VERIFY( struct nt::debug_device_address_t, 0x18 );
