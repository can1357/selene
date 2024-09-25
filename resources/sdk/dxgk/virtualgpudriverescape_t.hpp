#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualgpudriverescape_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VIRTUALGPUDRIVERESCAPE]
    // => WDK 10 (NV)
    //
    struct virtualgpudriverescape_t      
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t partition_id;        //{ +0x0000    } | .PartitionId
        _m01 uint32_t input_buffer_size;   //{ +0x0004    } | .InputBufferSize
        _m02 uint32_t output_buffer_size;  //{ +0x0008    } | .OutputBufferSize
        _m03 void*    p_input_buffer;      //{ +0x0010    } | .pInputBuffer
        _m04 void*    p_output_buffer;     //{ +0x0018    } | .pOutputBuffer
                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_VIRTUALGPUDRIVERESCAPE.$", 0x0, false, 0xc17ce34b511f028f );                   
        SDK_FIXED_SIZE( virtualgpudriverescape_t, 0x20 );                   
    };                                   
};
#include "magic/virtualgpudriverescape_t.end.hpp"
SDK_VERIFY( struct dxgk::virtualgpudriverescape_t, 0x20 );
