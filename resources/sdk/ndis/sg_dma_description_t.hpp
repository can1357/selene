#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

namespace nt { struct device_object_t;       }
namespace nt { struct scatter_gather_list_t; }

#include "magic/sg_dma_description_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SG_DMA_DESCRIPTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sg_dma_description_t                                                           
    {                                                                                     
        using process_sg_list_handler_t =              sdk::function<void(struct nt::device_object_t*, void*, struct nt::scatter_gather_list_t*, void*)>*;                                     
        using shared_mem_allocate_complete_handler_t = sdk::function<void(void*, void*, int64_t*, uint32_t, void*)>*;                                     
                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                
        _m00 struct ndis::object_header_t            header;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                flags;                                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                                maximum_physical_mapping;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumPhysicalMapping
        _m03 process_sg_list_handler_t               process_sg_list_handler;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessSGListHandler
        _m04 shared_mem_allocate_complete_handler_t  shared_mem_allocate_complete_handler;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SharedMemAllocateCompleteHandler
        _m05 uint32_t                                scatter_gather_list_size;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ScatterGatherListSize
                                                                                          
        // Windows 11                                                                     
        //                                                                                
        _m06 struct nt::device_object_t*             pdo_override;                          //{ +0x0028    } | .PdoOverride
                                                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_SG_DMA_DESCRIPTION.$", 0x28, true, 0xa20fcebd0337e1ea );                                     
        SDK_DYNAMIC_SIZE( sg_dma_description_t );                                         
    };                                                                                    
};
#include "magic/sg_dma_description_t.end.hpp"
