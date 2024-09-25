#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_NSI_NETWORK_RW.Header", header, 0x0, 0x0, false, 0x4b8ff88b0dd5146d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NSI_NETWORK_RW.CompartmentId", compartment_id, 0x0, 0x0, false, 0x5dd70299e68fbdf2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NSI_NETWORK_RW.SiteId", site_id, 0x0, 0x0, false, 0x65058c345bed9dbd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NSI_NETWORK_RW.NetworkName", network_name, 0x0, 0x0, false, 0x8bbe23730be1fad8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif