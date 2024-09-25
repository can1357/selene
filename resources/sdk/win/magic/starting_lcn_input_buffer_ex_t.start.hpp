#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "STARTING_LCN_INPUT_BUFFER_EX.StartingLcn", starting_lcn, 0x0, 0x40, true, 0x71487e3cf54034e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "STARTING_LCN_INPUT_BUFFER_EX.Flags", flags, 0x40, 0x20, true, 0xcf12487ce1ac69fb)
#else
#define _m00
#define _m01
#endif