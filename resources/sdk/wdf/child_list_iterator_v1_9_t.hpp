#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_list_iterator_v1_9_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CHILD_LIST_ITERATOR_V1_9]
    // => Windows 10 v1607
    //
    struct child_list_iterator_v1_9_t
    {                                
        // Windows 10 v1607      
        //                  
        _m00 uint32_t size;            //{ +0x0000    } | .Size
        _m01 uint32_t flags;           //{ +0x0004    } | .Flags
                                     
        SDK_MAGIC_PROPERTIES( "_WDF_CHILD_LIST_ITERATOR_V1_9.$", 0x0, false, 0xe81d1dc7c49f4a89 );      
        SDK_FIXED_SIZE( child_list_iterator_v1_9_t, 0x28 );      
    };                               
};
#include "magic/child_list_iterator_v1_9_t.end.hpp"
SDK_VERIFY( struct wdf::child_list_iterator_v1_9_t, 0x28 );
