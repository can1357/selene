#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/bootdisk_information_ex_t.start.hpp"
namespace wdf
{
    // [struct _BOOTDISK_INFORMATION_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bootdisk_information_ex_t                   
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                             
        _m00 int64_t           boot_partition_offset;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BootPartitionOffset
        _m01 int64_t           system_partition_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SystemPartitionOffset
        _m02 uint32_t          boot_device_signature;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BootDeviceSignature
        _m03 uint32_t          system_device_signature;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SystemDeviceSignature
        _m04 struct nt::guid_t boot_device_guid;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .BootDeviceGuid
        _m05 struct nt::guid_t system_device_guid;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SystemDeviceGuid
        _m06 uint8_t           boot_device_is_gpt;       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .BootDeviceIsGpt
        _m07 uint8_t           system_device_is_gpt;     //{ +0x0039    +0x0039    +0x0039    +0x0039    +0x0039    } | .SystemDeviceIsGpt
                                                       
        SDK_NONVOL_PROPERTIES( "_BOOTDISK_INFORMATION_EX.$", 0x40, true, 0x91270bf578eb9427 );                        
        SDK_FIXED_SIZE( bootdisk_information_ex_t, 0x40 );                        
    };                                                 
};
#include "magic/bootdisk_information_ex_t.end.hpp"
SDK_VERIFY( struct wdf::bootdisk_information_ex_t, 0x40 );
