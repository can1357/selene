#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_workingset_entry_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_WORKINGSET_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_workingset_entry_t               
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint32_t unique_process_id;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueProcessId
        _m01 uint32_t session_id;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
        _m02 uint64_t working_set_page_count;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WorkingSetPageCount
        _m03 uint64_t commit_page_count;               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .CommitPageCount
        _m04 uint64_t paged_pool_page_count;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PagedPoolPageCount
        _m05 uint64_t virtual_size_in_pages;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .VirtualSizeInPages
        _m06 uint64_t private_working_set_page_count;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .PrivateWorkingSetPageCount
        _m07 uint64_t store_size_in_pages;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .StoreSizeInPages
        _m08 uint64_t stored_page_count;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .StoredPageCount
        _m09 uint64_t commit_debt_in_pages;            //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .CommitDebtInPages
        _m10 uint64_t shared_commit_in_pages;          //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SharedCommitInPages
                                                     
        SDK_MAGIC_PROPERTIES( "_PERFINFO_WORKINGSET_ENTRY.$", 0x44, true, 0x6afed5deca4af1e5 );                               
        SDK_FIXED_SIZE( perfinfo_workingset_entry_t, 0x44 );                               
    };                                               
};
#include "magic/perfinfo_workingset_entry_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_workingset_entry_t, 0x44 );
