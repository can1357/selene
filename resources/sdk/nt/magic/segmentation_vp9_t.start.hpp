#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_segmentation_VP9.enabled", enabled, 0x0, 0x1, true, 0x985606c807275ad0, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_segmentation_VP9.update_map", update_map, 0x1, 0x1, true, 0xd4063e05d7016102, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_segmentation_VP9.temporal_update", temporal_update, 0x2, 0x1, true, 0xacc9d8b80c478ef1, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_segmentation_VP9.abs_delta", abs_delta, 0x3, 0x1, true, 0x4ed9faa0ec1d6671, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_segmentation_VP9.ReservedSegmentFlags4Bits", reserved_segment_flags4_bits, 0x4, 0x4, true, 0xc566b7b43ea41aa, 4, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_segmentation_VP9.wSegmentInfoFlags", w_segment_info_flags, 0x0, 0x8, true, 0xc0d8304a7a478f4b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 7>), "_segmentation_VP9.tree_probs", tree_probs, 0x8, 0x38, true, 0xd2ae4de32087cb83)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_segmentation_VP9.pred_probs", pred_probs, 0x40, 0x18, true, 0x252187d772ff7a2d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<int16_t, 4>, 8>), "_segmentation_VP9.feature_data", feature_data, 0x58, 0x0, true, 0xb98a8bc9b1af8148)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_segmentation_VP9.feature_mask", feature_mask, 0x258, 0x40, true, 0x422371f756498714)
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
#endif