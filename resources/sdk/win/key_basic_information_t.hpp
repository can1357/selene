#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_basic_information_t.start.hpp"
namespace win
{
    // [struct _KEY_BASIC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_basic_information_t                  
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 int64_t                last_write_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LastWriteTime
        _m01 uint32_t               title_index;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TitleIndex
        _m02 uint32_t               name_length;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .NameLength
        _m03 sdk::array<wchar_t, 1> name;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Name
                                                    
        SDK_NONVOL_PROPERTIES( "_KEY_BASIC_INFORMATION.$", 0x18, true, 0xddcdabe60a9fd424 );                
        SDK_FIXED_SIZE( key_basic_information_t, 0x18 );                
    };                                              
};
#include "magic/key_basic_information_t.end.hpp"
SDK_VERIFY( struct win::key_basic_information_t, 0x18 );
