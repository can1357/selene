#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PmAcpiDispatchTable$ntoskrnl.exe", 0xc50870, 0x0, true, 0xee6be0d8047a4d63)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PmRegisters$ntoskrnl.exe", 0xc48e80, 0x0, true, 0x546e800ed8b60853)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PMWiFiRekeyOffloadStr$ndis.sys", 0xe3228, 0x0, true, 0xed8043076b5aa835)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif