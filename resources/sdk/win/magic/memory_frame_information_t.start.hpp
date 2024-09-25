#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MEMORY_FRAME_INFORMATION.UseDescription", use_description, 0x0, 0x4, true, 0x6900be1a121be836, 4, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MEMORY_FRAME_INFORMATION.ListDescription", list_description, 0x4, 0x3, true, 0x7833b0d1fa8b5a3f, 3, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_FRAME_INFORMATION.Pinned", pinned, 0x8, 0x1, true, 0x7ec00223cdd16e97, 1, uint64_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint48_t), "_MEMORY_FRAME_INFORMATION.DontUse", dont_use, 0x9, 0x30, true, 0x53031a48942cd43a, 48, uint64_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MEMORY_FRAME_INFORMATION.Priority", priority, 0x39, 0x3, true, 0x1c2c8241ef860bc3, 3, uint64_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_FRAME_INFORMATION.Cold", cold, 0x7, 0x1, true, 0x2d3ca606ddd7061d, 1, uint64_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_FRAME_INFORMATION.NonTradeable", non_tradeable, 0x0, 0x0, false, 0xe7c7ffe3a03bfd9b, 1, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif