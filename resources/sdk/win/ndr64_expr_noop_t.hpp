#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_expr_noop_t.start.hpp"
namespace win
{
    // [struct _NDR64_EXPR_NOOP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_expr_noop_t   
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 uint8_t expr_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExprType
        _m01 uint8_t size;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Size
                               
        SDK_MAGIC_PROPERTIES( "_NDR64_EXPR_NOOP.$", 0x4, true, 0xedf849340aeff2d0 );          
        SDK_FIXED_SIZE( ndr64_expr_noop_t, 0x4 );          
    };                         
};
#include "magic/ndr64_expr_noop_t.end.hpp"
SDK_VERIFY( struct win::ndr64_expr_noop_t, 0x4 );
