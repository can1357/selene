#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PictureParameters.wDecodedPictureIndex", w_decoded_picture_index, 0x0, 0x10, true, 0xcc240f8ebea24c45)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PictureParameters.wDeblockedPictureIndex", w_deblocked_picture_index, 0x10, 0x10, true, 0xe4d95ca12bd202c7)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PictureParameters.wForwardRefPictureIndex", w_forward_ref_picture_index, 0x20, 0x10, true, 0x842a7d4ed9b772a6)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PictureParameters.wBackwardRefPictureIndex", w_backward_ref_picture_index, 0x30, 0x10, true, 0xe97da1f272774d38)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PictureParameters.wPicWidthInMBminus1", w_pic_width_in_m_bminus1, 0x40, 0x10, true, 0x14a5c2f2e41a5c70)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PictureParameters.wPicHeightInMBminus1", w_pic_height_in_m_bminus1, 0x50, 0x10, true, 0xa252ecd69c8ad2f4)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bMacroblockWidthMinus1", b_macroblock_width_minus1, 0x60, 0x8, true, 0xbce63ff908c2e8fb)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bMacroblockHeightMinus1", b_macroblock_height_minus1, 0x68, 0x8, true, 0x4789dc53e56bc5b5)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bBlockWidthMinus1", b_block_width_minus1, 0x70, 0x8, true, 0xb6c77380670f5bd0)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bBlockHeightMinus1", b_block_height_minus1, 0x78, 0x8, true, 0xe06988678684686)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bBPPminus1", b_bp_pminus1, 0x80, 0x8, true, 0xb26495e5b853d042)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicStructure", b_pic_structure, 0x88, 0x8, true, 0x9b4d0c6a9a581f86)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bSecondField", b_second_field, 0x90, 0x8, true, 0xcb5e963c23694216)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicIntra", b_pic_intra, 0x98, 0x8, true, 0x450fc1d676136143)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicBackwardPrediction", b_pic_backward_prediction, 0xa0, 0x8, true, 0x6b74d55d1cc71e98)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bBidirectionalAveragingMode", b_bidirectional_averaging_mode, 0xa8, 0x8, true, 0x66f988a881164157)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bMVprecisionAndChromaRelation", b_m_vprecision_and_chroma_relation, 0xb0, 0x8, true, 0x4dd1fb144bd6dc79)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bChromaFormat", b_chroma_format, 0xb8, 0x8, true, 0xf1b6c488835903c9)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicScanFixed", b_pic_scan_fixed, 0xc0, 0x8, true, 0xde6cbed37880595)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicScanMethod", b_pic_scan_method, 0xc8, 0x8, true, 0x636cad5c7426c29)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicReadbackRequests", b_pic_readback_requests, 0xd0, 0x8, true, 0x2d44611f55563c18)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bRcontrol", b_rcontrol, 0xd8, 0x8, true, 0x9f09fa1200c05364)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicSpatialResid8", b_pic_spatial_resid8, 0xe0, 0x8, true, 0xfdbebc960357c4bb)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicOverflowBlocks", b_pic_overflow_blocks, 0xe8, 0x8, true, 0x9e8d703f9e423812)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicExtrapolation", b_pic_extrapolation, 0xf0, 0x8, true, 0x58291af5fdb172aa)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicDeblocked", b_pic_deblocked, 0xf8, 0x8, true, 0x2d2faffb952f96d7)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicDeblockConfined", b_pic_deblock_confined, 0x100, 0x8, true, 0xde85d85d3f7742c0)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPic4MVallowed", b_pic4m_vallowed, 0x108, 0x8, true, 0xa68a4e71d8f0c59b)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicOBMC", b_pic_obmc, 0x110, 0x8, true, 0x2ae49fc98cc85428)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bPicBinPB", b_pic_bin_pb, 0x118, 0x8, true, 0xe348f0e9d4f09dfb)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bMV_RPS", b_mv_rps, 0x120, 0x8, true, 0x34df0f464a6fe357)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bReservedBits", b_reserved_bits, 0x128, 0x8, true, 0x582de741a153bad6)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PictureParameters.wBitstreamFcodes", w_bitstream_fcodes, 0x130, 0x10, true, 0x6e37d0b8acefabe8)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PictureParameters.wBitstreamPCEelements", w_bitstream_pc_eelements, 0x140, 0x10, true, 0x6992fcfaaf9ca2c5)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bBitstreamConcealmentNeed", b_bitstream_concealment_need, 0x150, 0x8, true, 0x8a1ae66772ac3184)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PictureParameters.bBitstreamConcealmentMethod", b_bitstream_concealment_method, 0x158, 0x8, true, 0x9e421321b7089078)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#endif