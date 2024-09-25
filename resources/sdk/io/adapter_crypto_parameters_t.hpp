#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_crypto_parameters_t.start.hpp"
namespace io
{
    struct adapter_crypto_key_descriptor_t;

    // [struct _IO_ADAPTER_CRYPTO_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct adapter_crypto_parameters_t                                  
    {                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                              
        _m00 uint64_t                                    tweak;           //{ +0x0000    +0x0000    +0x0000    } | .Tweak
        _m01 struct io::adapter_crypto_key_descriptor_t* key_descriptor;  //{ +0x0008    +0x0008    +0x0008    } | .KeyDescriptor
                                                                        
        SDK_MAGIC_PROPERTIES( "_IO_ADAPTER_CRYPTO_PARAMETERS.$", 0x10, true, 0xe398a523b7a0bac6 );               
        SDK_FIXED_SIZE( adapter_crypto_parameters_t, 0x10 );               
    };                                                                  
};
#include "magic/adapter_crypto_parameters_t.end.hpp"
SDK_VERIFY( struct io::adapter_crypto_parameters_t, 0x10 );
