#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_tpm_loadable_key_blob_header_t.start.hpp"
namespace win
{
    // [struct NCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_tpm_loadable_key_blob_header_t
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t magic;                      //{ +0x0000    +0x0000    +0x0000    } | .magic
        _m01 uint32_t cb_header;                  //{ +0x0004    +0x0004    +0x0004    } | .cbHeader
        _m02 uint32_t cb_public;                  //{ +0x0008    +0x0008    +0x0008    } | .cbPublic
        _m03 uint32_t cb_private;                 //{ +0x000c    +0x000c    +0x000c    } | .cbPrivate
        _m04 uint32_t cb_name;                    //{ +0x0010    +0x0010    +0x0010    } | .cbName
                                                
        SDK_MAGIC_PROPERTIES( "NCRYPT_TPM_LOADABLE_KEY_BLOB_HEADER.$", 0x14, true, 0x47603c7d866f2831 );           
        SDK_FIXED_SIZE( ncrypt_tpm_loadable_key_blob_header_t, 0x14 );           
    };                                          
};
#include "magic/ncrypt_tpm_loadable_key_blob_header_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_tpm_loadable_key_blob_header_t, 0x14 );
