#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_repeat_format_t.hpp"

#include "magic/ndr64_fixed_repeat_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_FIXED_REPEAT_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_fixed_repeat_format_t                       
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                   
        _m00 struct win::ndr64_repeat_format_t repeat_format;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RepeatFormat
        _m01 uint32_t                          iterations;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Iterations
                                                             
        SDK_MAGIC_PROPERTIES( "_NDR64_FIXED_REPEAT_FORMAT.$", 0x18, true, 0xa29f495871ef2695 );              
        SDK_FIXED_SIZE( ndr64_fixed_repeat_format_t, 0x18 );              
    };                                                       
};
#include "magic/ndr64_fixed_repeat_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_fixed_repeat_format_t, 0x18 );
