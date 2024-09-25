#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dispparams_t.start.hpp"
namespace tag
{
    struct variant_t;

    // [struct tagDISPPARAMS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dispparams_t                                 
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 struct tag::variant_t* rgvarg;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .rgvarg
        _m01 int32_t*               rgdispid_named_args;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgdispidNamedArgs
        _m02 uint32_t               c_args;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cArgs
        _m03 uint32_t               c_named_args;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .cNamedArgs
                                                        
        SDK_MAGIC_PROPERTIES( "tagDISPPARAMS.$", 0x18, true, 0xac1c3b1f82bad772 );                    
        SDK_FIXED_SIZE( dispparams_t, 0x18 );                    
    };                                                  
};
#include "magic/dispparams_t.end.hpp"
SDK_VERIFY( struct tag::dispparams_t, 0x18 );
