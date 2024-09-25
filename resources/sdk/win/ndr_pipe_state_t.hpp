#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_pipe_state_t.start.hpp"
namespace win
{
    // [struct NDR_PIPE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_pipe_state_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                      
        _m00 int32_t        current_state;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentState
        _m01 int32_t        total_elems_count;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalElemsCount
        _m02 int32_t        orig_elems_in_chunk;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OrigElemsInChunk
        _m03 int32_t        elems_in_chunk;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ElemsInChunk
        _m04 int32_t        elem_align;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ElemAlign
        _m05 int32_t        elem_wire_size;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ElemWireSize
        _m06 int32_t        elem_mem_size;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ElemMemSize
        _m07 int32_t        partial_buffer_size;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .PartialBufferSize
        _m08 uint8_t*       partial_elem;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PartialElem
        _m09 int32_t        partial_elem_size;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PartialElemSize
        _m10 int32_t        partial_offset;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PartialOffset
        _m11 int1_t         end_of_pipe;          //{ +0x0030@0  +0x0030@0  +0x0030@0  +0x0030@0  } | .EndOfPipe
        _m12 int1_t         end_of_pipe_pending;  //{ +0x0030@1  +0x0030@1  +0x0030@1  +0x0030@1  } | .EndOfPipePending
        _m13 int32_t        low_chunk_limit;      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .LowChunkLimit
        _m14 int32_t        high_chunk_limit;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HighChunkLimit
        _m15 int32_t        f_block_copy;         //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .fBlockCopy
        _m16 int32_t        elem_pad;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ElemPad
        _m17 const uint8_t* type_format;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .TypeFormat
                                                
        SDK_MAGIC_PROPERTIES( "NDR_PIPE_STATE.$", 0x50, true, 0xb931f9e4720bcddd );                    
        SDK_FIXED_SIZE( ndr_pipe_state_t, 0x50 );                    
    };                                          
};
#include "magic/ndr_pipe_state_t.end.hpp"
SDK_VERIFY( struct win::ndr_pipe_state_t, 0x50 );
