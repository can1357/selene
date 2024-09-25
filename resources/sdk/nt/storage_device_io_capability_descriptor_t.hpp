#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_device_io_capability_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_device_io_capability_descriptor_t
    {                                               
        // WDK 10                          
        //                                 
        _m00 uint32_t version;                        //{ +0x0000    } | .Version
        _m01 uint32_t size;                           //{ +0x0004    } | .Size
        _m02 uint32_t lun_max_io_count;               //{ +0x0008    } | .LunMaxIoCount
        _m03 uint32_t adapter_max_io_count;           //{ +0x000c    } | .AdapterMaxIoCount
                                                    
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR.$", 0x0, false, 0x92902cc6d4687a8f );                     
        SDK_FIXED_SIZE( storage_device_io_capability_descriptor_t, 0x10 );                     
    };                                              
};
#include "magic/storage_device_io_capability_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_io_capability_descriptor_t, 0x10 );
