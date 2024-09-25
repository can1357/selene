#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_firmware_partition_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FIRMWARE_PARTITION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_firmware_partition_information_t
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                       
        _m00 nt::unicode_view firmware_partition;   //{ +0x0000    +0x0000    +0x0000    } | .FirmwarePartition
                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FIRMWARE_PARTITION_INFORMATION.$", 0x10, true, 0x450ee0ca5eb7cb0d );                   
        SDK_FIXED_SIZE( system_firmware_partition_information_t, 0x10 );                   
    };                                            
};
#include "magic/system_firmware_partition_information_t.end.hpp"
SDK_VERIFY( struct win::system_firmware_partition_information_t, 0x10 );
