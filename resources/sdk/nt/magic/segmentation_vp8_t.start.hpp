#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_segmentation_VP8.segmentation_enabled", segmentation_enabled, 0x0, 0x1, true, 0x8fafe81e43062fbf, 1, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_segmentation_VP8.update_mb_segmentation_map", update_mb_segmentation_map, 0x1, 0x1, true, 0x2b33b630a764e98a, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_segmentation_VP8.update_mb_segmentation_data", update_mb_segmentation_data, 0x2, 0x1, true, 0xebb964fd6315333d, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_segmentation_VP8.mb_segement_abs_delta", mb_segement_abs_delta, 0x3, 0x1, true, 0x2c6743a302a88cd5, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_segmentation_VP8.ReservedSegmentFlags4Bits", reserved_segment_flags4_bits, 0x4, 0x4, true, 0xf38765c8721f6104, 4, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_segmentation_VP8.wSegmentFlags", w_segment_flags, 0x0, 0x8, true, 0x166756c0d614652a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<char, 4>, 2>), "_segmentation_VP8.segment_feature_data", segment_feature_data, 0x8, 0x40, true, 0x1bc479ff14c3daaf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_segmentation_VP8.mb_segment_tree_probs", mb_segment_tree_probs, 0x48, 0x18, true, 0xf5624541fb022c62)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif