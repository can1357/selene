#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PSP_SYSCALL_PROVIDER_DISPATCH_CONTEXT.Level", level, 0x0, 0x0, false, 0x8ee8b6ac69baf431)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PSP_SYSCALL_PROVIDER_DISPATCH_CONTEXT.Slot", slot, 0x0, 0x0, false, 0xb9ef43cc418d831d)
#else
#define _m00
#define _m01
#endif