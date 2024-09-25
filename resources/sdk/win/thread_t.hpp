#pragma once
#include <sdkgen/support_library.hpp>
#include "lock_entry_t.hpp"

#include "magic/thread_t.start.hpp"
namespace win
{
    // [struct Thread]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_t                                                      
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                               
        _m00 class win::lock_entry_t*               p_head;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pHead
        _m01 class win::lock_entry_t*               p_last_embedded_enty;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pLastEmbeddedEnty
        _m02 sdk::array<class win::lock_entry_t, 1> embedded_entry;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .embeddedEntry
                                                                         
        SDK_MAGIC_PROPERTIES( "Thread.$", 0x30, true, 0x8c31eea4703a7ad9 );                     
        SDK_FIXED_SIZE( thread_t, 0x30 );                                
    };                                                                   
};
#include "magic/thread_t.end.hpp"
SDK_VERIFY( struct win::thread_t, 0x30 );
