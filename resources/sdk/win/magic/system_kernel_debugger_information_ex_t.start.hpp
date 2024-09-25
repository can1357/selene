#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_KERNEL_DEBUGGER_INFORMATION_EX.DebuggerAllowed", debugger_allowed, 0x0, 0x8, true, 0x9fc87e1c93f863a7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_KERNEL_DEBUGGER_INFORMATION_EX.DebuggerEnabled", debugger_enabled, 0x8, 0x8, true, 0x390f2eed3b0c3e1e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_KERNEL_DEBUGGER_INFORMATION_EX.DebuggerPresent", debugger_present, 0x10, 0x8, true, 0x5149b27cd49b9fcd)
#else
#define _m00
#define _m01
#define _m02
#endif