#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tls_directory32_t.start.hpp"
namespace image
{
    // [struct _IMAGE_TLS_DIRECTORY32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tls_directory32_t                    
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t start_address_of_raw_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartAddressOfRawData
        _m01 uint32_t end_address_of_raw_data;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EndAddressOfRawData
        _m02 uint32_t address_of_index;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddressOfIndex
        _m03 uint32_t address_of_call_backs;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AddressOfCallBacks
        _m04 uint32_t size_of_zero_fill;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SizeOfZeroFill
        _m05 uint32_t characteristics;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Characteristics
        _m06 uint4_t  alignment;                  //{ +0x0014@20 +0x0014@20 +0x0014@20 +0x0014@20 } | .Alignment
                                                
        SDK_MAGIC_PROPERTIES( "_IMAGE_TLS_DIRECTORY32.$", 0x18, true, 0x2e09d1dec7499f60 );                          
        SDK_FIXED_SIZE( tls_directory32_t, 0x18 );                          
    };                                          
};
#include "magic/tls_directory32_t.end.hpp"
SDK_VERIFY( struct image::tls_directory32_t, 0x18 );
