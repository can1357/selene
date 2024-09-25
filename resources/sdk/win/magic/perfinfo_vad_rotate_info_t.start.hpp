#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_VAD_ROTATE_INFO.BaseAddress", base_address, 0x0, 0x40, true, 0x51004336579202d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_VAD_ROTATE_INFO.SizeInBytes", size_in_bytes, 0x40, 0x40, true, 0xa38a217413f3c109)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PERFINFO_VAD_ROTATE_INFO.Direction", direction, 0x80, 0x4, true, 0x710626c9edad78d2, 4, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_VAD_ROTATE_INFO.Flags", flags, 0x80, 0x20, true, 0x88ef179e263b6f10)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif