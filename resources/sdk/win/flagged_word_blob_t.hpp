#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flagged_word_blob_t.start.hpp"
namespace win
{
    // [struct _FLAGGED_WORD_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flagged_word_blob_t               
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint32_t                f_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fFlags
        _m01 uint32_t                cl_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .clSize
        _m02 sdk::array<uint16_t, 1> as_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .asData
                                             
        SDK_MAGIC_PROPERTIES( "_FLAGGED_WORD_BLOB.$", 0xc, true, 0xe44d575dca4e6456 );        
        SDK_FIXED_SIZE( flagged_word_blob_t, 0xc );        
    };                                       
};
#include "magic/flagged_word_blob_t.end.hpp"
SDK_VERIFY( struct win::flagged_word_blob_t, 0xc );
