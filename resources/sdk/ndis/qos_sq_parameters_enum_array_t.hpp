#pragma once
#include <sdkgen/support_library.hpp>
#include "qos_sq_type_t.hpp"
#include "object_header_t.hpp"

#include "magic/qos_sq_parameters_enum_array_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct qos_sq_parameters_enum_array_t                              
    {                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                             
        _m00 struct ndis::object_header_t header;                        //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                         //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::qos_sq_type_t     sq_type;                       //{ +0x0008    +0x0008    +0x0008    } | .SqType
        _m03 uint32_t                     first_sq_id;                   //{ +0x000c    +0x000c    +0x000c    } | .FirstSqId
        _m04 uint32_t                     max_sqs_to_return;             //{ +0x0010    +0x0010    +0x0010    } | .MaxSqsToReturn
        _m05 uint32_t                     sq_array_offset;               //{ +0x0014    +0x0014    +0x0014    } | .SqArrayOffset
        _m06 uint32_t                     sq_params_array_offset;        //{ +0x0014    +0x0014    +0x0014    } | .SqParamsArrayOffset
        _m07 uint32_t                     sq_array_num_elements;         //{ +0x0018    +0x0018    +0x0018    } | .SqArrayNumElements
        _m08 uint32_t                     sq_params_array_num_elements;  //{ +0x0018    +0x0018    +0x0018    } | .SqParamsArrayNumElements
        _m09 uint32_t                     sq_array_element_size;         //{ +0x001c    +0x001c    +0x001c    } | .SqArrayElementSize
        _m10 uint32_t                     sq_params_array_element_size;  //{ +0x001c    +0x001c    +0x001c    } | .SqParamsArrayElementSize
                                                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY.$", 0x20, true, 0x858e905f29f5c42b );                             
        SDK_FIXED_SIZE( qos_sq_parameters_enum_array_t, 0x20 );                             
    };                                                                 
};
#include "magic/qos_sq_parameters_enum_array_t.end.hpp"
SDK_VERIFY( struct ndis::qos_sq_parameters_enum_array_t, 0x20 );
