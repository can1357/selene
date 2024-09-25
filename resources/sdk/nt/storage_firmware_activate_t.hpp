#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_firmware_activate_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_FIRMWARE_ACTIVATE]
    // => WDK 10 (NV)
    //
    struct storage_firmware_activate_t 
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t version;           //{ +0x0000    } | .Version
        _m01 uint32_t size;              //{ +0x0004    } | .Size
        _m02 uint8_t  slot_to_activate;  //{ +0x0008    } | .SlotToActivate
                                       
        SDK_NONVOL_PROPERTIES( "_STORAGE_FIRMWARE_ACTIVATE.$", 0x0, false, 0x8e4d28ddfbb260a7 );                 
        SDK_FIXED_SIZE( storage_firmware_activate_t, 0xc );                 
    };                                 
};
#include "magic/storage_firmware_activate_t.end.hpp"
SDK_VERIFY( struct nt::storage_firmware_activate_t, 0xc );
