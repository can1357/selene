#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_x942_other_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_X942_OTHER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_x942_other_info_t                                      
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                              
        _m00 char*                        psz_content_encryption_obj_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszContentEncryptionObjId
        _m01 sdk::array<uint8_t, 4>       rgb_counter;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgbCounter
        _m02 sdk::array<uint8_t, 4>       rgb_key_length;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .rgbKeyLength
        _m03 struct win::cryptoapi_blob_t pub_info;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PubInfo
                                                                        
        SDK_MAGIC_PROPERTIES( "_CRYPT_X942_OTHER_INFO.$", 0x20, true, 0x9085d323787bf3bf );                              
        SDK_FIXED_SIZE( crypt_x942_other_info_t, 0x20 );                              
    };                                                                  
};
#include "magic/crypt_x942_other_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_x942_other_info_t, 0x20 );
