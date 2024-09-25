#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_value_basic_information_t.start.hpp"
namespace win
{
    // [struct _KEY_VALUE_BASIC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_value_basic_information_t        
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               title_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TitleIndex
        _m01 uint32_t               type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 uint32_t               name_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NameLength
        _m03 sdk::array<wchar_t, 1> name;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Name
                                                
        SDK_NONVOL_PROPERTIES( "_KEY_VALUE_BASIC_INFORMATION.$", 0x10, true, 0x46427d3ef02a303c );            
        SDK_FIXED_SIZE( key_value_basic_information_t, 0x10 );            
    };                                          
};
#include "magic/key_value_basic_information_t.end.hpp"
SDK_VERIFY( struct win::key_value_basic_information_t, 0x10 );
