#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_array_flags_t.start.hpp"
namespace win
{
    // [struct _NDR64_ARRAY_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_array_flags_t            
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint1_t has_pointer_info;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .HasPointerInfo
        _m01 uint1_t has_element_info;      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .HasElementInfo
        _m02 uint1_t is_multi_dimensional;  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IsMultiDimensional
        _m03 uint1_t is_arrayof_strings;    //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .IsArrayofStrings
                                          
        SDK_MAGIC_PROPERTIES( "_NDR64_ARRAY_FLAGS.$", 0x1, true, 0x1238e3f3a05bd573 );                     
        SDK_FIXED_SIZE( ndr64_array_flags_t, 0x1 );                     
    };                                    
};
#include "magic/ndr64_array_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr64_array_flags_t, 0x1 );
