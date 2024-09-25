#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_expr_operator_t.start.hpp"
namespace win
{
    // [struct _NDR64_EXPR_OPERATOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_expr_operator_t
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 uint8_t expr_type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExprType
        _m01 uint8_t _operator;   //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Operator
        _m02 uint8_t cast_type;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .CastType
                                
        SDK_MAGIC_PROPERTIES( "_NDR64_EXPR_OPERATOR.$", 0x4, true, 0xd52d8b457d322472 );          
        SDK_FIXED_SIZE( ndr64_expr_operator_t, 0x4 );          
    };                          
};
#include "magic/ndr64_expr_operator_t.end.hpp"
SDK_VERIFY( struct win::ndr64_expr_operator_t, 0x4 );
