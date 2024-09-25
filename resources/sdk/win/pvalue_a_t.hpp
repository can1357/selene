#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pvalue_a_t.start.hpp"
namespace win
{
    // [struct pvalueA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pvalue_a_t                  
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 char*    pv_valuename;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pv_valuename
        _m01 int32_t  pv_valuelen;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pv_valuelen
        _m02 void*    pv_value_context;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pv_value_context
        _m03 uint32_t pv_type;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pv_type
                                       
        SDK_MAGIC_PROPERTIES( "pvalueA.$", 0x20, true, 0x15ad9ea4dfbe39a5 );                 
        SDK_FIXED_SIZE( pvalue_a_t, 0x20 );                 
    };                                 
};
#include "magic/pvalue_a_t.end.hpp"
SDK_VERIFY( struct win::pvalue_a_t, 0x20 );
