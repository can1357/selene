#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disallowed_guids_t.start.hpp"
namespace nt
{
    struct guid_t;

    // [struct _DISALLOWED_GUIDS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct disallowed_guids_t         
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                            
        _m00 uint16_t           count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 struct nt::guid_t* guids;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Guids
                                      
        SDK_MAGIC_PROPERTIES( "_DISALLOWED_GUIDS.$", 0x10, true, 0x3032bd987102c5ab );      
        SDK_FIXED_SIZE( disallowed_guids_t, 0x10 );      
    };                                
};
#include "magic/disallowed_guids_t.end.hpp"
SDK_VERIFY( struct nt::disallowed_guids_t, 0x10 );
