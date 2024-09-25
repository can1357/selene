#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/submitcommandtohwqueue_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE]
    // => WDK 10 (NV)
    //
    struct submitcommandtohwqueue_t                     
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t        h_hw_queue;                  //{ +0x0000    } | .hHwQueue
        _m01 uint64_t        hw_queue_progress_fence_id;  //{ +0x0008    } | .HwQueueProgressFenceId
        _m02 uint64_t        command_buffer;              //{ +0x0010    } | .CommandBuffer
        _m03 uint32_t        command_length;              //{ +0x0018    } | .CommandLength
        _m04 uint32_t        private_driver_data_size;    //{ +0x001c    } | .PrivateDriverDataSize
        _m05 void*           p_private_driver_data;       //{ +0x0020    } | .pPrivateDriverData
        _m06 uint32_t        num_primaries;               //{ +0x0028    } | .NumPrimaries
        _m07 const uint32_t* written_primaries;           //{ +0x0030    } | .WrittenPrimaries
                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SUBMITCOMMANDTOHWQUEUE.$", 0x0, false, 0xfac517de5d4dcdf3 );                           
        SDK_FIXED_SIZE( submitcommandtohwqueue_t, 0x38 );                           
    };                                                  
};
#include "magic/submitcommandtohwqueue_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::submitcommandtohwqueue_t, 0x38 );
