#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_string_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_STRING_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_string_flags_t
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 uint1_t is_sized;   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .IsSized
        _m01 uint1_t is_ranged;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .IsRanged
                               
        SDK_MAGIC_PROPERTIES( "_NDR64_STRING_FLAGS.$", 0x1, true, 0x3fe813808d6f7673 );          
        SDK_FIXED_SIZE( ndr64_string_flags_t, 0x1 );          
    };                         
};
#include "magic/ndr64_string_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_string_flags_t, 0x1 );
