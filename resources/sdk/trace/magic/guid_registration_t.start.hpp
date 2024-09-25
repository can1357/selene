#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "_TRACE_GUID_REGISTRATION.Guid", guid, 0x0, 0x40, true, 0x38099ef8c07ebe99)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_TRACE_GUID_REGISTRATION.RegHandle", reg_handle, 0x40, 0x40, true, 0x153f7c74d7e73708)
#else
#define _m00
#define _m01
#endif