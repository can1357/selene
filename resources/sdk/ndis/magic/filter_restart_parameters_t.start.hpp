#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_FILTER_RESTART_PARAMETERS.Header", header, 0x0, 0x20, true, 0x12dd8d929178aee7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_FILTER_RESTART_PARAMETERS.MiniportMediaType", miniport_media_type, 0x20, 0x20, true, 0xbd6d4459cfb55f29)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "_NDIS_FILTER_RESTART_PARAMETERS.MiniportPhysicalMediaType", miniport_physical_media_type, 0x40, 0x20, true, 0xfa4e12c29001d8ca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::restart_attributes_t*), "_NDIS_FILTER_RESTART_PARAMETERS.RestartAttributes", restart_attributes, 0x80, 0x40, true, 0xf69d6eacf6432e83)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_RESTART_PARAMETERS.LowerIfIndex", lower_if_index, 0xc0, 0x20, true, 0x9b331a20f96e4432)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_FILTER_RESTART_PARAMETERS.LowerIfNetLuid", lower_if_net_luid, 0x100, 0x40, true, 0xaa89d58518a272e7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_RESTART_PARAMETERS.Flags", flags, 0x140, 0x20, true, 0x44d5fec82522decd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif