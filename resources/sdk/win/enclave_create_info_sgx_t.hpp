#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enclave_create_info_sgx_t.start.hpp"
namespace win
{
    // [struct _ENCLAVE_CREATE_INFO_SGX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_create_info_sgx_t        
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                  
        _m00 sdk::array<uint8_t, 4096> secs;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Secs
                                            
        SDK_MAGIC_PROPERTIES( "_ENCLAVE_CREATE_INFO_SGX.$", 0x1000, true, 0xaa7b3b5328bf3818 );     
        SDK_FIXED_SIZE( enclave_create_info_sgx_t, 0x1000 );     
    };                                      
};
#include "magic/enclave_create_info_sgx_t.end.hpp"
SDK_VERIFY( struct win::enclave_create_info_sgx_t, 0x1000 );
