#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_device_number_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_NUMBER]
    // => WDK 10 (NV)
    //
    struct storage_device_number_t     
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t device_type;       //{ +0x0000    } | .DeviceType
        _m01 uint32_t device_number;     //{ +0x0004    } | .DeviceNumber
        _m02 uint32_t partition_number;  //{ +0x0008    } | .PartitionNumber
                                       
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_NUMBER.$", 0x0, false, 0x1570592852cd2e4a );                 
        SDK_FIXED_SIZE( storage_device_number_t, 0xc );                 
    };                                 
};
#include "magic/storage_device_number_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_number_t, 0xc );
