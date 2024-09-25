#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_free_info_t.start.hpp"
namespace tp
{
    // [struct _TP_DEBUG_FREE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debug_free_info_t         
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t free_list_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FreeListSize
                                     
        SDK_MAGIC_PROPERTIES( "_TP_DEBUG_FREE_INFO.$", 0x4, true, 0x970e77f02a33812c );               
        SDK_FIXED_SIZE( debug_free_info_t, 0x4 );               
    };                               
};
#include "magic/debug_free_info_t.end.hpp"
SDK_VERIFY( struct tp::debug_free_info_t, 0x4 );
