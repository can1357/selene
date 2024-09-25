#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::raid_object_type_t), "_RAID_DRIVER_EXTENSION.ObjectType", object_type, 0x0, 0x20, true, 0xdfb7cae8c8e315b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_RAID_DRIVER_EXTENSION.DriverObject", driver_object, 0x40, 0x40, true, 0x1e82e31fdce07cf5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_port_data_t*), "_RAID_DRIVER_EXTENSION.PortData", port_data, 0x80, 0x40, true, 0x5c60678597d67adc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RAID_DRIVER_EXTENSION.DriverLink", driver_link, 0xc0, 0x80, true, 0x1dfe25f9fc9e2b66)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RAID_DRIVER_EXTENSION.RegistryPath", registry_path, 0x140, 0x80, true, 0xe87e111e81a49159)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RAID_DRIVER_EXTENSION.AdapterList.List", list, 0x0, 0x80, true, 0xe5058a1ecc6ff177)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_DRIVER_EXTENSION.AdapterList.Count", count, 0x80, 0x20, true, 0xa8c89be07c93561b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_DRIVER_EXTENSION.AdapterList.Lock", lock, 0xc0, 0x40, true, 0xdda8fb22a429ca2e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_adapter_list_t), "_RAID_DRIVER_EXTENSION.AdapterList", adapter_list, 0x1c0, 0x0, true, 0x71590f02752ddc5f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_DRIVER_EXTENSION.AdapterCount", adapter_count, 0x2c0, 0x20, true, 0x399ab1bc6f4e8507)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RAID_DRIVER_EXTENSION.HwInitList", hw_init_list, 0x300, 0x80, true, 0x2d57cb74da64cda6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif