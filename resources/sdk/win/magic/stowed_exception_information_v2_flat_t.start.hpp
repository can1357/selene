#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(stowed_exception_information_header_t ), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.Header", header, 0x0, 0x40, true, 0x42dbea7bb96ddb3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.ResultCode", result_code, 0x40, 0x20, true, 0xd0f624f304dbd6c5)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.ExceptionForm", exception_form, 0x60, 0x2, true, 0x135f4d5461067fe2, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.ThreadId", thread_id, 0x62, 0x1e, true, 0x894803ab75ecaa09, 30, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.ExceptionAddress", exception_address, 0x80, 0x40, true, 0x5b71348aae7279ef)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.StackTraceWordSize", stack_trace_word_size, 0xc0, 0x20, true, 0x532dcc93c2a94620)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.StackTraceWords", stack_trace_words, 0xe0, 0x20, true, 0xd159c0a87ad6c1ab)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 512>), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.StackTrace", stack_trace, 0x100, 0x0, true, 0xa26998c4acedaa68)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.ErrorText", error_text, 0x80, 0x40, true, 0x4abbdfc8bafe4f6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.NestedExceptionType", nested_exception_type, 0x8100, 0x20, true, 0xe85ae678cd5616c7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOWED_EXCEPTION_INFORMATION_V2_FLAT.NestedException", nested_exception, 0x8140, 0x40, true, 0x515273a09eea01a5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif