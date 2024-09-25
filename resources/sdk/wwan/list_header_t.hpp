#pragma once
#include <sdkgen/support_library.hpp>
#include "struct_type_t.hpp"

#include "magic/list_header_t.start.hpp"
namespace wwan
{
    // [struct _WWAN_LIST_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct list_header_t                            
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 enum wwan::struct_type_t element_type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ElementType
        _m01 uint32_t                 element_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ElementCount
                                                    
        SDK_MAGIC_PROPERTIES( "_WWAN_LIST_HEADER.$", 0x8, true, 0x1b67299bb2c120cd );              
        SDK_FIXED_SIZE( list_header_t, 0x8 );              
    };                                              
};
#include "magic/list_header_t.end.hpp"
SDK_VERIFY( struct wwan::list_header_t, 0x8 );
