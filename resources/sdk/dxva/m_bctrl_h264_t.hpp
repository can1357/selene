#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/m_bctrl_h264_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_MBctrl_H264]
    // => WDK 10 (NV)
    //
    struct m_bctrl_h264_t                                                      
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m000 uint8_t                               b_slice_id;                  //{ +0x0000@0  } | .bSliceID
        _m001 uint5_t                               mb_type5_bits;               //{ +0x0000@8  } | .MbType5Bits
        _m002 uint1_t                               intra_mb_flag;               //{ +0x0000@13 } | .IntraMbFlag
        _m003 uint1_t                               mb_field_decoding_flag;      //{ +0x0000@14 } | .mb_field_decoding_flag
        _m004 uint1_t                               transform_size_8x8_flag;     //{ +0x0000@15 } | .transform_size_8x8_flag
        _m005 uint1_t                               host_resid_diff;             //{ +0x0000@16 } | .HostResidDiff
        _m006 uint1_t                               dc_block_coded_cr_flag;      //{ +0x0000@17 } | .DcBlockCodedCrFlag
        _m007 uint1_t                               dc_block_coded_cb_flag;      //{ +0x0000@18 } | .DcBlockCodedCbFlag
        _m008 uint1_t                               dc_block_coded_y_flag;       //{ +0x0000@19 } | .DcBlockCodedYFlag
        _m009 uint1_t                               filter_internal_edges_flag;  //{ +0x0000@20 } | .FilterInternalEdgesFlag
        _m010 uint1_t                               filter_left_mb_edge_flag;    //{ +0x0000@21 } | .FilterLeftMbEdgeFlag
        _m011 uint1_t                               filter_top_mb_edge_flag;     //{ +0x0000@22 } | .FilterTopMbEdgeFlag
        _m012 uint1_t                               reserved_bit;                //{ +0x0000@23 } | .ReservedBit
        _m013 uint8_t                               b_mv_quantity;               //{ +0x0000@24 } | .bMvQuantity
        _m014 uint32_t                              dw_m_btype;                  //{ +0x0000    } | .dwMBtype
        _m015 uint16_t                              curr_mb_addr;                //{ +0x0004    } | .CurrMbAddr
        _m016 sdk::array<uint16_t, 3>               w_pattern_code;              //{ +0x0006    } | .wPatternCode
        _m017 sdk::array<uint8_t, 3>                b_qp_prime;                  //{ +0x000c    } | .bQpPrime
        _m018 uint8_t                               b_m_bresid_data_quantity;    //{ +0x000f    } | .bMBresidDataQuantity
        _m019 uint32_t                              dw_m_bdata_location;         //{ +0x0010    } | .dwMBdataLocation
        _m020 sdk::array<uint16_t, 4>               luma_intra_pred_modes;       //{ +0x0014    } | .LumaIntraPredModes
        _m021 uint2_t                               intra_chroma_pred_mode;      //{ +0x001c@0  } | .intra_chroma_pred_mode
        _m022 uint5_t                               intra_pred_avail_flags;      //{ +0x001c@2  } | .IntraPredAvailFlags
        _m023 uint1_t                               reserved_intra_bit;          //{ +0x001c@7  } | .ReservedIntraBit
        _m024 uint8_t                               b_mb_intra_struct;           //{ +0x001c    } | .bMbIntraStruct
        _m025 sdk::array<uint8_t, 3>                reserved_intra24_bits;       //{ +0x001d    } | .ReservedIntra24Bits
        _m026 uint8_t                               b_sub_mb_shapes;             //{ +0x0014    } | .bSubMbShapes
        _m027 uint8_t                               b_sub_mb_pred_modes;         //{ +0x0015    } | .bSubMbPredModes
        _m028 uint16_t                              w_mv_buff_offset;            //{ +0x0016    } | .wMvBuffOffset
        _m029 sdk::array<sdk::array<uint8_t, 4>, 2> b_ref_pic_select;            //{ +0x0018    } | .bRefPicSelect
                                                                               
        SDK_NONVOL_PROPERTIES( "_DXVA_MBctrl_H264.$", 0x0, false, 0x23b07971fe653441 );                           
        SDK_FIXED_SIZE( m_bctrl_h264_t, 0x20 );                                
    };                                                                         
};
#include "magic/m_bctrl_h264_t.end.hpp"
SDK_VERIFY( struct dxva::m_bctrl_h264_t, 0x20 );
