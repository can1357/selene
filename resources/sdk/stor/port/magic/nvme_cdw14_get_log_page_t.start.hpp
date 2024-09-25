#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "NVME_CDW14_GET_LOG_PAGE.UUIDIndex", uuid_index, 0x0, 0x0, false, 0xd643265d460c4774, 7, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_CDW14_GET_LOG_PAGE.CommandSetIdentifier", command_set_identifier, 0x0, 0x0, false, 0x80102aa75acb29f4, 8, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_CDW14_GET_LOG_PAGE.AsUlong", as_ulong, 0x0, 0x0, false, 0xbd314fbbd260848a)
#else
#define _m00
#define _m01
#define _m02
#endif