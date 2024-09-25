#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_device_unsafe_shutdown_count_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_UNSAFE_SHUTDOWN_COUNT]
    // => WDK 10 (NV)
    //
    struct storage_device_unsafe_shutdown_count_t
    {                                            
        // WDK 10                           
        //                                  
        _m00 uint32_t version;                     //{ +0x0000    } | .Version
        _m01 uint32_t size;                        //{ +0x0004    } | .Size
        _m02 uint32_t unsafe_shutdown_count;       //{ +0x0008    } | .UnsafeShutdownCount
                                                 
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_UNSAFE_SHUTDOWN_COUNT.$", 0x0, false, 0xdf38be4ac376412d );                      
        SDK_FIXED_SIZE( storage_device_unsafe_shutdown_count_t, 0xc );                      
    };                                           
};
#include "magic/storage_device_unsafe_shutdown_count_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_unsafe_shutdown_count_t, 0xc );
