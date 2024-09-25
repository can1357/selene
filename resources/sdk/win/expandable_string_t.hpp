#pragma once
#include <sdkgen/support_library.hpp>
#include "opaque_string_t.hpp"

#include "magic/expandable_string_t.start.hpp"
namespace win
{
    // [struct ExpandableString]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct expandable_string_t                        
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                            
        _m00 class win::opaque_string_t unexpanded;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Unexpanded
        _m01 bool                       is_expandable;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IsExpandable
                                                      
        SDK_MAGIC_PROPERTIES( "ExpandableString.$", 0x10, true, 0x5abed17f1d9d3bf0 );              
        SDK_FIXED_SIZE( expandable_string_t, 0x10 );              
    };                                                
};
#include "magic/expandable_string_t.end.hpp"
SDK_VERIFY( struct win::expandable_string_t, 0x10 );
