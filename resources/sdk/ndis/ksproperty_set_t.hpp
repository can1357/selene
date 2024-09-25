#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/ksproperty_set_t.start.hpp"
namespace ndis
{
    struct ksproperty_item_t;
    struct ksfastproperty_item_t;

    // [struct KSPROPERTY_SET]
    // => Windows 10 v1607
    //
    struct ksproperty_set_t                                             
    {                                                                   
        // Windows 10 v1607                                             
        //                                                              
        _m00 const struct nt::guid_t*                  set;               //{ +0x0000    } | .Set
        _m01 uint32_t                                  properties_count;  //{ +0x0008    } | .PropertiesCount
        _m02 const struct ndis::ksproperty_item_t*     property_item;     //{ +0x0010    } | .PropertyItem
        _m03 uint32_t                                  fast_io_count;     //{ +0x0018    } | .FastIoCount
        _m04 const struct ndis::ksfastproperty_item_t* fast_io_table;     //{ +0x0020    } | .FastIoTable
                                                                        
        SDK_MAGIC_PROPERTIES( "KSPROPERTY_SET.$", 0x0, false, 0x8f66b7f87d700be0 );                 
        SDK_FIXED_SIZE( ksproperty_set_t, 0x28 );                       
    };                                                                  
};
#include "magic/ksproperty_set_t.end.hpp"
SDK_VERIFY( struct ndis::ksproperty_set_t, 0x28 );
