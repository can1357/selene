#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_memory_list_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_MEMORY_LIST_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_memory_list_information_t                        
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                         
        _m00 uint64_t                zero_page_count;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ZeroPageCount
        _m01 uint64_t                free_page_count;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FreePageCount
        _m02 uint64_t                modified_page_count;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ModifiedPageCount
        _m03 uint64_t                modified_no_write_page_count;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ModifiedNoWritePageCount
        _m04 uint64_t                bad_page_count;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BadPageCount
        _m05 sdk::array<uint64_t, 8> page_count_by_priority;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PageCountByPriority
        _m06 sdk::array<uint64_t, 8> repurposed_pages_by_priority;   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .RepurposedPagesByPriority
        _m07 uint64_t                modified_page_count_page_file;  //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ModifiedPageCountPageFile
                                                                   
        SDK_MAGIC_PROPERTIES( "_SYSTEM_MEMORY_LIST_INFORMATION.$", 0xb0, true, 0xa37c14544ed95cff );                              
        SDK_FIXED_SIZE( system_memory_list_information_t, 0xb0 );                              
    };                                                             
};
#include "magic/system_memory_list_information_t.end.hpp"
SDK_VERIFY( struct win::system_memory_list_information_t, 0xb0 );
