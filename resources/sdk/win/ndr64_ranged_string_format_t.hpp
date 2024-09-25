#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_string_header_format_t.hpp"

#include "magic/ndr64_ranged_string_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_RANGED_STRING_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_ranged_string_format_t                      
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                   
        _m00 struct win::ndr64_string_header_format_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint64_t                                 min;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Min
        _m02 uint64_t                                 max;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Max
                                                             
        SDK_MAGIC_PROPERTIES( "_NDR64_RANGED_STRING_FORMAT.$", 0x18, true, 0x6fb4e9db3de2b368 );       
        SDK_FIXED_SIZE( ndr64_ranged_string_format_t, 0x18 );       
    };                                                       
};
#include "magic/ndr64_ranged_string_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_ranged_string_format_t, 0x18 );
