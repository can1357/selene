#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(stowed_exception_information_header_t ), "_STOWED_EXCEPTION_INFORMATION_V1.Header", header, 0x0, 0x40, true, 0xa179825e120a0e34)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "_STOWED_EXCEPTION_INFORMATION_V1.ResultCode", result_code, 0x40, 0x20, true, 0xf05043db16ff5134)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_STOWED_EXCEPTION_INFORMATION_V1.ExceptionForm", exception_form, 0x60, 0x2, true, 0x5e521798eaf50ad0, 2, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint30_t), "_STOWED_EXCEPTION_INFORMATION_V1.ThreadId", thread_id, 0x62, 0x1e, true, 0x763469573c1115de, 30, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOWED_EXCEPTION_INFORMATION_V1.ExceptionAddress", exception_address, 0x80, 0x40, true, 0x946271943e42dcea)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOWED_EXCEPTION_INFORMATION_V1.StackTraceWordSize", stack_trace_word_size, 0xc0, 0x20, true, 0x141c0348a0be9c82)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOWED_EXCEPTION_INFORMATION_V1.StackTraceWords", stack_trace_words, 0xe0, 0x20, true, 0x351627192a90a858)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOWED_EXCEPTION_INFORMATION_V1.StackTrace", stack_trace, 0x100, 0x40, true, 0xe99b9125a983617a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_STOWED_EXCEPTION_INFORMATION_V1.ErrorText", error_text, 0x80, 0x40, true, 0x1c5a25ee68ecf720)
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
#endif