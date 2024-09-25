#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_MANAGE_WRITES_TO_EXECUTABLE_MEMORY.Version", version, 0x0, 0x8, true, 0x1c3a6961caf18493, 8, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MANAGE_WRITES_TO_EXECUTABLE_MEMORY.ProcessEnableWriteExceptions", process_enable_write_exceptions, 0x8, 0x1, true, 0xbf99e4fbc33f01e5, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MANAGE_WRITES_TO_EXECUTABLE_MEMORY.ThreadAllowWrites", thread_allow_writes, 0x9, 0x1, true, 0x121a5d4e30b05fa, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MANAGE_WRITES_TO_EXECUTABLE_MEMORY.KernelWriteToExecutableSignal", kernel_write_to_executable_signal, 0x40, 0x40, true, 0xdfcb93aeb7d41459)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif