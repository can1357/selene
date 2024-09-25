#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_GENERIC_OBJECT.Header", header, 0x0, 0x20, true, 0x376e3682409fb9b2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_GENERIC_OBJECT.Caller", caller, 0x40, 0x40, true, 0xd498e57d5adb097d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_GENERIC_OBJECT.CallersCaller", callers_caller, 0x80, 0x40, true, 0xe0b8a333a1adf92)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_NDIS_GENERIC_OBJECT.DriverObject", driver_object, 0xc0, 0x40, true, 0x42d51023bf7da76)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif