#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "EHExceptionRecord.ExceptionCode", exception_code, 0x0, 0x20, true, 0xa9d82045afab4c02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "EHExceptionRecord.ExceptionFlags", exception_flags, 0x20, 0x20, true, 0xef12ef9f54532cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::exception_record_t*), "EHExceptionRecord.ExceptionRecord", exception_record, 0x40, 0x40, true, 0x2cea030933646f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "EHExceptionRecord.ExceptionAddress", exception_address, 0x80, 0x40, true, 0xbbe342400f560025)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "EHExceptionRecord.NumberParameters", number_parameters, 0xc0, 0x20, true, 0x34eb68f4071d1d29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif