#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/stgmedium_t.hpp"

#include "magic/flag_stgmedium_t.start.hpp"
namespace win
{
    // [struct _FLAG_STGMEDIUM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flag_stgmedium_t                           
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                            
        _m00 int32_t                 context_flags;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ContextFlags
        _m01 int32_t                 f_pass_ownership;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fPassOwnership
        _m02 struct tag::stgmedium_t stgmed;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Stgmed
                                                      
        SDK_MAGIC_PROPERTIES( "_FLAG_STGMEDIUM.$", 0x20, true, 0x7d623a73b59c3ca7 );                 
        SDK_FIXED_SIZE( flag_stgmedium_t, 0x20 );                 
    };                                                
};
#include "magic/flag_stgmedium_t.end.hpp"
SDK_VERIFY( struct win::flag_stgmedium_t, 0x20 );
