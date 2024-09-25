#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_value_partial_information_align64_t.start.hpp"
namespace win
{
    // [struct _KEY_VALUE_PARTIAL_INFORMATION_ALIGN64]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_value_partial_information_align64_t
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               type;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t               data_length;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .DataLength
        _m02 sdk::array<uint8_t, 1> data;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
                                                  
        SDK_NONVOL_PROPERTIES( "_KEY_VALUE_PARTIAL_INFORMATION_ALIGN64.$", 0xc, true, 0xe657d12b5f6db503 );            
        SDK_FIXED_SIZE( key_value_partial_information_align64_t, 0xc );            
    };                                            
};
#include "magic/key_value_partial_information_align64_t.end.hpp"
SDK_VERIFY( struct win::key_value_partial_information_align64_t, 0xc );
