#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_ATTRIBUTES.VmPassThroughLun", vm_pass_through_lun, 0x0, 0x1, true, 0x7016431976e0c236, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_ATTRIBUTES.DeviceAttentionSupported", device_attention_supported, 0x1, 0x1, true, 0x26252e57b974d6c1, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_ATTRIBUTES.AsyncNotificationSupported", async_notification_supported, 0x2, 0x1, true, 0x594f37ef8c8ebd6, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_ATTRIBUTES.D3ColdNotSupported", d3_cold_not_supported, 0x3, 0x1, true, 0xf61cba4104bff3f9, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_ATTRIBUTES.DefaultWriteCacheEnabled", default_write_cache_enabled, 0x4, 0x1, true, 0xeb003fbe8d996201, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_UNIT_ATTRIBUTES.ZnsNvmeDrive", zns_nvme_drive, 0x0, 0x0, false, 0xd78439c50ae6ab27, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif