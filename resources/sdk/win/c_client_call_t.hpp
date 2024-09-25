#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_client_call_t.start.hpp"
namespace win
{
    // [class CClientCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_client_call_t                                 
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                
        _m00 void*             m_h_thread;                  //{ +0x01c0    +0x02a8    +0x02a8    +0x02a8    } | .m_hThread
        _m01 const uint32_t    m_dw_thread_id;              //{ +0x01c8    +0x02b0    +0x02b0    +0x02b0    } | .m_dwThreadId
                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                
        _m02 volatile uint64_t m_call_complete_tick_count;  //{ +0x02b8    +0x02b8    +0x02b8    } | .m_callCompleteTickCount
                                                          
        SDK_MAGIC_PROPERTIES( "CClientCall.$", 0x2d0, true, 0xae9ae694c1e29d15 );                           
        SDK_DYNAMIC_SIZE( c_client_call_t );                           
    };                                                    
};
#include "magic/c_client_call_t.end.hpp"
