#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/wait_context_block_t.hpp"

#include "magic/transfer_context_v1_t.start.hpp"
namespace dma
{
    // [struct _DMA_TRANSFER_CONTEXT_V1]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct transfer_context_v1_t                            
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                  
        _m00 int32_t                         dma_state;       //{ +0x0000    +0x0000    +0x0000    } | .DmaState
        _m01 uint32_t                        transfer_state;  //{ +0x0004    +0x0004    +0x0004    } | .TransferState
        _m02 struct nt::wait_context_block_t wcb;             //{ +0x0008    +0x0008    +0x0008    } | .Wcb
        _m03 void*                           hal_wcb;         //{ +0x0050    +0x0050    +0x0050    } | .HalWcb
                                                            
        SDK_MAGIC_PROPERTIES( "_DMA_TRANSFER_CONTEXT_V1.$", 0x58, true, 0x8aef27beebc3549b );               
        SDK_FIXED_SIZE( transfer_context_v1_t, 0x58 );               
    };                                                      
};
#include "magic/transfer_context_v1_t.end.hpp"
SDK_VERIFY( struct dma::transfer_context_v1_t, 0x58 );
