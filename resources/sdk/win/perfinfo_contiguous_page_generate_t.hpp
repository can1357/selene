#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_contiguous_page_generate_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CONTIGUOUS_PAGE_GENERATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_contiguous_page_generate_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t thread_id;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 uint64_t number_of_bytes;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfBytes
                                              
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CONTIGUOUS_PAGE_GENERATE.$", 0x10, true, 0xddf1da6ac4dcdc87 );                
        SDK_FIXED_SIZE( perfinfo_contiguous_page_generate_t, 0x10 );                
    };                                        
};
#include "magic/perfinfo_contiguous_page_generate_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_contiguous_page_generate_t, 0x10 );
