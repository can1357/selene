#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(stowed_exception_information_header_t ), "_STOWED_EXCEPTION_INFORMATION_V2.Header", header, 0x0, 0x40, true, 0xbcc17dbec619e05d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_STOWED_EXCEPTION_INFORMATION_V2.ResultCode", result_code, 0x40, 0x20, true, 0x217914972863f747)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_STOWED_EXCEPTION_INFORMATION_V2.ExceptionForm", exception_form, 0x60, 0x2, true, 0x1a2d37e25d1f01a7, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_STOWED_EXCEPTION_INFORMATION_V2.ThreadId", thread_id, 0x62, 0x1e, true, 0xccf55f53eeb4b43c, 30, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOWED_EXCEPTION_INFORMATION_V2.ExceptionAddress", exception_address, 0x80, 0x40, true, 0x9b6ca3eb48eec0c2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOWED_EXCEPTION_INFORMATION_V2.StackTraceWordSize", stack_trace_word_size, 0xc0, 0x20, true, 0xea254f1d283ba90a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOWED_EXCEPTION_INFORMATION_V2.StackTraceWords", stack_trace_words, 0xe0, 0x20, true, 0xd55580171cb776b0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOWED_EXCEPTION_INFORMATION_V2.StackTrace", stack_trace, 0x100, 0x40, true, 0xf37b5a1fb34621b1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_STOWED_EXCEPTION_INFORMATION_V2.ErrorText", error_text, 0x80, 0x40, true, 0x268317a46ec2f428)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOWED_EXCEPTION_INFORMATION_V2.NestedExceptionType", nested_exception_type, 0x140, 0x20, true, 0x86ed18b79e78d430)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOWED_EXCEPTION_INFORMATION_V2.NestedException", nested_exception, 0x180, 0x40, true, 0x9e819cc1008dba4c)
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