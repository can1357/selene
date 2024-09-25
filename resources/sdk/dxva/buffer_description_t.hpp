#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/buffer_description_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_BufferDescription]
    // => WDK 10 (NV)
    //
    struct buffer_description_t             
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint32_t dw_type_index;          //{ +0x0000    } | .dwTypeIndex
        _m01 uint32_t dw_buffer_index;        //{ +0x0004    } | .dwBufferIndex
        _m02 uint32_t dw_data_offset;         //{ +0x0008    } | .dwDataOffset
        _m03 uint32_t dw_data_size;           //{ +0x000c    } | .dwDataSize
        _m04 uint32_t dw_first_m_baddress;    //{ +0x0010    } | .dwFirstMBaddress
        _m05 uint32_t dw_num_m_bs_in_buffer;  //{ +0x0014    } | .dwNumMBsInBuffer
        _m06 uint32_t dw_width;               //{ +0x0018    } | .dwWidth
        _m07 uint32_t dw_height;              //{ +0x001c    } | .dwHeight
        _m08 uint32_t dw_stride;              //{ +0x0020    } | .dwStride
        _m09 uint32_t dw_reserved_bits;       //{ +0x0024    } | .dwReservedBits
                                            
        SDK_NONVOL_PROPERTIES( "_DXVA_BufferDescription.$", 0x0, false, 0x7df0f379aa7c5b89 );                      
        SDK_FIXED_SIZE( buffer_description_t, 0x28 );                      
    };                                      
};
#include "magic/buffer_description_t.end.hpp"
SDK_VERIFY( struct dxva::buffer_description_t, 0x28 );
