#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_device_attributes_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_ATTRIBUTES_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_device_attributes_descriptor_t
    {                                            
        // WDK 10                
        //                       
        _m00 uint32_t version;                     //{ +0x0000    } | .Version
        _m01 uint32_t size;                        //{ +0x0004    } | .Size
        _m02 uint64_t attributes;                  //{ +0x0008    } | .Attributes
                                                 
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_ATTRIBUTES_DESCRIPTOR.$", 0x0, false, 0xdb940eb28ca8226b );           
        SDK_FIXED_SIZE( storage_device_attributes_descriptor_t, 0x10 );           
    };                                           
};
#include "magic/storage_device_attributes_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_attributes_descriptor_t, 0x10 );
