#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pathname_buffer_t.start.hpp"
namespace win
{
    // [struct _PATHNAME_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pathname_buffer_t                         
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 uint32_t               path_name_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PathNameLength
        _m01 sdk::array<wchar_t, 1> name;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Name
                                                     
        SDK_NONVOL_PROPERTIES( "_PATHNAME_BUFFER.$", 0x8, true, 0x492544ffdee8884c );                 
        SDK_FIXED_SIZE( pathname_buffer_t, 0x8 );                 
    };                                               
};
#include "magic/pathname_buffer_t.end.hpp"
SDK_VERIFY( struct win::pathname_buffer_t, 0x8 );
