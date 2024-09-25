#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_tier_t.hpp"

#include "magic/storage_device_tiering_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_TIERING_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_device_tiering_descriptor_t                                 
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 uint32_t                                 version;                   //{ +0x0000    } | .Version
        _m01 uint32_t                                 size;                      //{ +0x0004    } | .Size
        _m02 uint32_t                                 flags;                     //{ +0x0008    } | .Flags
        _m03 uint32_t                                 total_number_of_tiers;     //{ +0x000c    } | .TotalNumberOfTiers
        _m04 uint32_t                                 number_of_tiers_returned;  //{ +0x0010    } | .NumberOfTiersReturned
        _m05 sdk::array<struct nt::storage_tier_t, 1> tiers;                     //{ +0x0018    } | .Tiers
                                                                               
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_TIERING_DESCRIPTOR.$", 0x0, false, 0xad7169be0e634d21 );                         
        SDK_FIXED_SIZE( storage_device_tiering_descriptor_t, 0x440 );                         
    };                                                                         
};
#include "magic/storage_device_tiering_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_tiering_descriptor_t, 0x440 );
