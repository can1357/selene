#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_spec_control_retpoline_exit_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SPEC_CONTROL_RETPOLINE_EXIT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_spec_control_retpoline_exit_t
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t target_address;              //{ +0x0000    +0x0000    +0x0000    } | .TargetAddress
                                                 
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SPEC_CONTROL_RETPOLINE_EXIT.$", 0x8, true, 0x89d7ddd41dc600a0 );               
        SDK_FIXED_SIZE( perfinfo_spec_control_retpoline_exit_t, 0x8 );               
    };                                           
};
#include "magic/perfinfo_spec_control_retpoline_exit_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_spec_control_retpoline_exit_t, 0x8 );
