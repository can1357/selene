#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/firmware_type_t.hpp"

#include "magic/system_boot_environment_information_v1_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_BOOT_ENVIRONMENT_INFORMATION_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_boot_environment_information_v1_t   
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                            
        _m00 struct nt::guid_t        boot_identifier;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BootIdentifier
        _m01 enum nt::firmware_type_t firmware_type;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FirmwareType
                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION_V1.$", 0x14, true, 0x79f0549da947ac07 );                
        SDK_FIXED_SIZE( system_boot_environment_information_v1_t, 0x14 );                
    };                                                
};
#include "magic/system_boot_environment_information_v1_t.end.hpp"
SDK_VERIFY( struct win::system_boot_environment_information_v1_t, 0x14 );
