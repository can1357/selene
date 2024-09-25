#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/picture_parameters_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_PictureParameters]
    // => WDK 10 (NV)
    //
    struct picture_parameters_t                           
    {                                                     
        // WDK 10                                         
        //                                                
        _m000 uint16_t w_decoded_picture_index;             //{ +0x0000    } | .wDecodedPictureIndex
        _m001 uint16_t w_deblocked_picture_index;           //{ +0x0002    } | .wDeblockedPictureIndex
        _m002 uint16_t w_forward_ref_picture_index;         //{ +0x0004    } | .wForwardRefPictureIndex
        _m003 uint16_t w_backward_ref_picture_index;        //{ +0x0006    } | .wBackwardRefPictureIndex
        _m004 uint16_t w_pic_width_in_m_bminus1;            //{ +0x0008    } | .wPicWidthInMBminus1
        _m005 uint16_t w_pic_height_in_m_bminus1;           //{ +0x000a    } | .wPicHeightInMBminus1
        _m006 uint8_t  b_macroblock_width_minus1;           //{ +0x000c    } | .bMacroblockWidthMinus1
        _m007 uint8_t  b_macroblock_height_minus1;          //{ +0x000d    } | .bMacroblockHeightMinus1
        _m008 uint8_t  b_block_width_minus1;                //{ +0x000e    } | .bBlockWidthMinus1
        _m009 uint8_t  b_block_height_minus1;               //{ +0x000f    } | .bBlockHeightMinus1
        _m010 uint8_t  b_bp_pminus1;                        //{ +0x0010    } | .bBPPminus1
        _m011 uint8_t  b_pic_structure;                     //{ +0x0011    } | .bPicStructure
        _m012 uint8_t  b_second_field;                      //{ +0x0012    } | .bSecondField
        _m013 uint8_t  b_pic_intra;                         //{ +0x0013    } | .bPicIntra
        _m014 uint8_t  b_pic_backward_prediction;           //{ +0x0014    } | .bPicBackwardPrediction
        _m015 uint8_t  b_bidirectional_averaging_mode;      //{ +0x0015    } | .bBidirectionalAveragingMode
        _m016 uint8_t  b_m_vprecision_and_chroma_relation;  //{ +0x0016    } | .bMVprecisionAndChromaRelation
        _m017 uint8_t  b_chroma_format;                     //{ +0x0017    } | .bChromaFormat
        _m018 uint8_t  b_pic_scan_fixed;                    //{ +0x0018    } | .bPicScanFixed
        _m019 uint8_t  b_pic_scan_method;                   //{ +0x0019    } | .bPicScanMethod
        _m020 uint8_t  b_pic_readback_requests;             //{ +0x001a    } | .bPicReadbackRequests
        _m021 uint8_t  b_rcontrol;                          //{ +0x001b    } | .bRcontrol
        _m022 uint8_t  b_pic_spatial_resid8;                //{ +0x001c    } | .bPicSpatialResid8
        _m023 uint8_t  b_pic_overflow_blocks;               //{ +0x001d    } | .bPicOverflowBlocks
        _m024 uint8_t  b_pic_extrapolation;                 //{ +0x001e    } | .bPicExtrapolation
        _m025 uint8_t  b_pic_deblocked;                     //{ +0x001f    } | .bPicDeblocked
        _m026 uint8_t  b_pic_deblock_confined;              //{ +0x0020    } | .bPicDeblockConfined
        _m027 uint8_t  b_pic4m_vallowed;                    //{ +0x0021    } | .bPic4MVallowed
        _m028 uint8_t  b_pic_obmc;                          //{ +0x0022    } | .bPicOBMC
        _m029 uint8_t  b_pic_bin_pb;                        //{ +0x0023    } | .bPicBinPB
        _m030 uint8_t  b_mv_rps;                            //{ +0x0024    } | .bMV_RPS
        _m031 uint8_t  b_reserved_bits;                     //{ +0x0025    } | .bReservedBits
        _m032 uint16_t w_bitstream_fcodes;                  //{ +0x0026    } | .wBitstreamFcodes
        _m033 uint16_t w_bitstream_pc_eelements;            //{ +0x0028    } | .wBitstreamPCEelements
        _m034 uint8_t  b_bitstream_concealment_need;        //{ +0x002a    } | .bBitstreamConcealmentNeed
        _m035 uint8_t  b_bitstream_concealment_method;      //{ +0x002b    } | .bBitstreamConcealmentMethod
                                                          
        SDK_NONVOL_PROPERTIES( "_DXVA_PictureParameters.$", 0x0, false, 0x22f73bffa8152312 );                                   
        SDK_FIXED_SIZE( picture_parameters_t, 0x2c );                                   
    };                                                    
};
#include "magic/picture_parameters_t.end.hpp"
SDK_VERIFY( struct dxva::picture_parameters_t, 0x2c );
