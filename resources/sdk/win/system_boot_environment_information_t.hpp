#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/firmware_type_t.hpp"

#include "magic/system_boot_environment_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_BOOT_ENVIRONMENT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_boot_environment_information_t                          
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                
        _m00 struct nt::guid_t        boot_identifier;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BootIdentifier
        _m01 enum nt::firmware_type_t firmware_type;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FirmwareType
        _m02 uint64_t                 boot_flags;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BootFlags
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                
        _m03 uint1_t                  dbg_menu_os_selection;                //{ +0x0018@0  +0x0018@0  +0x0018@0  } | .DbgMenuOsSelection
        _m04 uint1_t                  dbg_hiber_boot;                       //{ +0x0018@1  +0x0018@1  +0x0018@1  } | .DbgHiberBoot
        _m05 uint1_t                  dbg_soft_boot;                        //{ +0x0018@2  +0x0018@2  +0x0018@2  } | .DbgSoftBoot
        _m06 uint1_t                  dbg_measured_launch;                  //{ +0x0018@3  +0x0018@3  +0x0018@3  } | .DbgMeasuredLaunch
        _m07 uint1_t                  dbg_measured_launch_capable;          //{ +0x0018@4  +0x0018@4  +0x0018@4  } | .DbgMeasuredLaunchCapable
        _m08 uint1_t                  dbg_system_hive_replace;              //{ +0x0018@5  +0x0018@5  +0x0018@5  } | .DbgSystemHiveReplace
        _m09 uint1_t                  dbg_measured_launch_smm_protections;  //{ +0x0018@6  +0x0018@6  +0x0018@6  } | .DbgMeasuredLaunchSmmProtections
        _m10 uint7_t                  dbg_measured_launch_smm_level;        //{ +0x0018@7  +0x0018@7  +0x0018@7  } | .DbgMeasuredLaunchSmmLevel
                                                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_BOOT_ENVIRONMENT_INFORMATION.$", 0x20, true, 0xc16917b91599d715 );                                    
        SDK_FIXED_SIZE( system_boot_environment_information_t, 0x20 );                                    
    };                                                                    
};
#include "magic/system_boot_environment_information_t.end.hpp"
SDK_VERIFY( struct win::system_boot_environment_information_t, 0x20 );
