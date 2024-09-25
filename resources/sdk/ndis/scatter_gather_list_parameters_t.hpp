#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "shared_memory_usage_t.hpp"

namespace nt { struct device_object_t;       }
namespace nt { struct mdl_t;                 }
namespace nt { struct scatter_gather_list_t; }

#include "magic/scatter_gather_list_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SCATTER_GATHER_LIST_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scatter_gather_list_parameters_t                                           
    {                                                                                 
        using process_sg_list_handler_t = sdk::function<void(struct nt::device_object_t*, void*, struct nt::scatter_gather_list_t*, void*)>*;                                       
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                            
        _m00 struct ndis::object_header_t      header;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                          flags;                                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                          queue_id;                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .QueueId
        _m03 enum ndis::shared_memory_usage_t  shared_memory_usage;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SharedMemoryUsage
        _m04 struct nt::mdl_t*                 mdl;                                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Mdl
        _m05 void*                             current_va;                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CurrentVa
        _m06 uint32_t                          length;                                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Length
        _m07 process_sg_list_handler_t         process_sg_list_handler;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProcessSGListHandler
        _m08 void*                             context;                                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Context
        _m09 struct nt::scatter_gather_list_t* scatter_gather_list_buffer;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ScatterGatherListBuffer
        _m10 uint32_t                          scatter_gather_list_buffer_size;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ScatterGatherListBufferSize
        _m11 uint32_t                          scatter_gather_list_buffer_size_needed;  //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ScatterGatherListBufferSizeNeeded
                                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_SCATTER_GATHER_LIST_PARAMETERS.$", 0x48, true, 0x3bb776b787780403 );                                       
        SDK_FIXED_SIZE( scatter_gather_list_parameters_t, 0x48 );                                       
    };                                                                                
};
#include "magic/scatter_gather_list_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::scatter_gather_list_parameters_t, 0x48 );
