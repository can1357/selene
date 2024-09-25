#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_expr_desc_t.start.hpp"
namespace win
{
    // [struct _NDR_EXPR_DESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_expr_desc_t                 
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                 
        _m00 const uint16_t* p_offset;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pOffset
        _m01 const uint8_t*  p_format_expr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pFormatExpr
                                           
        SDK_MAGIC_PROPERTIES( "_NDR_EXPR_DESC.$", 0x10, true, 0x86f61bfcac03f5e4 );              
        SDK_FIXED_SIZE( ndr_expr_desc_t, 0x10 );              
    };                                     
};
#include "magic/ndr_expr_desc_t.end.hpp"
SDK_VERIFY( struct win::ndr_expr_desc_t, 0x10 );
