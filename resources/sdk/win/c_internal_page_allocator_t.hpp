#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/page_entry_t.hpp"

#include "magic/c_internal_page_allocator_t.start.hpp"
namespace win
{
    class c_ole_static_mutex_sem_t;

    // [class CInternalPageAllocator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_internal_page_allocator_t                                
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                           
        _m00 uint64_t                             c_pages;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._cPages
        _m01 struct tag::page_entry_t**           p_page_list_start;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pPageListStart
        _m02 struct tag::page_entry_t**           p_page_list_end;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pPageListEnd
        _m03 uint32_t                             dw_flags;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._dwFlags
        _m04 struct tag::page_entry_t             list_head;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._ListHead
        _m05 int32_t                              c_entries;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._cEntries
        _m06 uint64_t                             cb_per_entry;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._cbPerEntry
        _m07 uint16_t                             c_entries_per_page;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._cEntriesPerPage
        _m08 class win::c_ole_static_mutex_sem_t* p_lock;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._pLock
                                                                     
        SDK_MAGIC_PROPERTIES( "CInternalPageAllocator.$", 0x50, true, 0x39977e67e4331e8f );                   
        SDK_FIXED_SIZE( c_internal_page_allocator_t, 0x50 );                   
    };                                                               
};
#include "magic/c_internal_page_allocator_t.end.hpp"
SDK_VERIFY( class win::c_internal_page_allocator_t, 0x50 );
