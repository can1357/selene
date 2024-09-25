#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_pointer_repeat_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_POINTER_REPEAT_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_pointer_repeat_flags_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 uint1_t set_corr_mark;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SetCorrMark
                                       
        SDK_MAGIC_PROPERTIES( "_NDR64_POINTER_REPEAT_FLAGS.$", 0x1, true, 0x6cc8280fceae9e29 );              
        SDK_FIXED_SIZE( ndr64_pointer_repeat_flags_t, 0x1 );              
    };                                 
};
#include "magic/ndr64_pointer_repeat_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_pointer_repeat_flags_t, 0x1 );
