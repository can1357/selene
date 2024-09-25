#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ole_menu_group_widths_t.start.hpp"
namespace tag
{
    // [struct tagOleMenuGroupWidths]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ole_menu_group_widths_t        
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                
        _m00 sdk::array<int32_t, 6> width;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .width
                                          
        SDK_MAGIC_PROPERTIES( "tagOleMenuGroupWidths.$", 0x18, true, 0x72b8f0cdcf591795 );      
        SDK_FIXED_SIZE( ole_menu_group_widths_t, 0x18 );      
    };                                    
};
#include "magic/ole_menu_group_widths_t.end.hpp"
SDK_VERIFY( struct tag::ole_menu_group_widths_t, 0x18 );
