#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_get_standard_marshal_in_progress_t.start.hpp"
namespace win
{
    class c_ole_tls_t;
    struct i_unknown_t;
    class co_get_standard_marshal_in_progress_t;

    // [class CoGetStandardMarshalInProgress]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class co_get_standard_marshal_in_progress_t            
    {                                                      
        using p_next_t = class win::co_get_standard_marshal_in_progress_t*;                     
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 class win::c_ole_tls_t&  tls;                   //{ +0x0000    +0x0000    +0x0000    } | ._tls
        _m01 p_next_t                 p_next;                //{ +0x0008    +0x0008    +0x0008    } | ._pNext
        _m02 struct win::i_unknown_t* punk_object_identity;  //{ +0x0010    +0x0010    +0x0010    } | ._punkObjectIdentity
                                                           
        SDK_MAGIC_PROPERTIES( "CoGetStandardMarshalInProgress.$", 0x18, true, 0xf16d6a6dc98ecfa8 );                     
        SDK_FIXED_SIZE( co_get_standard_marshal_in_progress_t, 0x18 );                     
    };                                                     
};
#include "magic/co_get_standard_marshal_in_progress_t.end.hpp"
SDK_VERIFY( class win::co_get_standard_marshal_in_progress_t, 0x18 );
