#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sec_context_key_info_t.start.hpp"
namespace rpc
{
    // [struct _RPC_SEC_CONTEXT_KEY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sec_context_key_info_t         
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t encrypt_algorithm;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EncryptAlgorithm
        _m01 uint32_t key_size;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .KeySize
        _m02 uint32_t signature_algorithm;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SignatureAlgorithm
                                          
        SDK_MAGIC_PROPERTIES( "_RPC_SEC_CONTEXT_KEY_INFO.$", 0xc, true, 0x702530db359748b6 );                    
        SDK_FIXED_SIZE( sec_context_key_info_t, 0xc );                    
    };                                    
};
#include "magic/sec_context_key_info_t.end.hpp"
SDK_VERIFY( struct rpc::sec_context_key_info_t, 0xc );
