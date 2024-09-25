#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_PORT_DATA.ReferenceCount", reference_count, 0x0, 0x20, true, 0xe9d9a2b7115aeeed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_RAID_PORT_DATA.DriverList.List", list, 0x0, 0x80, true, 0x9e5963c2273f3c3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_PORT_DATA.DriverList.Lock", lock, 0x80, 0x40, true, 0xb3a41aac9f48260e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_PORT_DATA.DriverList.Count", count, 0xc0, 0x20, true, 0xe2672824f2c61b02)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_driver_list_t), "_RAID_PORT_DATA.DriverList", driver_list, 0x40, 0x0, true, 0xf03bd317532eaf28)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif