#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_data_set_range_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DATA_SET_RANGE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_data_set_range_t    
    {                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 int64_t  starting_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingOffset
        _m01 uint64_t length_in_bytes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LengthInBytes
                                      
        SDK_NONVOL_PROPERTIES( "_DEVICE_DATA_SET_RANGE.$", 0x10, true, 0x547aa553ca9e2e6c );                
        SDK_FIXED_SIZE( device_data_set_range_t, 0x10 );                
    };                                
};
#include "magic/device_data_set_range_t.end.hpp"
SDK_VERIFY( struct nt::device_data_set_range_t, 0x10 );
