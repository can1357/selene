#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_UNICODE_STRING_BUFFER.String", string, 0x0, 0x80, true, 0x24eabf46c939851)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::buffer_t), "_RTL_UNICODE_STRING_BUFFER.ByteBuffer", byte_buffer, 0x80, 0x0, true, 0xe0fcfffed63aade5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_RTL_UNICODE_STRING_BUFFER.MinimumStaticBufferForTerminalNul", minimum_static_buffer_for_terminal_nul, 0x180, 0x10, true, 0x647da4d954a72148)
#else
#define _m00
#define _m01
#define _m02
#endif