#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_UNWIND_INFO.Version", version, 0x0, 0x3, true, 0x6d04eda6a7be3e25, 3, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_UNWIND_INFO.Flags", flags, 0x3, 0x5, true, 0xde07d638a945e178, 5, uint8_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNWIND_INFO.SizeOfProlog", size_of_prolog, 0x8, 0x8, true, 0x49d4525dc0788ae3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNWIND_INFO.CountOfCodes", count_of_codes, 0x10, 0x8, true, 0x318aabd646274cbd)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_UNWIND_INFO.FrameRegister", frame_register, 0x18, 0x4, true, 0x545bcfa059dbcf7f, 4, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_UNWIND_INFO.FrameOffset", frame_offset, 0x1c, 0x4, true, 0x6dbc0ce01fd03d57, 4, uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union win::unwind_code_t, 1>), "_UNWIND_INFO.UnwindCode", unwind_code, 0x20, 0x10, true, 0xce17dfda877c9532)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif