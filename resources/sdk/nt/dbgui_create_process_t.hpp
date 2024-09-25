#pragma once
#include <sdkgen/support_library.hpp>
#include "../dbgkm/create_process_t.hpp"

#include "magic/dbgui_create_process_t.start.hpp"
namespace nt
{
    // [struct _DBGUI_CREATE_PROCESS]
    // => WDK 10 (NV)
    //
    struct dbgui_create_process_t                             
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 void*                          handle_to_process;  //{ +0x0000    } | .HandleToProcess
        _m01 void*                          handle_to_thread;   //{ +0x0008    } | .HandleToThread
        _m02 struct dbgkm::create_process_t new_process;        //{ +0x0010    } | .NewProcess
                                                              
        SDK_NONVOL_PROPERTIES( "_DBGUI_CREATE_PROCESS.$", 0x0, false, 0x2e3decbe0b37a329 );                  
        SDK_FIXED_SIZE( dbgui_create_process_t, 0x40 );                  
    };                                                        
};
#include "magic/dbgui_create_process_t.end.hpp"
SDK_VERIFY( struct nt::dbgui_create_process_t, 0x40 );
