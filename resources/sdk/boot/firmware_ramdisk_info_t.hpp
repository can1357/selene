#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/firmware_ramdisk_info_t.start.hpp"
namespace boot
{
    // [struct _BOOT_FIRMWARE_RAMDISK_INFO]
    // => Windows 11
    //
    struct firmware_ramdisk_info_t 
    {                              
        // Windows 11              
        //                         
        _m00 uint32_t version;       //{ +0x0000    } | .Version
        _m01 uint32_t block_size;    //{ +0x0004    } | .BlockSize
        _m02 uint64_t base_address;  //{ +0x0008    } | .BaseAddress
        _m03 uint64_t size;          //{ +0x0010    } | .Size
                                   
        SDK_MAGIC_PROPERTIES( "_BOOT_FIRMWARE_RAMDISK_INFO.$", 0x0, false, 0xb3c64b63812666ad );             
        SDK_FIXED_SIZE( firmware_ramdisk_info_t, 0x18 );             
    };                             
};
#include "magic/firmware_ramdisk_info_t.end.hpp"
SDK_VERIFY( struct boot::firmware_ramdisk_info_t, 0x18 );
