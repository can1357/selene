#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::exception_record_t), "_EXCEPTION_LOG.ExceptionRecord", exception_record, 0x0, 0xc0, true, 0x1b38f70b624d2f3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context), "_EXCEPTION_LOG.ContextRecord", context_record, 0x500, 0x80, true, 0x1b08ef70595e491d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::exception_log_type_t), "_EXCEPTION_LOG.Type", type, 0x2b80, 0x20, true, 0xb62bb74046d02255)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXCEPTION_LOG.Disposition", disposition, 0x2ba0, 0x20, true, 0x50932951a9a41d63)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXCEPTION_LOG.Thread", thread, 0x2bc0, 0x40, true, 0xc6c484836b7b513b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EXCEPTION_LOG.ControlPc", control_pc, 0x2c00, 0x40, true, 0xd9f8be59c04152bf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EXCEPTION_LOG.Handler", handler, 0x2c40, 0x40, true, 0xb3f84dd93700a9e3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif