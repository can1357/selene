#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_trace_header_t), "_ETW_CRITSEC_EVENT_INIT.Header", header, 0x0, 0x0, true, 0x7c6176a87d434bb9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_CRITSEC_EVENT_INIT.SpinCount", spin_count, 0x100, 0x40, true, 0xf571d6ccc5b78bb9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_CRITSEC_EVENT_INIT.Address", address, 0x140, 0x40, true, 0x63e216eda525b36f)
#else
#define _m00
#define _m01
#define _m02
#endif