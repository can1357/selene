#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_thread_stack_t.start.hpp"
namespace win
{
    // [class CThreadStack]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_thread_stack_t                                   
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                   
        _m00 uint32_t m_dw_current_page_size;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_dwCurrentPageSize
        _m01 uint64_t m_current_process_default_stack_commit;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_CurrentProcessDefaultStackCommit
                                                             
        SDK_MAGIC_PROPERTIES( "CThreadStack.$", 0x10, true, 0x67202f22d923009b );                                       
        SDK_FIXED_SIZE( c_thread_stack_t, 0x10 );                                       
    };                                                       
};
#include "magic/c_thread_stack_t.end.hpp"
SDK_VERIFY( class win::c_thread_stack_t, 0x10 );
