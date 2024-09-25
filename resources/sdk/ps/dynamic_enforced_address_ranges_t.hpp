#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "../rtl/avl_tree_t.hpp"

#include "magic/dynamic_enforced_address_ranges_t.start.hpp"
namespace ps
{
    // [struct _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES]
    // => Windows 11, Windows 10 v20H2
    //
    struct dynamic_enforced_address_ranges_t
    {                                       
        // Windows 11, Windows 10 v20H2     
        //                               
        _m00 struct rtl::avl_tree_t tree;     //{ +0x0000    +0x0000    } | .Tree
        _m01 struct ex::push_lock_t lock;     //{ +0x0008    +0x0008    } | .Lock
                                            
        SDK_MAGIC_PROPERTIES( "_PS_DYNAMIC_ENFORCED_ADDRESS_RANGES.$", 0x10, true, 0xf5d1a6ac437a54e0 );     
        SDK_FIXED_SIZE( dynamic_enforced_address_ranges_t, 0x10 );     
    };                                      
};
#include "magic/dynamic_enforced_address_ranges_t.end.hpp"
SDK_VERIFY( struct ps::dynamic_enforced_address_ranges_t, 0x10 );
