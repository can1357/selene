#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tls_directory64_t.start.hpp"
namespace image
{
    // [struct _IMAGE_TLS_DIRECTORY64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tls_directory64_t                    
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint64_t start_address_of_raw_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartAddressOfRawData
        _m01 uint64_t end_address_of_raw_data;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EndAddressOfRawData
        _m02 uint64_t address_of_index;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AddressOfIndex
        _m03 uint64_t address_of_call_backs;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AddressOfCallBacks
        _m04 uint32_t size_of_zero_fill;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SizeOfZeroFill
        _m05 uint32_t characteristics;            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Characteristics
        _m06 uint4_t  alignment;                  //{ +0x0024@20 +0x0024@20 +0x0024@20 +0x0024@20 } | .Alignment
                                                
        SDK_MAGIC_PROPERTIES( "_IMAGE_TLS_DIRECTORY64.$", 0x28, true, 0x52f49061964b17e7 );                          
        SDK_FIXED_SIZE( tls_directory64_t, 0x28 );                          
    };                                          
};
#include "magic/tls_directory64_t.end.hpp"
SDK_VERIFY( struct image::tls_directory64_t, 0x28 );
