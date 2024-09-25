#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint10_t), "_SEGMENT_FLAGS.TotalNumberOfPtes4132", total_number_of_ptes4132, 0x0, 0xa, true, 0x5d0abaa7e2af178, 10, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEGMENT_FLAGS.LargePages", large_pages, 0xc, 0x1, true, 0x6311f286083ae09b, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEGMENT_FLAGS.DebugSymbolsLoaded", debug_symbols_loaded, 0xd, 0x1, true, 0x2bbbef307fd72a2f, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEGMENT_FLAGS.WriteCombined", write_combined, 0xe, 0x1, true, 0x815d484727888103, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEGMENT_FLAGS.NoCache", no_cache, 0xf, 0x1, true, 0xe2e4a113985e2222, 1, uint16_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEGMENT_FLAGS.Short0", short0, 0x0, 0x10, true, 0x6c6c88eafe65e1a9)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_SEGMENT_FLAGS.DefaultProtectionMask", default_protection_mask, 0x11, 0x5, true, 0x48478e661e277ea5, 5, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEGMENT_FLAGS.Binary32", binary32, 0x16, 0x1, true, 0xd2975bbd751dd5d0, 1, uint8_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEGMENT_FLAGS.ContainsDebug", contains_debug, 0x17, 0x1, true, 0xf9d332b46ec7aa31, 1, uint8_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEGMENT_FLAGS.UChar1", u_char1, 0x10, 0x8, true, 0x2d7252d09a0889d9)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEGMENT_FLAGS.ForceCollision", force_collision, 0x18, 0x1, true, 0xa93a8a7139136694, 1, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_SEGMENT_FLAGS.ImageSigningType", image_signing_type, 0x19, 0x3, true, 0x32ed2c922a0d00bf, 3, uint8_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SEGMENT_FLAGS.ImageSigningLevel", image_signing_level, 0x1c, 0x4, true, 0xc913c2fe9bd31e5c, 4, uint8_t)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEGMENT_FLAGS.UChar2", u_char2, 0x18, 0x8, true, 0xbab87ffd4ad3bf6e)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEGMENT_FLAGS.SessionDriverProtos", session_driver_protos, 0xb, 0x1, true, 0xcaf1e3877b01186b, 1, uint16_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SEGMENT_FLAGS.ImageCetShadowStacksReady", image_cet_shadow_stacks_ready, 0x0, 0x0, false, 0x4cee880b7d40bc27, 1, uint8_t)
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
#endif