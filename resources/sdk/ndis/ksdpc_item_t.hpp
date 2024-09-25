#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"

#include "magic/ksdpc_item_t.start.hpp"
namespace ndis
{
    // [struct KSDPC_ITEM]
    // => Windows 10 v1607
    //
    struct ksdpc_item_t                        
    {                                          
        // Windows 10 v1607                    
        //                                     
        _m00 struct nt::kdpc_t dpc;              //{ +0x0000    } | .Dpc
        _m01 uint32_t          reference_count;  //{ +0x0040    } | .ReferenceCount
        _m02 uint64_t          access_lock;      //{ +0x0048    } | .AccessLock
                                               
        SDK_MAGIC_PROPERTIES( "KSDPC_ITEM.$", 0x0, false, 0xe55c2260ddaf9abd );                
        SDK_FIXED_SIZE( ksdpc_item_t, 0x50 );                
    };                                         
};
#include "magic/ksdpc_item_t.end.hpp"
SDK_VERIFY( struct ndis::ksdpc_item_t, 0x50 );
