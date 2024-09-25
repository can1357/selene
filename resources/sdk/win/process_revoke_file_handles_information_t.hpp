#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_revoke_file_handles_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_REVOKE_FILE_HANDLES_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_revoke_file_handles_information_t
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                       
        _m00 nt::unicode_view target_device_path;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetDevicePath
                                                    
        SDK_NONVOL_PROPERTIES( "_PROCESS_REVOKE_FILE_HANDLES_INFORMATION.$", 0x10, true, 0xfdb86ccb4fd492f2 );                   
        SDK_FIXED_SIZE( process_revoke_file_handles_information_t, 0x10 );                   
    };                                              
};
#include "magic/process_revoke_file_handles_information_t.end.hpp"
SDK_VERIFY( struct win::process_revoke_file_handles_information_t, 0x10 );
