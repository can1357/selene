#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_firmware_slot_info_v2_t.hpp"

#include "magic/storage_firmware_info_v2_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_FIRMWARE_INFO_V2]
    // => WDK 10 (NV)
    //
    struct storage_firmware_info_v2_t         
    {                                         
        using slot_t = sdk::array<struct nt::storage_firmware_slot_info_v2_t>;                        
                                              
        // WDK 10                             
        //                                    
        _m00 uint32_t version;                  //{ +0x0000    } | .Version
        _m01 uint32_t size;                     //{ +0x0004    } | .Size
        _m02 uint8_t  upgrade_support;          //{ +0x0008    } | .UpgradeSupport
        _m03 uint8_t  slot_count;               //{ +0x0009    } | .SlotCount
        _m04 uint8_t  active_slot;              //{ +0x000a    } | .ActiveSlot
        _m05 uint8_t  pending_activate_slot;    //{ +0x000b    } | .PendingActivateSlot
        _m06 uint8_t  firmware_shared;          //{ +0x000c    } | .FirmwareShared
        _m07 uint32_t image_payload_alignment;  //{ +0x0010    } | .ImagePayloadAlignment
        _m08 uint32_t image_payload_max_size;   //{ +0x0014    } | .ImagePayloadMaxSize
        _m09 slot_t   slot;                     //{ +0x0018    } | .Slot
                                              
        SDK_NONVOL_PROPERTIES( "_STORAGE_FIRMWARE_INFO_V2.$", 0x0, false, 0xdbc59d6abcef3552 );                        
        SDK_FIXED_SIZE( storage_firmware_info_v2_t, 0x18 );                        
    };                                        
};
#include "magic/storage_firmware_info_v2_t.end.hpp"
SDK_VERIFY( struct nt::storage_firmware_info_v2_t, 0x18 );
