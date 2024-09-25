#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::exception_record_t), "_LAST_EXCEPTION_LOG.ExceptionRecord", exception_record, 0x0, 0xc0, true, 0x9f651390628f860a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context), "_LAST_EXCEPTION_LOG.ContextRecord", context_record, 0x500, 0x80, true, 0xc054efe0d57c4793)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LAST_EXCEPTION_LOG.ControlPc", control_pc, 0x2b80, 0x20, true, 0x4ab69a4e4eee9997)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::exception_disposition_t), "_LAST_EXCEPTION_LOG.Disposition", disposition, 0x2ba0, 0x20, true, 0xe1dfd79035fcf8f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_LAST_EXCEPTION_LOG.HandlerData", handler_data, 0x2bc0, 0xa0, true, 0x6c99ff6ee2426d0c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif