#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/copydatastruct_t.start.hpp"
namespace tag
{
    // [struct tagCOPYDATASTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct copydatastruct_t   
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint64_t dw_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwData
        _m01 uint32_t cb_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbData
        _m02 void*    lp_data;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpData
                              
        SDK_MAGIC_PROPERTIES( "tagCOPYDATASTRUCT.$", 0x18, true, 0x2994adf559d543f2 );        
        SDK_FIXED_SIZE( copydatastruct_t, 0x18 );        
    };                        
};
#include "magic/copydatastruct_t.end.hpp"
SDK_VERIFY( struct tag::copydatastruct_t, 0x18 );
