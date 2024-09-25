#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_value_partial_information_t.start.hpp"
namespace win
{
    // [struct _KEY_VALUE_PARTIAL_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_value_partial_information_t      
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               title_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TitleIndex
        _m01 uint32_t               type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 uint32_t               data_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DataLength
        _m03 sdk::array<uint8_t, 1> data;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Data
                                                
        SDK_NONVOL_PROPERTIES( "_KEY_VALUE_PARTIAL_INFORMATION.$", 0x10, true, 0x95412c2225896298 );            
        SDK_FIXED_SIZE( key_value_partial_information_t, 0x10 );            
    };                                          
};
#include "magic/key_value_partial_information_t.end.hpp"
SDK_VERIFY( struct win::key_value_partial_information_t, 0x10 );
