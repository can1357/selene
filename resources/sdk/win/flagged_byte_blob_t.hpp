#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flagged_byte_blob_t.start.hpp"
namespace win
{
    // [struct _FLAGGED_BYTE_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flagged_byte_blob_t              
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 uint32_t               f_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fFlags
        _m01 uint32_t               cl_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .clSize
        _m02 sdk::array<uint8_t, 1> ab_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .abData
                                            
        SDK_MAGIC_PROPERTIES( "_FLAGGED_BYTE_BLOB.$", 0xc, true, 0xbbd6931163af393f );        
        SDK_FIXED_SIZE( flagged_byte_blob_t, 0xc );        
    };                                      
};
#include "magic/flagged_byte_blob_t.end.hpp"
SDK_VERIFY( struct win::flagged_byte_blob_t, 0xc );
