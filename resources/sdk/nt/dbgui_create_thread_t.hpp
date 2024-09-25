#pragma once
#include <sdkgen/support_library.hpp>
#include "../dbgkm/create_thread_t.hpp"

#include "magic/dbgui_create_thread_t.start.hpp"
namespace nt
{
    // [struct _DBGUI_CREATE_THREAD]
    // => WDK 10 (NV)
    //
    struct dbgui_create_thread_t                            
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 void*                         handle_to_thread;  //{ +0x0000    } | .HandleToThread
        _m01 struct dbgkm::create_thread_t new_thread;        //{ +0x0008    } | .NewThread
                                                            
        SDK_NONVOL_PROPERTIES( "_DBGUI_CREATE_THREAD.$", 0x0, false, 0x90c330a3d14a4d95 );                 
        SDK_FIXED_SIZE( dbgui_create_thread_t, 0x18 );                 
    };                                                      
};
#include "magic/dbgui_create_thread_t.end.hpp"
SDK_VERIFY( struct nt::dbgui_create_thread_t, 0x18 );
