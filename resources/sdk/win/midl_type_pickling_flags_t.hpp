#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_type_pickling_flags_t.start.hpp"
namespace win
{
    // [struct _MIDL_TYPE_PICKLING_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_type_pickling_flags_t      
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 uint1_t oicf;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Oicf
        _m01 uint1_t has_new_corr_desc;      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .HasNewCorrDesc
        _m02 uint1_t has_conformance_range;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .HasConformanceRange
                                           
        SDK_MAGIC_PROPERTIES( "_MIDL_TYPE_PICKLING_FLAGS.$", 0x4, true, 0xc032c89562b066df );                      
        SDK_FIXED_SIZE( midl_type_pickling_flags_t, 0x4 );                      
    };                                     
};
#include "magic/midl_type_pickling_flags_t.end.hpp"
SDK_VERIFY( struct win::midl_type_pickling_flags_t, 0x4 );
