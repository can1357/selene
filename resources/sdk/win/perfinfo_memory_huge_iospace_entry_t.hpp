#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_memory_huge_iospace_entry_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_MEMORY_HUGE_IOSPACE_ENTRY]
    // => Windows 11
    //
    struct perfinfo_memory_huge_iospace_entry_t
    {                                          
        // Windows 11                      
        //                                 
        _m00 uint32_t node_number;               //{ +0x0000    } | .NodeNumber
        _m01 uint64_t total_page_count;          //{ +0x0004    } | .TotalPageCount
        _m02 uint64_t huge_free_page_count;      //{ +0x000c    } | .HugeFreePageCount
        _m03 uint64_t huge_zero_page_count;      //{ +0x0014    } | .HugeZeroPageCount
                                               
        SDK_MAGIC_PROPERTIES( "_PERFINFO_MEMORY_HUGE_IOSPACE_ENTRY.$", 0x0, false, 0xa4f8509712620b28 );                     
        SDK_FIXED_SIZE( perfinfo_memory_huge_iospace_entry_t, 0x1c );                     
    };                                         
};
#include "magic/perfinfo_memory_huge_iospace_entry_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_memory_huge_iospace_entry_t, 0x1c );
