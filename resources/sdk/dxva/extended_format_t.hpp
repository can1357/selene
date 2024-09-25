#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extended_format_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_ExtendedFormat]
    // => WDK 10 (NV)
    //
    struct extended_format_t                  
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint8_t sample_format;             //{ +0x0000@0  } | .SampleFormat
        _m01 uint4_t video_chroma_subsampling;  //{ +0x0000@8  } | .VideoChromaSubsampling
        _m02 int3_t  nominal_range;             //{ +0x0000@12 } | .NominalRange
        _m03 int3_t  video_transfer_matrix;     //{ +0x0000@15 } | .VideoTransferMatrix
        _m04 int4_t  video_lighting;            //{ +0x0000@18 } | .VideoLighting
        _m05 int5_t  video_primaries;           //{ +0x0000@22 } | .VideoPrimaries
        _m06 int5_t  video_transfer_function;   //{ +0x0000@27 } | .VideoTransferFunction
                                              
        SDK_NONVOL_PROPERTIES( "_DXVA_ExtendedFormat.$", 0x0, false, 0xf5fc9a5d63ec56b );                         
        SDK_FIXED_SIZE( extended_format_t, 0x4 );                         
    };                                        
};
#include "magic/extended_format_t.end.hpp"
SDK_VERIFY( struct dxva::extended_format_t, 0x4 );
