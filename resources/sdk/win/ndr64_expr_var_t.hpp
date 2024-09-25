#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_expr_var_t.start.hpp"
namespace win
{
    // [struct _NDR64_EXPR_VAR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_expr_var_t     
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint8_t  expr_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExprType
        _m01 uint8_t  var_type;   //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .VarType
        _m02 uint32_t offset;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Offset
                                
        SDK_MAGIC_PROPERTIES( "_NDR64_EXPR_VAR.$", 0x8, true, 0xf82a2b4fb1423465 );          
        SDK_FIXED_SIZE( ndr64_expr_var_t, 0x8 );          
    };                          
};
#include "magic/ndr64_expr_var_t.end.hpp"
SDK_VERIFY( struct win::ndr64_expr_var_t, 0x8 );
