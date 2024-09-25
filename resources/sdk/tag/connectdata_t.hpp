#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct i_unknown_t; }

#include "magic/connectdata_t.start.hpp"
namespace tag
{
    // [struct tagCONNECTDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct connectdata_t                        
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 struct win::i_unknown_t* p_unk;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pUnk
        _m01 uint32_t                 dw_cookie;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwCookie
                                                
        SDK_MAGIC_PROPERTIES( "tagCONNECTDATA.$", 0x10, true, 0x34c857e9694ed92d );          
        SDK_FIXED_SIZE( connectdata_t, 0x10 );          
    };                                          
};
#include "magic/connectdata_t.end.hpp"
SDK_VERIFY( struct tag::connectdata_t, 0x10 );
