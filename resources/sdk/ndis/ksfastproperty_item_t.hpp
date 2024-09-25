#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct status_block_t; }
namespace nt { struct file_object_t;  }

#include "magic/ksfastproperty_item_t.start.hpp"
namespace ndis
{
    struct ksidentifier_t;

    // [struct KSFASTPROPERTY_ITEM]
    // => Windows 10 v1607
    //
    struct ksfastproperty_item_t                          
    {                                                     
        using get_property_handler_t = sdk::function<uint8_t(struct nt::file_object_t*, struct ndis::ksidentifier_t*, uint32_t, void*, uint32_t, struct io::status_block_t*)>*;                     
        using set_property_handler_t = sdk::function<uint8_t(struct nt::file_object_t*, struct ndis::ksidentifier_t*, uint32_t, void*, uint32_t, struct io::status_block_t*)>*;                     
                                                          
        // Windows 10 v1607                               
        //                                                
        _m00 uint32_t                property_id;           //{ +0x0000    } | .PropertyId
        _m01 get_property_handler_t  get_property_handler;  //{ +0x0008    } | .GetPropertyHandler
        _m02 uint8_t                 get_supported;         //{ +0x0008    } | .GetSupported
        _m03 set_property_handler_t  set_property_handler;  //{ +0x0010    } | .SetPropertyHandler
        _m04 uint8_t                 set_supported;         //{ +0x0010    } | .SetSupported
                                                          
        SDK_MAGIC_PROPERTIES( "KSFASTPROPERTY_ITEM.$", 0x0, false, 0x52ad7755b4f96e );                     
        SDK_FIXED_SIZE( ksfastproperty_item_t, 0x20 );                     
    };                                                    
};
#include "magic/ksfastproperty_item_t.end.hpp"
SDK_VERIFY( struct ndis::ksfastproperty_item_t, 0x20 );
