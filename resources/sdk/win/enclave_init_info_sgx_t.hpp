#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enclave_init_info_sgx_t.start.hpp"
namespace win
{
    // [struct _ENCLAVE_INIT_INFO_SGX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_init_info_sgx_t                  
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                          
        _m00 sdk::array<uint8_t, 1808> sig_struct;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SigStruct
        _m01 sdk::array<uint8_t, 304>  e_init_token;  //{ +0x0800    +0x0800    +0x0800    +0x0800    } | .EInitToken
                                                    
        SDK_MAGIC_PROPERTIES( "_ENCLAVE_INIT_INFO_SGX.$", 0x1000, true, 0xdf49d098761cb3db );             
        SDK_FIXED_SIZE( enclave_init_info_sgx_t, 0x1000 );             
    };                                              
};
#include "magic/enclave_init_info_sgx_t.end.hpp"
SDK_VERIFY( struct win::enclave_init_info_sgx_t, 0x1000 );
