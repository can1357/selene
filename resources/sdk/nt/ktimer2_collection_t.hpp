#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"

#include "magic/ktimer2_collection_t.start.hpp"
namespace nt
{
    // [struct _KTIMER2_COLLECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktimer2_collection_t                  
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                       
        _m00 struct rtl::rb_tree_t tree;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Tree
        _m01 uint64_t              next_due_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NextDueTime
                                                 
        SDK_MAGIC_PROPERTIES( "_KTIMER2_COLLECTION.$", 0x18, true, 0xbd988baf1146bf7b );              
        SDK_FIXED_SIZE( ktimer2_collection_t, 0x18 );              
    };                                           
};
#include "magic/ktimer2_collection_t.end.hpp"
SDK_VERIFY( struct nt::ktimer2_collection_t, 0x18 );
