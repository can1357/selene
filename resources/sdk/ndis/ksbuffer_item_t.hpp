#pragma once
#include <sdkgen/support_library.hpp>
#include "ksdpc_item_t.hpp"

#include "magic/ksbuffer_item_t.start.hpp"
namespace ndis
{
    // [struct KSBUFFER_ITEM]
    // => Windows 10 v1607
    //
    struct ksbuffer_item_t                         
    {                                              
        // Windows 10 v1607                        
        //                                         
        _m00 struct ndis::ksdpc_item_t dpc_item;     //{ +0x0000    } | .DpcItem
        _m01 nt::list_entry_t          buffer_list;  //{ +0x0050    } | .BufferList
                                                   
        SDK_MAGIC_PROPERTIES( "KSBUFFER_ITEM.$", 0x0, false, 0x67fe9989a0f4c44 );            
        SDK_FIXED_SIZE( ksbuffer_item_t, 0x60 );            
    };                                             
};
#include "magic/ksbuffer_item_t.end.hpp"
SDK_VERIFY( struct ndis::ksbuffer_item_t, 0x60 );
