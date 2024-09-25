#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NVME_LBA_ZONE_FORMAT.ZoneSize", zone_size, 0x0, 0x0, false, 0xbc2d4bf6768232e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_LBA_ZONE_FORMAT.ZDES", zdes, 0x0, 0x0, false, 0xa088d4b2984c64e9)
#else
#define _m00
#define _m01
#endif