#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/storage_device_number_ex_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_NUMBER_EX]
    // => WDK 10 (NV)
    //
    struct storage_device_number_ex_t           
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint32_t          version;           //{ +0x0000    } | .Version
        _m01 uint32_t          size;              //{ +0x0004    } | .Size
        _m02 uint32_t          flags;             //{ +0x0008    } | .Flags
        _m03 uint32_t          device_type;       //{ +0x000c    } | .DeviceType
        _m04 uint32_t          device_number;     //{ +0x0010    } | .DeviceNumber
        _m05 struct nt::guid_t device_guid;       //{ +0x0014    } | .DeviceGuid
        _m06 uint32_t          partition_number;  //{ +0x0024    } | .PartitionNumber
                                                
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_NUMBER_EX.$", 0x0, false, 0xb0e32ce52b25c883 );                 
        SDK_FIXED_SIZE( storage_device_number_ex_t, 0x28 );                 
    };                                          
};
#include "magic/storage_device_number_ex_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_number_ex_t, 0x28 );
