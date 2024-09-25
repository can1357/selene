#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "NDIS_BIND_FILTER_LINK.DriverLinkage", driver_linkage, 0x200, 0x80, true, 0xe5c287201be2f4a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NDIS_BIND_FILTER_LINK.FilterIndex", filter_index, 0x2c0, 0x20, true, 0x65e93a80b2aa49ba)
#else
#define _m00
#define _m01
#endif