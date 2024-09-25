#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PLATFORM_BINARY_INFORMATION.PhysicalAddress", physical_address, 0x0, 0x40, true, 0xf7be6dc854dc9d41)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_PLATFORM_BINARY_INFORMATION.HandoffBuffer", handoff_buffer, 0x40, 0x40, true, 0xa3576f3ec05f1059)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_PLATFORM_BINARY_INFORMATION.CommandLineBuffer", command_line_buffer, 0x80, 0x40, true, 0xdbf55295fbe3e19a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PLATFORM_BINARY_INFORMATION.HandoffBufferSize", handoff_buffer_size, 0xc0, 0x20, true, 0xf54189785535a58b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PLATFORM_BINARY_INFORMATION.CommandLineBufferSize", command_line_buffer_size, 0xe0, 0x20, true, 0x7f539022fcf9829)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif