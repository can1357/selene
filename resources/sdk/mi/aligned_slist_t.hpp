#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"

#include "magic/aligned_slist_t.start.hpp"
namespace mi
{
    // [struct _MI_ALIGNED_SLIST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct aligned_slist_t                   
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 union nt::slist_header_t s_list;  //{ +0x0000    +0x0000    +0x0000    } | .SList
                                             
        SDK_MAGIC_PROPERTIES( "_MI_ALIGNED_SLIST.$", 0x40, true, 0xb7437349c17108f3 );       
        SDK_FIXED_SIZE( aligned_slist_t, 0x40 );       
    };                                       
};
#include "magic/aligned_slist_t.end.hpp"
SDK_VERIFY( struct mi::aligned_slist_t, 0x40 );
