#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_FUNCTION_ENTRY.StartingAddress", starting_address, 0x0, 0x20, true, 0x59de2e363f1c35ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_FUNCTION_ENTRY.EndingAddress", ending_address, 0x20, 0x20, true, 0x1e75d7c978a4fad3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_FUNCTION_ENTRY.EndOfPrologue", end_of_prologue, 0x40, 0x20, true, 0x851045087bfe91e1)
#else
#define _m00
#define _m01
#define _m02
#endif