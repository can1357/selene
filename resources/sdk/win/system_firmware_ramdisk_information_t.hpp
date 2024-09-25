#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_firmware_ramdisk_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FIRMWARE_RAMDISK_INFORMATION]
    // => Windows 11
    //
    struct system_firmware_ramdisk_information_t
    {                                           
        // Windows 11              
        //                         
        _m00 uint32_t version;                    //{ +0x0000    } | .Version
        _m01 uint32_t block_size;                 //{ +0x0004    } | .BlockSize
        _m02 uint64_t base_address;               //{ +0x0008    } | .BaseAddress
        _m03 uint64_t size;                       //{ +0x0010    } | .Size
                                                
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FIRMWARE_RAMDISK_INFORMATION.$", 0x0, false, 0x60f3970ad9baa4d4 );             
        SDK_FIXED_SIZE( system_firmware_ramdisk_information_t, 0x18 );             
    };                                          
};
#include "magic/system_firmware_ramdisk_information_t.end.hpp"
SDK_VERIFY( struct win::system_firmware_ramdisk_information_t, 0x18 );
