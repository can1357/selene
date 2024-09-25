#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pvalue_w_t.start.hpp"
namespace win
{
    // [struct pvalueW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pvalue_w_t                  
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 wchar_t* pv_valuename;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pv_valuename
        _m01 int32_t  pv_valuelen;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pv_valuelen
        _m02 void*    pv_value_context;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pv_value_context
        _m03 uint32_t pv_type;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pv_type
                                       
        SDK_MAGIC_PROPERTIES( "pvalueW.$", 0x20, true, 0x350599b50e25a03f );                 
        SDK_FIXED_SIZE( pvalue_w_t, 0x20 );                 
    };                                 
};
#include "magic/pvalue_w_t.end.hpp"
SDK_VERIFY( struct win::pvalue_w_t, 0x20 );
