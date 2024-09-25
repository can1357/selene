#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct i_type_comp_t; }

#include "magic/bindptr_t.start.hpp"
namespace tag
{
    struct vardesc_t;
    struct funcdesc_t;

    // [union tagBINDPTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union bindptr_t                                
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                         
        _m00 struct tag::funcdesc_t*    lpfuncdesc;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpfuncdesc
        _m01 struct tag::vardesc_t*     lpvardesc;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpvardesc
        _m02 struct win::i_type_comp_t* lptcomp;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lptcomp
                                                   
        SDK_MAGIC_PROPERTIES( "tagBINDPTR.$", 0x8, true, 0x19e9c22b61e92ef8 );           
        SDK_FIXED_SIZE( bindptr_t, 0x8 );           
    };                                             
};
#include "magic/bindptr_t.end.hpp"
SDK_VERIFY( union tag::bindptr_t, 0x8 );
