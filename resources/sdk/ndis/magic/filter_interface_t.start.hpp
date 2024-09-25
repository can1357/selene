#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_FILTER_INTERFACE.Header", header, 0x0, 0x20, true, 0xaa622910001f4240)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_INTERFACE.Flags", flags, 0x20, 0x20, true, 0x771ae4a62526dd45)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_INTERFACE.FilterType", filter_type, 0x40, 0x20, true, 0x8fa7322a1579df79)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_INTERFACE.FilterRunType", filter_run_type, 0x60, 0x20, true, 0xfca7ab1e5bf7cee1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FILTER_INTERFACE.IfIndex", if_index, 0x80, 0x20, true, 0x13d82aa14e0a76d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_FILTER_INTERFACE.NetLuid", net_luid, 0xc0, 0x40, true, 0xd2565cae9556f0c9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_FILTER_INTERFACE.FilterClass", filter_class, 0x100, 0x80, true, 0xe8b6a774f9f32496)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NDIS_FILTER_INTERFACE.FilterInstanceName", filter_instance_name, 0x180, 0x80, true, 0xa47878f60a08ecc1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif