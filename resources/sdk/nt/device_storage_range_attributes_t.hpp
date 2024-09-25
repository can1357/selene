#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_storage_range_attributes_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_STORAGE_RANGE_ATTRIBUTES]
    // => WDK 10 (NV)
    //
    struct device_storage_range_attributes_t
    {                                       
        // WDK 10                     
        //                            
        _m00 uint64_t length_in_bytes;        //{ +0x0000    } | .LengthInBytes
        _m01 uint32_t all_flags;              //{ +0x0008    } | .AllFlags
        _m02 uint1_t  is_range_bad;           //{ +0x0008@0  } | .IsRangeBad
                                            
        SDK_NONVOL_PROPERTIES( "_DEVICE_STORAGE_RANGE_ATTRIBUTES.$", 0x0, false, 0x8025a46a767d13fd );                
        SDK_FIXED_SIZE( device_storage_range_attributes_t, 0x10 );                
    };                                      
};
#include "magic/device_storage_range_attributes_t.end.hpp"
SDK_VERIFY( struct nt::device_storage_range_attributes_t, 0x10 );
