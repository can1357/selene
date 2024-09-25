#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxObjectDebugInfo.ObjectType", object_type, 0x0, 0x10, true, 0xefbcd8aa7ece0012)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxObjectDebugInfo.DebugFlags", debug_flags, 0x10, 0x10, true, 0xcab48ef55776cfa2)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObjectDebugInfo.Bits.TrackReferences", track_references, 0x0, 0x1, true, 0xce81775cb3a0375e, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxObjectDebugInfo.Bits.TrackObjectCountForLeak", track_object_count_for_leak, 0x1, 0x1, true, 0xcab5b836a96a4271, 1, uint16_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bits_t), "FxObjectDebugInfo.Bits", bits, 0x10, 0x10, true, 0x41591d934d399a3d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif