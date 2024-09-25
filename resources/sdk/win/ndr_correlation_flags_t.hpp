#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_correlation_flags_t.start.hpp"
namespace win
{
    // [struct _NDR_CORRELATION_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_correlation_flags_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint1_t early;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Early
        _m01 uint1_t split;         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Split
        _m02 uint1_t is_iid_is;     //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IsIidIs
        _m03 uint1_t dont_check;    //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .DontCheck
        _m04 uint1_t ranged;        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Ranged
                                  
        SDK_MAGIC_PROPERTIES( "_NDR_CORRELATION_FLAGS.$", 0x1, true, 0x10cf5cc3a0c15ee4 );           
        SDK_FIXED_SIZE( ndr_correlation_flags_t, 0x1 );           
    };                            
};
#include "magic/ndr_correlation_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr_correlation_flags_t, 0x1 );
