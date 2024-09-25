#if !IN_PARSER
#define _m000 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_DXVA_MBctrl_H264.bSliceID", b_slice_id, 0x0, 0x8, true, 0xbd624c2664a1d7f2, 8, uint32_t)
#define _m001 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_DXVA_MBctrl_H264.MbType5Bits", mb_type5_bits, 0x8, 0x5, true, 0x8bd8a16041942d18, 5, uint32_t)
#define _m002 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.IntraMbFlag", intra_mb_flag, 0xd, 0x1, true, 0xc37a37eb2f02637a, 1, uint32_t)
#define _m003 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.mb_field_decoding_flag", mb_field_decoding_flag, 0xe, 0x1, true, 0x5c4b84a256e31a25, 1, uint32_t)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.transform_size_8x8_flag", transform_size_8x8_flag, 0xf, 0x1, true, 0x10843710103f27f7, 1, uint32_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.HostResidDiff", host_resid_diff, 0x10, 0x1, true, 0x203d589b912ca4, 1, uint32_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.DcBlockCodedCrFlag", dc_block_coded_cr_flag, 0x11, 0x1, true, 0x2afd1e3f1da650e0, 1, uint32_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.DcBlockCodedCbFlag", dc_block_coded_cb_flag, 0x12, 0x1, true, 0x39b1430c09e06943, 1, uint32_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.DcBlockCodedYFlag", dc_block_coded_y_flag, 0x13, 0x1, true, 0xcac59fcba5d098d8, 1, uint32_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.FilterInternalEdgesFlag", filter_internal_edges_flag, 0x14, 0x1, true, 0x5d52aaf8723ef74a, 1, uint32_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.FilterLeftMbEdgeFlag", filter_left_mb_edge_flag, 0x15, 0x1, true, 0x9fb9ad3793722f68, 1, uint32_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.FilterTopMbEdgeFlag", filter_top_mb_edge_flag, 0x16, 0x1, true, 0xb0c306ef80f02f34, 1, uint32_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.ReservedBit", reserved_bit, 0x17, 0x1, true, 0xf6412a158f847efd, 1, uint32_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_DXVA_MBctrl_H264.bMvQuantity", b_mv_quantity, 0x18, 0x8, true, 0xd9904275f6d5335a, 8, uint32_t)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_MBctrl_H264.dwMBtype", dw_m_btype, 0x0, 0x20, true, 0xee175f0040bc98ac)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_H264.CurrMbAddr", curr_mb_addr, 0x20, 0x10, true, 0x828b661f63f36e8)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 3>), "_DXVA_MBctrl_H264.wPatternCode", w_pattern_code, 0x30, 0x30, true, 0xc1908e962490cca1)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_DXVA_MBctrl_H264.bQpPrime", b_qp_prime, 0x60, 0x18, true, 0x1d4e4c4988b4ca97)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_MBctrl_H264.bMBresidDataQuantity", b_m_bresid_data_quantity, 0x78, 0x8, true, 0xd3f1ef3dd385a031)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_MBctrl_H264.dwMBdataLocation", dw_m_bdata_location, 0x80, 0x20, true, 0x492d9452207d72d7)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_DXVA_MBctrl_H264.LumaIntraPredModes", luma_intra_pred_modes, 0xa0, 0x40, true, 0xa016ad0af7b0b60)
#define _m021 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_MBctrl_H264.intra_chroma_pred_mode", intra_chroma_pred_mode, 0xe0, 0x2, true, 0x70a5e5b10e811e35, 2, uint8_t)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_DXVA_MBctrl_H264.IntraPredAvailFlags", intra_pred_avail_flags, 0xe2, 0x5, true, 0x23541c606d228b10, 5, uint8_t)
#define _m023 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_MBctrl_H264.ReservedIntraBit", reserved_intra_bit, 0xe7, 0x1, true, 0x92ef7a494097c584, 1, uint8_t)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_MBctrl_H264.bMbIntraStruct", b_mb_intra_struct, 0xe0, 0x8, true, 0x7fc27250aa45fab7)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_DXVA_MBctrl_H264.ReservedIntra24Bits", reserved_intra24_bits, 0xe8, 0x18, true, 0xcec0bf362368f976)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_MBctrl_H264.bSubMbShapes", b_sub_mb_shapes, 0xa0, 0x8, true, 0xc37887b1a741a261)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_MBctrl_H264.bSubMbPredModes", b_sub_mb_pred_modes, 0xa8, 0x8, true, 0x80fc004709bee2f2)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_MBctrl_H264.wMvBuffOffset", w_mv_buff_offset, 0xb0, 0x10, true, 0xc216d0dc404a94a7)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 4>, 2>), "_DXVA_MBctrl_H264.bRefPicSelect", b_ref_pic_select, 0xc0, 0x40, true, 0xe97fd3569f7e2233)
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
#endif