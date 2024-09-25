#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_key_data_blob_header_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_KEY_DATA_BLOB_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_key_data_blob_header_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t dw_magic;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwMagic
        _m01 uint32_t dw_version;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwVersion
        _m02 uint32_t cb_key_data;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbKeyData
                                        
        SDK_MAGIC_PROPERTIES( "_BCRYPT_KEY_DATA_BLOB_HEADER.$", 0xc, true, 0xc1054ce6d1f30e9f );            
        SDK_FIXED_SIZE( bcrypt_key_data_blob_header_t, 0xc );            
    };                                  
};
#include "magic/bcrypt_key_data_blob_header_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_key_data_blob_header_t, 0xc );
