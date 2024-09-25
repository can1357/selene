#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/if_counted_string_lh_t.start.hpp"
namespace ndis
{
    // [struct _IF_COUNTED_STRING_LH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct if_counted_string_lh_t            
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 uint16_t                 length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 sdk::array<wchar_t, 257> string;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .String
                                             
        SDK_MAGIC_PROPERTIES( "_IF_COUNTED_STRING_LH.$", 0x204, true, 0x1c3fe5869d3a28e9 );       
        SDK_FIXED_SIZE( if_counted_string_lh_t, 0x204 );       
    };                                       
};
#include "magic/if_counted_string_lh_t.end.hpp"
SDK_VERIFY( struct ndis::if_counted_string_lh_t, 0x204 );
