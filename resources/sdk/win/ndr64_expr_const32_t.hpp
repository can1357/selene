#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_expr_const32_t.start.hpp"
namespace win
{
    // [struct _NDR64_EXPR_CONST32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_expr_const32_t   
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint8_t  expr_type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExprType
        _m01 uint32_t const_value;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ConstValue
                                  
        SDK_MAGIC_PROPERTIES( "_NDR64_EXPR_CONST32.$", 0x8, true, 0xcaec1072d450ca4d );            
        SDK_FIXED_SIZE( ndr64_expr_const32_t, 0x8 );            
    };                            
};
#include "magic/ndr64_expr_const32_t.end.hpp"
SDK_VERIFY( struct win::ndr64_expr_const32_t, 0x8 );
