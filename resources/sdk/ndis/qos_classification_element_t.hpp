#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/qos_classification_element_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_QOS_CLASSIFICATION_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct qos_classification_element_t                      
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                   
        _m00 struct ndis::object_header_t header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint16_t                     condition_selector;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConditionSelector
        _m03 uint16_t                     condition_field;     //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .ConditionField
        _m04 uint16_t                     action_selector;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ActionSelector
        _m05 uint16_t                     action_field;        //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .ActionField
                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_QOS_CLASSIFICATION_ELEMENT.$", 0x10, true, 0x4f0cbff0af1a8aab );                   
        SDK_FIXED_SIZE( qos_classification_element_t, 0x10 );                   
    };                                                       
};
#include "magic/qos_classification_element_t.end.hpp"
SDK_VERIFY( struct ndis::qos_classification_element_t, 0x10 );
