#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct status_block_t; }
namespace nt { struct file_object_t;  }

#include "magic/ksfastmethod_item_t.start.hpp"
namespace ndis
{
    struct ksidentifier_t;

    // [struct KSFASTMETHOD_ITEM]
    // => Windows 10 v1607
    //
    struct ksfastmethod_item_t                  
    {                                           
        using method_handler_t = sdk::function<uint8_t(struct nt::file_object_t*, struct ndis::ksidentifier_t*, uint32_t, void*, uint32_t, struct io::status_block_t*)>*;                 
                                                
        // Windows 10 v1607                     
        //                                      
        _m00 uint32_t          method_id;         //{ +0x0000    } | .MethodId
        _m01 method_handler_t  method_handler;    //{ +0x0008    } | .MethodHandler
        _m02 uint8_t           method_supported;  //{ +0x0008    } | .MethodSupported
                                                
        SDK_MAGIC_PROPERTIES( "KSFASTMETHOD_ITEM.$", 0x0, false, 0x6f9fb6057c45546 );                 
        SDK_FIXED_SIZE( ksfastmethod_item_t, 0x10 );                 
    };                                          
};
#include "magic/ksfastmethod_item_t.end.hpp"
SDK_VERIFY( struct ndis::ksfastmethod_item_t, 0x10 );
