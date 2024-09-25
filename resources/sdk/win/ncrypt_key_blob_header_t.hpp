#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_key_blob_header_t.start.hpp"
namespace win
{
    // [struct _NCRYPT_KEY_BLOB_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_key_blob_header_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t cb_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_magic;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMagic
        _m02 uint32_t cb_alg_name;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbAlgName
        _m03 uint32_t cb_key_data;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cbKeyData
                                   
        SDK_MAGIC_PROPERTIES( "_NCRYPT_KEY_BLOB_HEADER.$", 0x10, true, 0x3421a3254c5b61c5 );            
        SDK_FIXED_SIZE( ncrypt_key_blob_header_t, 0x10 );            
    };                             
};
#include "magic/ncrypt_key_blob_header_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_key_blob_header_t, 0x10 );
