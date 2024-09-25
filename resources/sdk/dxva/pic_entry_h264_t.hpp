#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pic_entry_h264_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_PicEntry_H264]
    // => WDK 10 (NV)
    //
    struct pic_entry_h264_t          
    {                                
        // WDK 10                    
        //                           
        _m00 uint7_t index7_bits;      //{ +0x0000@0  } | .Index7Bits
        _m01 uint1_t associated_flag;  //{ +0x0000@7  } | .AssociatedFlag
        _m02 uint8_t b_pic_entry;      //{ +0x0000    } | .bPicEntry
                                     
        SDK_NONVOL_PROPERTIES( "_DXVA_PicEntry_H264.$", 0x0, false, 0x1013962558ba0565 );                
        SDK_FIXED_SIZE( pic_entry_h264_t, 0x1 );                
    };                               
};
#include "magic/pic_entry_h264_t.end.hpp"
SDK_VERIFY( struct dxva::pic_entry_h264_t, 0x1 );
