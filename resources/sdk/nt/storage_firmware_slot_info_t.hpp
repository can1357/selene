#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_firmware_slot_info_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_FIRMWARE_SLOT_INFO]
    // => WDK 10 (NV)
    //
    struct storage_firmware_slot_info_t                          
    {                                                            
        union u0_revision_t                                      
        {                                                        
            // WDK 10                                            
            //                                                   
            _m02 sdk::array<uint8_t, 8> info;                      //{ +0x0000    } | .Info
            _m03 uint64_t               as_ulonglong;              //{ +0x0000    } | .AsUlonglong
                                                                 
            SDK_NONVOL_PROPERTIES( "_STORAGE_FIRMWARE_SLOT_INFO.Revision.$", 0x0, false, 0x21a45df67fa38667 );                         
            SDK_FIXED_SIZE( u0_revision_t, 0x8 );                         
        };                                                       
                                                                 
        // WDK 10                                                
        //                                                       
        _m00 uint8_t                                 slot_number;  //{ +0x0000    } | .SlotNumber
        _m01 uint8_t                                 read_only;    //{ +0x0001    } | .ReadOnly
        _m04 u0_revision_t                           revision;     //{ +0x0008    } | .Revision
                                                                 
        SDK_NONVOL_PROPERTIES( "_STORAGE_FIRMWARE_SLOT_INFO.$", 0x0, false, 0x747c4050728eb72b );            
        SDK_FIXED_SIZE( storage_firmware_slot_info_t, 0x10 );            
    };                                                           
};
#include "magic/storage_firmware_slot_info_t.end.hpp"
SDK_VERIFY( union nt::storage_firmware_slot_info_t::u0_revision_t, 0x8 );
SDK_VERIFY( struct nt::storage_firmware_slot_info_t, 0x10 );
