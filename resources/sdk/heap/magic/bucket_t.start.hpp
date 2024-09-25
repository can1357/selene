#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_BUCKET.BlockUnits", block_units, 0x0, 0x10, true, 0x59219111691c9b9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_BUCKET.SizeIndex", size_index, 0x10, 0x8, true, 0xf2b60b334a3d6b85)
#define _m02 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_HEAP_BUCKET.UseAffinity", use_affinity, 0x18, 0x1, true, 0xea5d172a019e9910, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint2_t), "_HEAP_BUCKET.DebugFlags", debug_flags, 0x19, 0x2, true, 0xd395407ab668e956, 2, uint8_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_HEAP_BUCKET.Flags", flags, 0x18, 0x8, true, 0x52838b38fa1e843b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif