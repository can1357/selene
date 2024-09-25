#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reparse_index_key_t.start.hpp"
namespace win
{
    // [struct _REPARSE_INDEX_KEY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reparse_index_key_t         
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t file_reparse_tag;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileReparseTag
        _m01 int64_t  file_id;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .FileId
                                       
        SDK_NONVOL_PROPERTIES( "_REPARSE_INDEX_KEY.$", 0xc, true, 0x400422d3cf05c127 );                 
        SDK_FIXED_SIZE( reparse_index_key_t, 0xc );                 
    };                                 
};
#include "magic/reparse_index_key_t.end.hpp"
SDK_VERIFY( struct win::reparse_index_key_t, 0xc );
