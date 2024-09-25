#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$IsRecognized@MBR_ENTRY$ntoskrnl.exe", 0x0, 0x0, false, 0x96985c007f668607)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ComputeChs@MBR_ENTRY$ntoskrnl.exe", 0x5c1290, 0x0, true, 0x50b8976445043236)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Validate@MBR_ENTRY$ntoskrnl.exe", 0x5c1850, 0x0, true, 0xf21112b9508251d0)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif