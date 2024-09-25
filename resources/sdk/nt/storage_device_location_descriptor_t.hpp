#pragma once
#include <sdkgen/support_library.hpp>
#include "device_location_t.hpp"

#include "magic/storage_device_location_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_LOCATION_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_device_location_descriptor_t         
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t                     version;        //{ +0x0000    } | .Version
        _m01 uint32_t                     size;           //{ +0x0004    } | .Size
        _m02 struct nt::device_location_t location;       //{ +0x0008    } | .Location
        _m03 uint32_t                     string_offset;  //{ +0x0020    } | .StringOffset
                                                        
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_LOCATION_DESCRIPTOR.$", 0x0, false, 0x7a075575dd49f678 );              
        SDK_FIXED_SIZE( storage_device_location_descriptor_t, 0x24 );              
    };                                                  
};
#include "magic/storage_device_location_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_location_descriptor_t, 0x24 );
