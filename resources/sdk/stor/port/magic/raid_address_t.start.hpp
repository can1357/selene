#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADDRESS.PathId", path_id, 0x0, 0x0, false, 0x72c11d5a680d7d74)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADDRESS.TargetId", target_id, 0x0, 0x0, false, 0x4927111d63f5d7bf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADDRESS.Lun", lun, 0x0, 0x0, false, 0x3103500080c1ae09)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint24_t), "_RAID_ADDRESS.NamespaceId", namespace_id, 0x0, 0x0, false, 0x4154335f8f17e54c, 24, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADDRESS.AsUlong", as_ulong, 0x0, 0x0, false, 0x67b73f028712de83)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif