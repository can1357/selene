#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk { struct allocationlist_t; }

#include "magic/rendergdi_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RENDERGDI]
    // => WDK 10 (NV)
    //
    struct rendergdi_t                                                     
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 const void*                    p_command;                       //{ +0x0000    } | .pCommand
        _m01 uint32_t                       command_length;                  //{ +0x0008    } | .CommandLength
        _m02 void*                          p_dma_buffer;                    //{ +0x0010    } | .pDmaBuffer
        _m03 uint64_t                       dma_buffer_gpu_virtual_address;  //{ +0x0018    } | .DmaBufferGpuVirtualAddress
        _m04 uint32_t                       dma_size;                        //{ +0x0020    } | .DmaSize
        _m05 void*                          p_dma_buffer_private_data;       //{ +0x0028    } | .pDmaBufferPrivateData
        _m06 uint32_t                       dma_buffer_private_data_size;    //{ +0x0030    } | .DmaBufferPrivateDataSize
        _m07 struct dxgk::allocationlist_t* p_allocation_list;               //{ +0x0038    } | .pAllocationList
        _m08 uint32_t                       allocation_list_size;            //{ +0x0040    } | .AllocationListSize
        _m09 uint32_t                       multipass_offset;                //{ +0x0044    } | .MultipassOffset
                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RENDERGDI.$", 0x0, false, 0xa06d496c2b9b461d );                               
        SDK_FIXED_SIZE( rendergdi_t, 0x48 );                               
    };                                                                     
};
#include "magic/rendergdi_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::rendergdi_t, 0x48 );
