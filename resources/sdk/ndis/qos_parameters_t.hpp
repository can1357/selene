#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/qos_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_QOS_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct qos_parameters_t                                                   
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                    
        _m00 struct ndis::object_header_t header;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     num_traffic_classes;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumTrafficClasses
        _m03 sdk::array<uint8_t, 8>       priority_assignment_table;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PriorityAssignmentTable
        _m04 sdk::array<uint8_t, 8>       tc_bandwidth_assignment_table;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TcBandwidthAssignmentTable
        _m05 sdk::array<uint8_t, 8>       tsa_assignment_table;                 //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .TsaAssignmentTable
        _m06 uint32_t                     pfc_enable;                           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .PfcEnable
        _m07 uint32_t                     num_classification_elements;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NumClassificationElements
        _m08 uint32_t                     classification_element_size;          //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ClassificationElementSize
        _m09 uint32_t                     first_classification_element_offset;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FirstClassificationElementOffset
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_QOS_PARAMETERS.$", 0x34, true, 0x932e502a407fa9ab );                                    
        SDK_FIXED_SIZE( qos_parameters_t, 0x34 );                                    
    };                                                                        
};
#include "magic/qos_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::qos_parameters_t, 0x34 );
