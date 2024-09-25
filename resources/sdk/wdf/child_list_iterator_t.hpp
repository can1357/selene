#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_list_iterator_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CHILD_LIST_ITERATOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct child_list_iterator_t
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                
        SDK_NONVOL_PROPERTIES( "_WDF_CHILD_LIST_ITERATOR.$", 0x28, true, 0x827286f459b50ba3 );      
        SDK_FIXED_SIZE( child_list_iterator_t, 0x28 );      
    };                          
};
#include "magic/child_list_iterator_t.end.hpp"
SDK_VERIFY( struct wdf::child_list_iterator_t, 0x28 );
