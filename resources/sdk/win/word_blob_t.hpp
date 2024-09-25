#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/word_blob_t.start.hpp"
namespace win
{
    // [struct _WORD_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct word_blob_t                       
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint32_t                cl_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clSize
        _m01 sdk::array<uint16_t, 1> as_data;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .asData
                                             
        SDK_MAGIC_PROPERTIES( "_WORD_BLOB.$", 0x8, true, 0xf665bcd2eeb423e2 );        
        SDK_FIXED_SIZE( word_blob_t, 0x8 );        
    };                                       
};
#include "magic/word_blob_t.end.hpp"
SDK_VERIFY( struct win::word_blob_t, 0x8 );
