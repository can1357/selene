#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_bit_blob_t.start.hpp"
namespace win
{
    // [struct _CRYPT_BIT_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_bit_blob_t         
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t cb_data;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbData
        _m01 uint8_t* pb_data;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbData
        _m02 uint32_t c_unused_bits;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cUnusedBits
                                    
        SDK_MAGIC_PROPERTIES( "_CRYPT_BIT_BLOB.$", 0x18, true, 0x10038cd2ebf32e98 );              
        SDK_FIXED_SIZE( crypt_bit_blob_t, 0x18 );              
    };                              
};
#include "magic/crypt_bit_blob_t.end.hpp"
SDK_VERIFY( struct win::crypt_bit_blob_t, 0x18 );
