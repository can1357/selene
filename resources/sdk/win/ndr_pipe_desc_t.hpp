#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr_pipe_state_t.hpp"
#include "pipedesc_flags_t.hpp"

#include "magic/ndr_pipe_desc_t.start.hpp"
namespace win
{
    class ndr_pipe_helper_t;
    struct ndr_pipe_message_t;
    struct ndr_alloca_context_t;

    // [struct _NDR_PIPE_DESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_pipe_desc_t                                            
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m00 struct win::ndr_pipe_message_t*   p_pipe_msg;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pPipeMsg
        _m01 int16_t                           current_pipe;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentPipe
        _m02 int16_t                           prev_pipe;               //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .PrevPipe
        _m03 int16_t                           in_pipes;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .InPipes
        _m04 int16_t                           out_pipes;               //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .OutPipes
        _m05 int16_t                           total_pipes;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalPipes
        _m06 int16_t                           pipe_version;            //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .PipeVersion
        _m07 struct win::pipedesc_flags_t      flags;                   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
        _m08 uint32_t                          pipe_exception;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PipeException
        _m09 uint8_t*                          dispatch_buffer;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DispatchBuffer
        _m10 uint32_t                          dispatch_buffer_length;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DispatchBufferLength
        _m11 uint32_t                          last_partial_size;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .LastPartialSize
        _m12 sdk::array<uint8_t, 8>            leftover;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Leftover
        _m13 uint32_t                          leftover_size;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .LeftoverSize
        _m14 uint8_t*                          buffer_save;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .BufferSave
        _m15 uint32_t                          length_save;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .LengthSave
        _m16 struct win::ndr_pipe_state_t      runtime_state;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .RuntimeState
        _m17 void*                             chaining_buffer;         //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ChainingBuffer
        _m18 uint32_t                          chaining_buffer_size;    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ChainingBufferSize
        _m19 class win::ndr_pipe_helper_t*     p_pipe_helper;           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .pPipeHelper
        _m20 struct win::ndr_alloca_context_t* p_alloc_context;         //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .pAllocContext
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDR_PIPE_DESC.$", 0xc0, true, 0x7187c9bc8ead20a0 );                       
        SDK_FIXED_SIZE( ndr_pipe_desc_t, 0xc0 );                       
    };                                                                
};
#include "magic/ndr_pipe_desc_t.end.hpp"
SDK_VERIFY( struct win::ndr_pipe_desc_t, 0xc0 );
