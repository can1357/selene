#pragma once
#include <sdkgen/support_library.hpp>
#include "installspec_t.hpp"
#include "installspectype_t.hpp"

#include "magic/installdata_t.start.hpp"
namespace win
{
    // [struct _INSTALLDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct installdata_t                      
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                    
        _m00 enum win::installspectype_t type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 union win::installspec_t    spec;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Spec
                                              
        SDK_MAGIC_PROPERTIES( "_INSTALLDATA.$", 0x20, true, 0x894efb65f7bfe7a5 );     
        SDK_FIXED_SIZE( installdata_t, 0x20 );     
    };                                        
};
#include "magic/installdata_t.end.hpp"
SDK_VERIFY( struct win::installdata_t, 0x20 );
