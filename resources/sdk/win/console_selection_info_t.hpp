#pragma once
#include <sdkgen/support_library.hpp>
#include "coord_t.hpp"
#include "small_rect_t.hpp"

#include "magic/console_selection_info_t.start.hpp"
namespace win
{
    // [struct _CONSOLE_SELECTION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct console_selection_info_t                       
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 uint32_t                 dw_flags;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 struct win::coord_t      dw_selection_anchor;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwSelectionAnchor
        _m02 struct win::small_rect_t sr_selection;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .srSelection
                                                          
        SDK_MAGIC_PROPERTIES( "_CONSOLE_SELECTION_INFO.$", 0x10, true, 0x175f28cf8e16415a );                    
        SDK_FIXED_SIZE( console_selection_info_t, 0x10 );                    
    };                                                    
};
#include "magic/console_selection_info_t.end.hpp"
SDK_VERIFY( struct win::console_selection_info_t, 0x10 );
