#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_device_number_t.hpp"

#include "magic/storage_device_numbers_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_NUMBERS]
    // => WDK 10 (NV)
    //
    struct storage_device_numbers_t       
    {                                     
        using devices_t = sdk::array<struct nt::storage_device_number_t, 1>;                  
                                          
        // WDK 10                         
        //                                
        _m00 uint32_t   version;            //{ +0x0000    } | .Version
        _m01 uint32_t   size;               //{ +0x0004    } | .Size
        _m02 uint32_t   number_of_devices;  //{ +0x0008    } | .NumberOfDevices
        _m03 devices_t  devices;            //{ +0x000c    } | .Devices
                                          
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_NUMBERS.$", 0x0, false, 0xed6f98c21ffc5837 );                  
        SDK_FIXED_SIZE( storage_device_numbers_t, 0x18 );                  
    };                                    
};
#include "magic/storage_device_numbers_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_numbers_t, 0x18 );
