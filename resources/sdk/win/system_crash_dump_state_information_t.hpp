#pragma once
#include <sdkgen/support_library.hpp>
#include "system_crash_dump_configuration_class_t.hpp"

#include "magic/system_crash_dump_state_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_CRASH_DUMP_STATE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_crash_dump_state_information_t                                     
    {                                                                                
        using system_crash_dump_configuration_class_t = enum win::system_crash_dump_configuration_class_t;                               
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                           
        _m00 system_crash_dump_configuration_class_t  crash_dump_configuration_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CrashDumpConfigurationClass
                                                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_CRASH_DUMP_STATE_INFORMATION.$", 0x4, true, 0x9165769df87615c8 );                               
        SDK_FIXED_SIZE( system_crash_dump_state_information_t, 0x4 );                               
    };                                                                               
};
#include "magic/system_crash_dump_state_information_t.end.hpp"
SDK_VERIFY( struct win::system_crash_dump_state_information_t, 0x4 );
