#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT.Size", size, 0x0, 0x40, true, 0x5b4bbde585cb71aa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT.PauseTimeoutInSeconds", pause_timeout_in_seconds, 0x40, 0x20, true, 0x8eed7f48fa1dc72)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT.Flags", flags, 0x60, 0x20, true, 0x448c6fe3cd4f09a5)
#else
#define _m00
#define _m01
#define _m02
#endif