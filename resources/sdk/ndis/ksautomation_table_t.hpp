#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksautomation_table_t.start.hpp"
namespace ndis
{
    struct ksevent_set_t;
    struct ksmethod_set_t;
    struct ksproperty_set_t;

    // [struct KSAUTOMATION_TABLE_]
    // => Windows 10 v1607
    //
    struct ksautomation_table_t                                       
    {                                                                 
        // Windows 10 v1607                                           
        //                                                            
        _m00 uint32_t                             property_sets_count;  //{ +0x0000    } | .PropertySetsCount
        _m01 uint32_t                             property_item_size;   //{ +0x0004    } | .PropertyItemSize
        _m02 const struct ndis::ksproperty_set_t* property_sets;        //{ +0x0008    } | .PropertySets
        _m03 uint32_t                             method_sets_count;    //{ +0x0010    } | .MethodSetsCount
        _m04 uint32_t                             method_item_size;     //{ +0x0014    } | .MethodItemSize
        _m05 const struct ndis::ksmethod_set_t*   method_sets;          //{ +0x0018    } | .MethodSets
        _m06 uint32_t                             event_sets_count;     //{ +0x0020    } | .EventSetsCount
        _m07 uint32_t                             event_item_size;      //{ +0x0024    } | .EventItemSize
        _m08 const struct ndis::ksevent_set_t*    event_sets;           //{ +0x0028    } | .EventSets
                                                                      
        SDK_MAGIC_PROPERTIES( "KSAUTOMATION_TABLE_.$", 0x0, false, 0x26b30bf7d2edec15 );                    
        SDK_FIXED_SIZE( ksautomation_table_t, 0x30 );                    
    };                                                                
};
#include "magic/ksautomation_table_t.end.hpp"
SDK_VERIFY( struct ndis::ksautomation_table_t, 0x30 );
