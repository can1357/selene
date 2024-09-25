#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/create_thread_debug_info_t.start.hpp"
namespace win
{
    // [struct _CREATE_THREAD_DEBUG_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct create_thread_debug_info_t                             
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                        
        _m00 void*                           h_thread;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .hThread
        _m01 void*                           lp_thread_local_base;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .lpThreadLocalBase
        _m02 sdk::function<uint32_t(void*)>* lp_start_address;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .lpStartAddress
                                                                  
        SDK_NONVOL_PROPERTIES( "_CREATE_THREAD_DEBUG_INFO.$", 0x18, true, 0xfe69734e54c748c5 );                     
        SDK_FIXED_SIZE( create_thread_debug_info_t, 0x18 );                     
    };                                                            
};
#include "magic/create_thread_debug_info_t.end.hpp"
SDK_VERIFY( struct win::create_thread_debug_info_t, 0x18 );
