#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum sep::cached_handles_entry_type_t), "_SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR.DescriptorType", descriptor_type, 0x0, 0x20, true, 0xc386b7096d232604)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR.PackageSid", package_sid, 0x40, 0x40, true, 0x2e774fcd2e5c4db3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR.IsolationPrefix", isolation_prefix, 0x40, 0x80, true, 0xdacb9fef1696d408)
#else
#define _m00
#define _m01
#define _m02
#endif