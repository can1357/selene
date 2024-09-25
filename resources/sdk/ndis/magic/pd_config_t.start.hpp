#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PD_CONFIG.Header", header, 0x0, 0x20, true, 0x150a9d365dd57fec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CONFIG.Flags", flags, 0x20, 0x20, true, 0xb6abfd1634ab9947)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_PD_CONFIG.Enabled", enabled, 0x40, 0x8, true, 0xefa497e7ffd5d21a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CONFIG.CapabilitiesOffset", capabilities_offset, 0x60, 0x20, true, 0xab6a2320adea6dd3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PD_CONFIG.CapabilitiesSize", capabilities_size, 0x80, 0x20, true, 0x54e50dd2d4a6ef4e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif