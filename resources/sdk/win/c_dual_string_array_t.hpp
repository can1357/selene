#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct dualstringarray_t; }

#include "magic/c_dual_string_array_t.start.hpp"
namespace win
{
    // [class CDualStringArray]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_dual_string_array_t                   
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                        
        _m00 int32_t                        c_ref;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRef
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2      
        //                                        
        _m01 struct tag::dualstringarray_t* pdsa;   //{ +0x0000    +0x0000    +0x0000    } | ._pdsa
                                                  
        SDK_MAGIC_PROPERTIES( "CDualStringArray.$", 0x10, true, 0x25f35ed3f22c97f6 );      
        SDK_FIXED_SIZE( c_dual_string_array_t, 0x10 );      
    };                                            
};
#include "magic/c_dual_string_array_t.end.hpp"
SDK_VERIFY( class win::c_dual_string_array_t, 0x10 );
