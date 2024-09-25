#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exit_thread_t.start.hpp"
namespace dbgkm
{
    // [struct _DBGKM_EXIT_THREAD]
    // => WDK 10 (NV)
    //
    struct exit_thread_t         
    {                            
        // WDK 10                
        //                       
        _m00 int32_t exit_status;  //{ +0x0000    } | .ExitStatus
                                 
        SDK_NONVOL_PROPERTIES( "_DBGKM_EXIT_THREAD.$", 0x0, false, 0xa408dede140ae64b );            
        SDK_FIXED_SIZE( exit_thread_t, 0x4 );            
    };                           
};
#include "magic/exit_thread_t.end.hpp"
SDK_VERIFY( struct dbgkm::exit_thread_t, 0x4 );
