#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cole_drag_drop_helper_t.start.hpp"
namespace win
{
    // [class COLEDragDropHelper]
    // => Windows 10 v1607
    //
    class cole_drag_drop_helper_t
    {                            
        // Windows 10 v1607       
        //                   
        _m00 uint32_t l_refs;      //{ +0x0008    } | ._lRefs
                                 
        SDK_MAGIC_PROPERTIES( "COLEDragDropHelper.$", 0x0, false, 0x261ada7684c4cf36 );       
        SDK_FIXED_SIZE( cole_drag_drop_helper_t, 0x10 );       
    };                           
};
#include "magic/cole_drag_drop_helper_t.end.hpp"
SDK_VERIFY( class win::cole_drag_drop_helper_t, 0x10 );
