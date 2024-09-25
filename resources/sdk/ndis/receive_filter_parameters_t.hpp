#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "receive_filter_type_t.hpp"

#include "magic/receive_filter_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RECEIVE_FILTER_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_filter_parameters_t                                            
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                        
        _m00 struct ndis::object_header_t     header;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                         flags;                                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::receive_filter_type_t filter_type;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FilterType
        _m03 uint32_t                         queue_id;                             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .QueueId
        _m04 uint32_t                         filter_id;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FilterId
        _m05 uint32_t                         field_parameters_array_offset;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .FieldParametersArrayOffset
        _m06 uint32_t                         field_parameters_array_num_elements;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FieldParametersArrayNumElements
        _m07 uint32_t                         field_parameters_array_element_size;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .FieldParametersArrayElementSize
        _m08 uint32_t                         requested_filter_id_bit_count;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RequestedFilterIdBitCount
        _m09 uint32_t                         max_coalescing_delay;                 //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaxCoalescingDelay
        _m10 uint32_t                         v_port_id;                            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .VPortId
                                                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_FILTER_PARAMETERS.$", 0x2c, true, 0xf7817a22ebc4a880 );                                    
        SDK_FIXED_SIZE( receive_filter_parameters_t, 0x2c );                                    
    };                                                                            
};
#include "magic/receive_filter_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::receive_filter_parameters_t, 0x2c );
