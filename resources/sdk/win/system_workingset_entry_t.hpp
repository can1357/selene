#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_workingset_entry_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_WORKINGSET_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_workingset_entry_t                 
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint32_t unique_process_id;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueProcessId
        _m01 uint32_t session_id;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
        _m02 uint64_t working_set_page_count;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WorkingSetPageCount
        _m03 uint64_t commit_page_count;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CommitPageCount
        _m04 uint64_t paged_pool_page_count;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PagedPoolPageCount
        _m05 uint64_t virtual_size_in_pages;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VirtualSizeInPages
        _m06 uint64_t private_working_set_page_count;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PrivateWorkingSetPageCount
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_WORKINGSET_ENTRY.$", 0x28, true, 0xe6fe5150dd5d34ba );                               
        SDK_FIXED_SIZE( system_workingset_entry_t, 0x28 );                               
    };                                               
};
#include "magic/system_workingset_entry_t.end.hpp"
SDK_VERIFY( struct win::system_workingset_entry_t, 0x28 );
