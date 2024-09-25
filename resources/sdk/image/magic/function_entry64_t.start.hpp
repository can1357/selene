#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_FUNCTION_ENTRY64.StartingAddress", starting_address, 0x0, 0x40, true, 0x29b3debdadc57064)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_FUNCTION_ENTRY64.EndingAddress", ending_address, 0x40, 0x40, true, 0xbf12766d1fea2dad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_FUNCTION_ENTRY64.EndOfPrologue", end_of_prologue, 0x80, 0x40, true, 0xa1685e5f63fb0617)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_IMAGE_FUNCTION_ENTRY64.UnwindInfoAddress", unwind_info_address, 0x80, 0x40, true, 0xfa02fcc8c6ca5b29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif