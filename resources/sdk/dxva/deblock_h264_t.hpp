#pragma once
#include <sdkgen/support_library.hpp>
#include "deblock_index_ab_h264_t.hpp"

#include "magic/deblock_h264_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Deblock_H264]
    // => WDK 10 (NV)
    //
    struct deblock_h264_t                              
    {                                                  
        using index_ab_t = sdk::array<struct dxva::deblock_index_ab_h264_t, 3>;                              
                                                       
        // WDK 10                                      
        //                                             
        _m00 uint16_t    curr_mb_addr;                   //{ +0x0000    } | .CurrMbAddr
        _m01 uint1_t     reserved_bit;                   //{ +0x0002@0  } | .ReservedBit
        _m02 uint1_t     field_mode_current_mb_flag;     //{ +0x0002@1  } | .FieldModeCurrentMbFlag
        _m03 uint1_t     field_mode_left_mb_flag;        //{ +0x0002@2  } | .FieldModeLeftMbFlag
        _m04 uint1_t     field_mode_above_mb_flag;       //{ +0x0002@3  } | .FieldModeAboveMbFlag
        _m05 uint1_t     filter_internal8x8_edges_flag;  //{ +0x0002@4  } | .FilterInternal8x8EdgesFlag
        _m06 uint1_t     filter_internal4x4_edges_flag;  //{ +0x0002@5  } | .FilterInternal4x4EdgesFlag
        _m07 uint1_t     filter_left_mb_edge_flag;       //{ +0x0002@6  } | .FilterLeftMbEdgeFlag
        _m08 uint1_t     filter_top_mb_edge_flag;        //{ +0x0002@7  } | .FilterTopMbEdgeFlag
        _m09 uint8_t     first_byte;                     //{ +0x0002    } | .FirstByte
        _m10 uint8_t     reserved8_bits;                 //{ +0x0003    } | .Reserved8Bits
        _m11 uint8_t     bb_sinternal_left_vert;         //{ +0x0004    } | .bbSinternalLeftVert
        _m12 uint8_t     bb_sinternal_mid_vert;          //{ +0x0005    } | .bbSinternalMidVert
        _m13 uint8_t     bb_sinternal_right_vert;        //{ +0x0006    } | .bbSinternalRightVert
        _m14 uint8_t     bb_sinternal_top_horz;          //{ +0x0007    } | .bbSinternalTopHorz
        _m15 uint8_t     bb_sinternal_mid_horz;          //{ +0x0008    } | .bbSinternalMidHorz
        _m16 uint8_t     bb_sinternal_bot_horz;          //{ +0x0009    } | .bbSinternalBotHorz
        _m17 uint16_t    wb_s_left0;                     //{ +0x000a    } | .wbSLeft0
        _m18 uint16_t    wb_s_left1;                     //{ +0x000c    } | .wbSLeft1
        _m19 uint16_t    wb_s_top0;                      //{ +0x000e    } | .wbSTop0
        _m20 uint16_t    wb_s_top1;                      //{ +0x0010    } | .wbSTop1
        _m21 index_ab_t  index_ab;                       //{ +0x0012    } | .IndexAB
                                                       
        SDK_NONVOL_PROPERTIES( "_DXVA_Deblock_H264.$", 0x0, false, 0x8485f9035e692003 );                              
        SDK_FIXED_SIZE( deblock_h264_t, 0x30 );                              
    };                                                 
};
#include "magic/deblock_h264_t.end.hpp"
SDK_VERIFY( struct dxva::deblock_h264_t, 0x30 );
