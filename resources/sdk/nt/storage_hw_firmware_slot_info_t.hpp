#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_hw_firmware_slot_info_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_HW_FIRMWARE_SLOT_INFO]
    // => WDK 10 (NV)
    //
    struct storage_hw_firmware_slot_info_t       
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint32_t                version;      //{ +0x0000    } | .Version
        _m01 uint32_t                size;         //{ +0x0004    } | .Size
        _m02 uint8_t                 slot_number;  //{ +0x0008    } | .SlotNumber
        _m03 uint1_t                 read_only;    //{ +0x0009@0  } | .ReadOnly
        _m04 sdk::array<uint8_t, 16> revision;     //{ +0x0010    } | .Revision
                                                 
        SDK_NONVOL_PROPERTIES( "_STORAGE_HW_FIRMWARE_SLOT_INFO.$", 0x0, false, 0x26b327910d72e9ee );            
        SDK_FIXED_SIZE( storage_hw_firmware_slot_info_t, 0x20 );            
    };                                           
};
#include "magic/storage_hw_firmware_slot_info_t.end.hpp"
SDK_VERIFY( struct nt::storage_hw_firmware_slot_info_t, 0x20 );
