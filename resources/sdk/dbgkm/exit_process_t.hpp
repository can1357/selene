#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exit_process_t.start.hpp"
namespace dbgkm
{
    // [struct _DBGKM_EXIT_PROCESS]
    // => WDK 10 (NV)
    //
    struct exit_process_t        
    {                            
        // WDK 10                
        //                       
        _m00 int32_t exit_status;  //{ +0x0000    } | .ExitStatus
                                 
        SDK_NONVOL_PROPERTIES( "_DBGKM_EXIT_PROCESS.$", 0x0, false, 0xf41a72a81cbe2079 );            
        SDK_FIXED_SIZE( exit_process_t, 0x4 );            
    };                           
};
#include "magic/exit_process_t.end.hpp"
SDK_VERIFY( struct dbgkm::exit_process_t, 0x4 );
