#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "shared_memory_usage_t.hpp"

namespace nt { struct scatter_gather_list_t; }

#include "magic/shared_memory_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SHARED_MEMORY_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shared_memory_parameters_t                                
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                           
        _m00 struct ndis::object_header_t      header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                          flags;                  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                          queue_id;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .QueueId
        _m03 void*                             shared_memory_handle;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SharedMemoryHandle
        _m04 uint32_t                          preferred_node;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PreferredNode
        _m05 enum ndis::shared_memory_usage_t  usage;                  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Usage
        _m06 uint32_t                          length;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Length
        _m07 void*                             virtual_address;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .VirtualAddress
        _m08 uint32_t                          sg_list_buffer_length;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SGListBufferLength
        _m09 struct nt::scatter_gather_list_t* sg_list_buffer;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SGListBuffer
        _m10 uint32_t                          v_port_id;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .VPortId
                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_SHARED_MEMORY_PARAMETERS.$", 0x48, true, 0x741e47f7bbed5022 );                      
        SDK_FIXED_SIZE( shared_memory_parameters_t, 0x48 );                      
    };                                                               
};
#include "magic/shared_memory_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::shared_memory_parameters_t, 0x48 );
