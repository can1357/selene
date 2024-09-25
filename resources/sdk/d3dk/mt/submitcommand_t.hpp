#pragma once
#include <sdkgen/support_library.hpp>
#include "submitcommandflags_t.hpp"

#include "magic/submitcommand_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SUBMITCOMMAND]
    // => WDK 10 (NV)
    //
    struct submitcommand_t                                                  
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 uint64_t                              commands;                  //{ +0x0000    } | .Commands
        _m01 uint32_t                              command_length;            //{ +0x0008    } | .CommandLength
        _m02 struct d3dk::mt::submitcommandflags_t flags;                     //{ +0x000c    } | .Flags
        _m03 uint64_t                              present_history_token;     //{ +0x0010    } | .PresentHistoryToken
        _m04 uint32_t                              broadcast_context_count;   //{ +0x0018    } | .BroadcastContextCount
        _m05 sdk::array<uint32_t, 64>              broadcast_context;         //{ +0x001c    } | .BroadcastContext
        _m06 void*                                 p_private_driver_data;     //{ +0x0120    } | .pPrivateDriverData
        _m07 uint32_t                              private_driver_data_size;  //{ +0x0128    } | .PrivateDriverDataSize
        _m08 uint32_t                              num_primaries;             //{ +0x012c    } | .NumPrimaries
        _m09 sdk::array<uint32_t, 16>              written_primaries;         //{ +0x0130    } | .WrittenPrimaries
        _m10 uint32_t                              num_history_buffers;       //{ +0x0170    } | .NumHistoryBuffers
        _m11 uint32_t*                             history_buffer_array;      //{ +0x0178    } | .HistoryBufferArray
                                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SUBMITCOMMAND.$", 0x0, false, 0x568da0b85187e0f5 );                         
        SDK_FIXED_SIZE( submitcommand_t, 0x180 );                           
    };                                                                      
};
#include "magic/submitcommand_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::submitcommand_t, 0x180 );
