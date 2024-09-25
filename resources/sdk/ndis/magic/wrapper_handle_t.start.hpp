#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_NDIS_WRAPPER_HANDLE.DriverObject", driver_object, 0x0, 0x40, true, 0x5291ed5905851e55)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_WRAPPER_HANDLE.ServiceRegPath", service_reg_path, 0x40, 0x80, true, 0x321b122487bcc7a0)
#else
#define _m00
#define _m01
#endif