#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_hashed_encode_info_t.start.hpp"
namespace win
{
    // [struct _CMSG_HASHED_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_hashed_encode_info_t                                   
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                             
        _m00 uint32_t                                 cb_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint64_t                                 h_crypt_prov;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
        _m02 struct win::crypt_algorithm_identifier_t hash_algorithm;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HashAlgorithm
        _m03 void*                                    pv_hash_aux_info;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pvHashAuxInfo
                                                                       
        SDK_MAGIC_PROPERTIES( "_CMSG_HASHED_ENCODE_INFO.$", 0x30, true, 0xd684f4bca3a765e6 );                 
        SDK_FIXED_SIZE( cmsg_hashed_encode_info_t, 0x30 );                 
    };                                                                 
};
#include "magic/cmsg_hashed_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_hashed_encode_info_t, 0x30 );
