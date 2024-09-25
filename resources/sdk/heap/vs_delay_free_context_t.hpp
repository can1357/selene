#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"

#include "magic/vs_delay_free_context_t.start.hpp"
namespace heap
{
    // [struct _HEAP_VS_DELAY_FREE_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vs_delay_free_context_t              
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 union nt::slist_header_t list_head;  //{ +0x0000    +0x0000    +0x0000    } | .ListHead
                                                
        SDK_MAGIC_PROPERTIES( "_HEAP_VS_DELAY_FREE_CONTEXT.$", 0x10, true, 0xa73b9b1b2450cce9 );          
        SDK_FIXED_SIZE( vs_delay_free_context_t, 0x10 );          
    };                                          
};
#include "magic/vs_delay_free_context_t.end.hpp"
SDK_VERIFY( struct heap::vs_delay_free_context_t, 0x10 );
