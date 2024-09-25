#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/quad_t.start.hpp"
namespace nt
{
    // [struct _QUAD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct quad_t                           
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                  
        _m00 int64_t use_this_field_to_copy;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UseThisFieldToCopy
        _m01 double  do_not_use_this_field;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DoNotUseThisField
                                            
        SDK_NONVOL_PROPERTIES( "_QUAD.$", 0x8, true, 0xf661f432d3464ed2 );                       
        SDK_FIXED_SIZE( quad_t, 0x8 );                       
    };                                      
};
#include "magic/quad_t.end.hpp"
SDK_VERIFY( struct nt::quad_t, 0x8 );
