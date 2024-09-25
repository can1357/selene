#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_storage_address_range_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_STORAGE_ADDRESS_RANGE]
    // => WDK 10 (NV)
    //
    struct device_storage_address_range_t
    {                                    
        // WDK 10                     
        //                            
        _m00 int64_t  start_address;       //{ +0x0000    } | .StartAddress
        _m01 uint64_t length_in_bytes;     //{ +0x0008    } | .LengthInBytes
                                         
        SDK_NONVOL_PROPERTIES( "_DEVICE_STORAGE_ADDRESS_RANGE.$", 0x0, false, 0x34dc3b425d4213c0 );                
        SDK_FIXED_SIZE( device_storage_address_range_t, 0x10 );                
    };                                   
};
#include "magic/device_storage_address_range_t.end.hpp"
SDK_VERIFY( struct nt::device_storage_address_range_t, 0x10 );
