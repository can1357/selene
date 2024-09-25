#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_QOS_CAPABILITIES.Header", header, 0x0, 0x20, true, 0xa970bf3ed38dd3a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_CAPABILITIES.Flags", flags, 0x20, 0x20, true, 0xf3142f1f94f205e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_CAPABILITIES.MaxNumTrafficClasses", max_num_traffic_classes, 0x40, 0x20, true, 0x6d2f937a5772fa46)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_CAPABILITIES.MaxNumEtsCapableTrafficClasses", max_num_ets_capable_traffic_classes, 0x60, 0x20, true, 0xccc82ac137314ea3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_CAPABILITIES.MaxNumPfcEnabledTrafficClasses", max_num_pfc_enabled_traffic_classes, 0x80, 0x20, true, 0xa08938b4760ce907)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif