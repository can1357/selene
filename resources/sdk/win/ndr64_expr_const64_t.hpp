#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_expr_const64_t.start.hpp"
namespace win
{
    // [struct _NDR64_EXPR_CONST64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_expr_const64_t  
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 uint8_t expr_type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExprType
        _m01 int64_t const_value;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConstValue
                                 
        SDK_MAGIC_PROPERTIES( "_NDR64_EXPR_CONST64.$", 0x10, true, 0xe1ce7abc4a8c0fbb );            
        SDK_FIXED_SIZE( ndr64_expr_const64_t, 0x10 );            
    };                           
};
#include "magic/ndr64_expr_const64_t.end.hpp"
SDK_VERIFY( struct win::ndr64_expr_const64_t, 0x10 );
