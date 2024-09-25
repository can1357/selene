#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_value_full_information_t.start.hpp"
namespace nt
{
    // [struct _KEY_VALUE_FULL_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_value_full_information_t         
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               title_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TitleIndex
        _m01 uint32_t               type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 uint32_t               data_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DataOffset
        _m03 uint32_t               data_length;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DataLength
        _m04 uint32_t               name_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NameLength
        _m05 sdk::array<wchar_t, 1> name;         //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Name
                                                
        SDK_NONVOL_PROPERTIES( "_KEY_VALUE_FULL_INFORMATION.$", 0x18, true, 0xb1a75db8188d5930 );            
        SDK_FIXED_SIZE( key_value_full_information_t, 0x18 );            
    };                                          
};
#include "magic/key_value_full_information_t.end.hpp"
SDK_VERIFY( struct nt::key_value_full_information_t, 0x18 );
