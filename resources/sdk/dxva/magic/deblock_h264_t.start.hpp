#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Deblock_H264.CurrMbAddr", curr_mb_addr, 0x0, 0x10, true, 0xbbdcd08e4b2605d5)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_Deblock_H264.ReservedBit", reserved_bit, 0x10, 0x1, true, 0x32e0d53785ac95fc, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_Deblock_H264.FieldModeCurrentMbFlag", field_mode_current_mb_flag, 0x11, 0x1, true, 0x58ad17c7db4ec289, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_Deblock_H264.FieldModeLeftMbFlag", field_mode_left_mb_flag, 0x12, 0x1, true, 0xa27d129925329a7b, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_Deblock_H264.FieldModeAboveMbFlag", field_mode_above_mb_flag, 0x13, 0x1, true, 0x71e358517c3a3594, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_Deblock_H264.FilterInternal8x8EdgesFlag", filter_internal8x8_edges_flag, 0x14, 0x1, true, 0xd5633b89d9a184dd, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_Deblock_H264.FilterInternal4x4EdgesFlag", filter_internal4x4_edges_flag, 0x15, 0x1, true, 0xe7a919fec14f4a0e, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_Deblock_H264.FilterLeftMbEdgeFlag", filter_left_mb_edge_flag, 0x16, 0x1, true, 0xae136901c49aa436, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_Deblock_H264.FilterTopMbEdgeFlag", filter_top_mb_edge_flag, 0x17, 0x1, true, 0x8793c8b0ff4b381a, 1, uint8_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Deblock_H264.FirstByte", first_byte, 0x10, 0x8, true, 0x64c0ef491f8008c1)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Deblock_H264.Reserved8Bits", reserved8_bits, 0x18, 0x8, true, 0xea8fd03035f909e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Deblock_H264.bbSinternalLeftVert", bb_sinternal_left_vert, 0x20, 0x8, true, 0x140789bb6c58863f)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Deblock_H264.bbSinternalMidVert", bb_sinternal_mid_vert, 0x28, 0x8, true, 0x7a5e859c33e00adb)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Deblock_H264.bbSinternalRightVert", bb_sinternal_right_vert, 0x30, 0x8, true, 0x122d299993f28434)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Deblock_H264.bbSinternalTopHorz", bb_sinternal_top_horz, 0x38, 0x8, true, 0x40a4e5b8245d815b)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Deblock_H264.bbSinternalMidHorz", bb_sinternal_mid_horz, 0x40, 0x8, true, 0xbfd8c305cb31dcc5)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Deblock_H264.bbSinternalBotHorz", bb_sinternal_bot_horz, 0x48, 0x8, true, 0x7174e99f5921cf6f)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Deblock_H264.wbSLeft0", wb_s_left0, 0x50, 0x10, true, 0xcdc17a1a8a3da863)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Deblock_H264.wbSLeft1", wb_s_left1, 0x60, 0x10, true, 0x86f5dcf5ac1e08c7)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Deblock_H264.wbSTop0", wb_s_top0, 0x70, 0x10, true, 0x9ba9ad490a309e33)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Deblock_H264.wbSTop1", wb_s_top1, 0x80, 0x10, true, 0xe99984c41d7298da)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxva::deblock_index_ab_h264_t, 3>), "_DXVA_Deblock_H264.IndexAB", index_ab, 0x90, 0xf0, true, 0x465e7f3363ea1c02)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif