#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::requester_type_t), "_DIAGNOSTIC_CONTEXT.CallerType", caller_type, 0x0, 0x20, true, 0xd7cf368584c37430)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_DIAGNOSTIC_CONTEXT.Process", process, 0x40, 0x40, true, 0xc343637bbfb1a95b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DIAGNOSTIC_CONTEXT.ServiceTag", service_tag, 0x80, 0x20, true, 0xf1858dc81d74873b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DIAGNOSTIC_CONTEXT.DeviceObject", device_object, 0x40, 0x40, true, 0x514af5c9ccd73701)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DIAGNOSTIC_CONTEXT.ReasonSize", reason_size, 0xc0, 0x40, true, 0xaebb2ae4e1fcaa61)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif