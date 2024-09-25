#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksmultiple_item_t.start.hpp"
namespace ndis
{
    // [struct KSMULTIPLE_ITEM]
    // => Windows 10 v1607
    //
    struct ksmultiple_item_t
    {                       
        // Windows 10 v1607      
        //                  
        _m00 uint32_t size;   //{ +0x0000    } | .Size
        _m01 uint32_t count;  //{ +0x0004    } | .Count
                            
        SDK_MAGIC_PROPERTIES( "KSMULTIPLE_ITEM.$", 0x0, false, 0x9c6afc490f558ce8 );      
        SDK_FIXED_SIZE( ksmultiple_item_t, 0x8 );      
    };                      
};
#include "magic/ksmultiple_item_t.end.hpp"
SDK_VERIFY( struct ndis::ksmultiple_item_t, 0x8 );
