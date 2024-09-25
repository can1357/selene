#pragma once
#include <sdkgen/support_library.hpp>
#include "etw_page_info_ex_t.hpp"

#include "magic/etw_working_set_pfn_rundown_t.start.hpp"
namespace mm
{
    // [struct _MM_ETW_WORKING_SET_PFN_RUNDOWN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct etw_working_set_pfn_rundown_t                                   
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                 
        _m00 uint64_t                                     process_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 uint64_t                                     entry_count;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EntryCount
        _m02 sdk::array<struct mm::etw_page_info_ex_t, 1> working_set_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WorkingSetInfo
                                                                           
        SDK_MAGIC_PROPERTIES( "_MM_ETW_WORKING_SET_PFN_RUNDOWN.$", 0x30, true, 0xc4ab697e4165d1b9 );                 
        SDK_FIXED_SIZE( etw_working_set_pfn_rundown_t, 0x30 );                 
    };                                                                     
};
#include "magic/etw_working_set_pfn_rundown_t.end.hpp"
SDK_VERIFY( struct mm::etw_working_set_pfn_rundown_t, 0x30 );
