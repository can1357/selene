#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mp_device_data_set_range_t.start.hpp"
namespace nt
{
    // [struct _MP_DEVICE_DATA_SET_RANGE]
    // => WDK 10 (NV)
    //
    struct mp_device_data_set_range_t 
    {                                 
        // WDK 10                     
        //                            
        _m00 int64_t  starting_offset;  //{ +0x0000    } | .StartingOffset
        _m01 uint64_t length_in_bytes;  //{ +0x0008    } | .LengthInBytes
                                      
        SDK_NONVOL_PROPERTIES( "_MP_DEVICE_DATA_SET_RANGE.$", 0x0, false, 0xe106d07c861e65c9 );                
        SDK_FIXED_SIZE( mp_device_data_set_range_t, 0x10 );                
    };                                
};
#include "magic/mp_device_data_set_range_t.end.hpp"
SDK_VERIFY( struct nt::mp_device_data_set_range_t, 0x10 );
