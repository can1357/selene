#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct i_type_info_t; }

#include "magic/method_info_t.start.hpp"
namespace tag
{
    struct funcdesc_t;

    // [struct tagMethodInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct method_info_t                            
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                          
        _m00 struct tag::funcdesc_t*    p_func_desc;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pFuncDesc
        _m01 struct win::i_type_info_t* p_type_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pTypeInfo
                                                    
        SDK_MAGIC_PROPERTIES( "tagMethodInfo.$", 0x10, true, 0x6b38eccf2aedefd3 );            
        SDK_FIXED_SIZE( method_info_t, 0x10 );            
    };                                              
};
#include "magic/method_info_t.end.hpp"
SDK_VERIFY( struct tag::method_info_t, 0x10 );
