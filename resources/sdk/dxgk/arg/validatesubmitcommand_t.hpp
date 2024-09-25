#pragma once
#include <sdkgen/support_library.hpp>
#include "../validatesubmitcommandflags_t.hpp"

#include "magic/validatesubmitcommand_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_VALIDATESUBMITCOMMAND]
    // => WDK 10 (NV)
    //
    struct validatesubmitcommand_t                                                
    {                                                                             
        // WDK 10                                                                 
        //                                                                        
        _m00 uint64_t                                  commands;                    //{ +0x0000    } | .Commands
        _m01 uint32_t                                  command_length;              //{ +0x0008    } | .CommandLength
        _m02 struct dxgk::validatesubmitcommandflags_t flags;                       //{ +0x000c    } | .Flags
        _m03 uint32_t                                  context_count;               //{ +0x0010    } | .ContextCount
        _m04 sdk::array<void*, 64>                     context;                     //{ +0x0018    } | .Context
        _m05 void*                                     p_private_driver_data;       //{ +0x0218    } | .pPrivateDriverData
        _m06 uint32_t                                  private_driver_data_size;    //{ +0x0220    } | .PrivateDriverDataSize
        _m07 uint32_t                                  umd_private_data_size;       //{ +0x0224    } | .UmdPrivateDataSize
        _m08 uint64_t                                  hw_queue_progress_fence_id;  //{ +0x0228    } | .HwQueueProgressFenceId
                                                                                  
        SDK_NONVOL_PROPERTIES( "_DXGKARG_VALIDATESUBMITCOMMAND.$", 0x0, false, 0xa7936edf28a74e06 );                           
        SDK_FIXED_SIZE( validatesubmitcommand_t, 0x230 );                           
    };                                                                            
};
#include "magic/validatesubmitcommand_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::validatesubmitcommand_t, 0x230 );
