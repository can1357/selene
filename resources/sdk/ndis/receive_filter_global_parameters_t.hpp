#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/receive_filter_global_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RECEIVE_FILTER_GLOBAL_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_filter_global_parameters_t                  
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                     
        _m00 struct ndis::object_header_t header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     enabled_filter_types;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EnabledFilterTypes
        _m03 uint32_t                     enabled_queue_types;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .EnabledQueueTypes
                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_FILTER_GLOBAL_PARAMETERS.$", 0x10, true, 0xd3ea5ec060e8356a );                     
        SDK_FIXED_SIZE( receive_filter_global_parameters_t, 0x10 );                     
    };                                                         
};
#include "magic/receive_filter_global_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::receive_filter_global_parameters_t, 0x10 );
