#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_VTL_CHANGE.OperationCode", operation_code, 0x0, 0x10, true, 0x7d3f1034bffc23c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_VTL_CHANGE.ServiceCode", service_code, 0x10, 0x10, true, 0x6b404a873f12311)
#else
#define _m00
#define _m01
#endif