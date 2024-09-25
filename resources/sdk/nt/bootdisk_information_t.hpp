#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bootdisk_information_t.start.hpp"
namespace nt
{
    // [struct _BOOTDISK_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bootdisk_information_t             
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 int64_t  boot_partition_offset;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BootPartitionOffset
        _m01 int64_t  system_partition_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SystemPartitionOffset
        _m02 uint32_t boot_device_signature;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BootDeviceSignature
        _m03 uint32_t system_device_signature;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SystemDeviceSignature
                                              
        SDK_NONVOL_PROPERTIES( "_BOOTDISK_INFORMATION.$", 0x18, true, 0xefa2871d21801abc );                        
        SDK_FIXED_SIZE( bootdisk_information_t, 0x18 );                        
    };                                        
};
#include "magic/bootdisk_information_t.end.hpp"
SDK_VERIFY( struct nt::bootdisk_information_t, 0x18 );
