#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_memory_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_MEMORY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_memory_information_t             
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint64_t paged_pool_commit_page_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PagedPoolCommitPageCount
        _m01 uint64_t non_paged_pool_page_count;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NonPagedPoolPageCount
        _m02 uint64_t mdl_page_count;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MdlPageCount
        _m03 uint64_t commit_page_count;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CommitPageCount
                                                   
        SDK_MAGIC_PROPERTIES( "_SYSTEM_MEMORY_INFORMATION.$", 0x20, true, 0x612b672c48d403 );                             
        SDK_FIXED_SIZE( system_memory_information_t, 0x20 );                             
    };                                             
};
#include "magic/system_memory_information_t.end.hpp"
SDK_VERIFY( struct win::system_memory_information_t, 0x20 );
