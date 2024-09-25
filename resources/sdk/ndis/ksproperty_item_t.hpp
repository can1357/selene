#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/ksproperty_item_t.start.hpp"
namespace ndis
{
    struct ksidentifier_t;
    struct ksproperty_values_t;

    // [struct KSPROPERTY_ITEM]
    // => Windows 10 v1607
    //
    struct ksproperty_item_t                                              
    {                                                                     
        using get_property_handler_t = sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*;                     
        using set_property_handler_t = sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*;                     
        using support_handler_t =      sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*;                     
                                                                          
        // Windows 10 v1607                                               
        //                                                                
        _m00 uint32_t                                property_id;           //{ +0x0000    } | .PropertyId
        _m01 get_property_handler_t                  get_property_handler;  //{ +0x0008    } | .GetPropertyHandler
        _m02 uint8_t                                 get_supported;         //{ +0x0008    } | .GetSupported
        _m03 uint32_t                                min_property;          //{ +0x0010    } | .MinProperty
        _m04 uint32_t                                min_data;              //{ +0x0014    } | .MinData
        _m05 set_property_handler_t                  set_property_handler;  //{ +0x0018    } | .SetPropertyHandler
        _m06 uint8_t                                 set_supported;         //{ +0x0018    } | .SetSupported
        _m07 const struct ndis::ksproperty_values_t* values;                //{ +0x0020    } | .Values
        _m08 uint32_t                                relations_count;       //{ +0x0028    } | .RelationsCount
        _m09 const struct ndis::ksidentifier_t*      relations;             //{ +0x0030    } | .Relations
        _m10 support_handler_t                       support_handler;       //{ +0x0038    } | .SupportHandler
        _m11 uint32_t                                serialized_size;       //{ +0x0040    } | .SerializedSize
                                                                          
        SDK_MAGIC_PROPERTIES( "KSPROPERTY_ITEM.$", 0x0, false, 0x9b552e9ce55a3ea4 );                     
        SDK_FIXED_SIZE( ksproperty_item_t, 0x48 );                        
    };                                                                    
};
#include "magic/ksproperty_item_t.end.hpp"
SDK_VERIFY( struct ndis::ksproperty_item_t, 0x48 );
