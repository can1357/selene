#pragma once
#include <sdkgen/support_library.hpp>
#include "slist_header_t.hpp"

#include "magic/cached_kstack_list_t.start.hpp"
namespace nt
{
    // [struct _CACHED_KSTACK_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cached_kstack_list_t                                
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                     
        _m00 union nt::slist_header_t s_list_head;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SListHead
        _m01 int32_t                  minimum_free;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MinimumFree
        _m02 uint32_t                 misses;                    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Misses
        _m03 uint32_t                 misses_last;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MissesLast
        _m04 varuint_t                all_stacks_in_use;         //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .AllStacksInUse
                                                               
        // Windows 11                                          
        //                                                     
        _m05 uint8_t                  non_ideal_stacks_present;  //{ +0x001d    } | .NonIdealStacksPresent
                                                               
        SDK_MAGIC_PROPERTIES( "_CACHED_KSTACK_LIST.$", 0x20, true, 0x1603e1e4e3158e90 );                         
        SDK_FIXED_SIZE( cached_kstack_list_t, 0x20 );                         
    };                                                         
};
#include "magic/cached_kstack_list_t.end.hpp"
SDK_VERIFY( struct nt::cached_kstack_list_t, 0x20 );
