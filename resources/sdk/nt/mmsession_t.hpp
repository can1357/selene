#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "../rtl/avl_tree_t.hpp"

#include "magic/mmsession_t.start.hpp"
namespace nt
{
    // [struct _MMSESSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct mmsession_t                                              
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                               
        //                                                          
        _m00 struct ex::push_lock_t  system_space_view_lock;          //{ +0x0000    +0x0000    +0x0000    } | .SystemSpaceViewLock
        _m01 struct ex::push_lock_t* system_space_view_lock_pointer;  //{ +0x0008    +0x0008    +0x0008    } | .SystemSpaceViewLockPointer
        _m02 struct rtl::avl_tree_t  view_root;                       //{ +0x0010    +0x0010    +0x0010    } | .ViewRoot
        _m03 uint32_t                view_count;                      //{ +0x0018    +0x0018    +0x0018    } | .ViewCount
        _m04 uint32_t                bitmap_failures;                 //{ +0x001c    +0x001c    +0x001c    } | .BitmapFailures
                                                                    
        SDK_MAGIC_PROPERTIES( "_MMSESSION.$", 0x20, true, 0xb5b5305cbd809f48 );                               
        SDK_FIXED_SIZE( mmsession_t, 0x20 );                               
    };                                                              
};
#include "magic/mmsession_t.end.hpp"
SDK_VERIFY( struct nt::mmsession_t, 0x20 );
