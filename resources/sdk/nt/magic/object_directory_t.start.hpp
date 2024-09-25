#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::object_directory_entry_t*, 37>), "_OBJECT_DIRECTORY.HashBuckets", hash_buckets, 0x0, 0x40, true, 0x5d85834e3a221725)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_OBJECT_DIRECTORY.Lock", lock, 0x940, 0x40, true, 0x184d2cd7a3866d39)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_map_t*), "_OBJECT_DIRECTORY.DeviceMap", device_map, 0x980, 0x40, true, 0x760af88ce69c1b08)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_directory_t*), "_OBJECT_DIRECTORY.ShadowDirectory", shadow_directory, 0x9c0, 0x40, true, 0xd577455c70097035)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_DIRECTORY.NamespaceEntry", namespace_entry, 0xa00, 0x40, true, 0x43dae1b5c9ead872)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_DIRECTORY.SessionObject", session_object, 0xa40, 0x40, true, 0xc646af1399ef850b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_DIRECTORY.Flags", flags, 0xa80, 0x20, true, 0x1f671f39a84cc3e3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_DIRECTORY.SessionId", session_id, 0xaa0, 0x20, true, 0xfdacc48aa96dd9e7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif