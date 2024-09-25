#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_device_numa_property_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_NUMA_PROPERTY]
    // => WDK 10 (NV)
    //
    struct storage_device_numa_property_t
    {                                    
        // WDK 10               
        //                      
        _m00 uint32_t version;             //{ +0x0000    } | .Version
        _m01 uint32_t size;                //{ +0x0004    } | .Size
        _m02 uint32_t numa_node;           //{ +0x0008    } | .NumaNode
                                         
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_NUMA_PROPERTY.$", 0x0, false, 0x6290e0156aed7604 );          
        SDK_FIXED_SIZE( storage_device_numa_property_t, 0xc );          
    };                                   
};
#include "magic/storage_device_numa_property_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_numa_property_t, 0xc );
