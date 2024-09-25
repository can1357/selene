#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_firmware_slot_info_v2_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_FIRMWARE_SLOT_INFO_V2]
    // => WDK 10 (NV)
    //
    struct storage_firmware_slot_info_v2_t       
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint8_t                 slot_number;  //{ +0x0000    } | .SlotNumber
        _m01 uint8_t                 read_only;    //{ +0x0001    } | .ReadOnly
        _m02 sdk::array<uint8_t, 16> revision;     //{ +0x0008    } | .Revision
                                                 
        SDK_NONVOL_PROPERTIES( "_STORAGE_FIRMWARE_SLOT_INFO_V2.$", 0x0, false, 0xd7dac6e7dfd5228 );            
        SDK_FIXED_SIZE( storage_firmware_slot_info_v2_t, 0x18 );            
    };                                           
};
#include "magic/storage_firmware_slot_info_v2_t.end.hpp"
SDK_VERIFY( struct nt::storage_firmware_slot_info_v2_t, 0x18 );
