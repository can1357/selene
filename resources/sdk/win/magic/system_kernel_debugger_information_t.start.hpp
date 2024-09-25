#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_KERNEL_DEBUGGER_INFORMATION.KernelDebuggerEnabled", kernel_debugger_enabled, 0x0, 0x8, true, 0xe44ffa396e3e955a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_KERNEL_DEBUGGER_INFORMATION.KernelDebuggerNotPresent", kernel_debugger_not_present, 0x8, 0x8, true, 0xb2f039c74d8542d9)
#else
#define _m00
#define _m01
#endif