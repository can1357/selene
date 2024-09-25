#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/slice_info_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_SliceInfo]
    // => WDK 10 (NV)
    //
    struct slice_info_t                       
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint16_t w_horizontal_position;    //{ +0x0000    } | .wHorizontalPosition
        _m01 uint16_t w_vertical_position;      //{ +0x0002    } | .wVerticalPosition
        _m02 uint32_t dw_slice_bits_in_buffer;  //{ +0x0004    } | .dwSliceBitsInBuffer
        _m03 uint32_t dw_slice_data_location;   //{ +0x0008    } | .dwSliceDataLocation
        _m04 uint8_t  b_start_code_bit_offset;  //{ +0x000c    } | .bStartCodeBitOffset
        _m05 uint8_t  b_reserved_bits;          //{ +0x000d    } | .bReservedBits
        _m06 uint16_t w_m_bbit_offset;          //{ +0x000e    } | .wMBbitOffset
        _m07 uint16_t w_number_m_bs_in_slice;   //{ +0x0010    } | .wNumberMBsInSlice
        _m08 uint16_t w_quantizer_scale_code;   //{ +0x0012    } | .wQuantizerScaleCode
        _m09 uint16_t w_bad_slice_chopping;     //{ +0x0014    } | .wBadSliceChopping
                                              
        SDK_NONVOL_PROPERTIES( "_DXVA_SliceInfo.$", 0x0, false, 0x259ff4868818aa45 );                        
        SDK_FIXED_SIZE( slice_info_t, 0x16 );                        
    };                                        
};
#include "magic/slice_info_t.end.hpp"
SDK_VERIFY( struct dxva::slice_info_t, 0x16 );
