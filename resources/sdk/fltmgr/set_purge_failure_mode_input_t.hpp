#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_purge_failure_mode_input_t.start.hpp"
namespace fltmgr
{
    // [struct _SET_PURGE_FAILURE_MODE_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct set_purge_failure_mode_input_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                         
        SDK_NONVOL_PROPERTIES( "_SET_PURGE_FAILURE_MODE_INPUT.$", 0x4, true, 0x19e8d67e7191dc40 );      
        SDK_FIXED_SIZE( set_purge_failure_mode_input_t, 0x4 );      
    };                                   
};
#include "magic/set_purge_failure_mode_input_t.end.hpp"
SDK_VERIFY( struct fltmgr::set_purge_failure_mode_input_t, 0x4 );
