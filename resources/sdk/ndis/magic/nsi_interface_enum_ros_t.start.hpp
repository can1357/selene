#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.ifIndex", if_index, 0x0, 0x20, true, 0xfcadae92ae95c74b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.ifDescr", if_descr, 0x20, 0x20, true, 0x5fcbbd1a9aad4b41)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.ifType", if_type, 0x1040, 0x10, true, 0x448a7b984572c1b4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_access_type_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.AccessType", access_type, 0x1060, 0x20, true, 0xb3fea28d8d1297f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_direction_type_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.DirectionType", direction_type, 0x1080, 0x20, true, 0x81f9b78361c7f840)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_connection_type_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.ConnectionType", connection_type, 0x10a0, 0x20, true, 0x51c66985265d8643)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.InterfaceGuid", interface_guid, 0x10c0, 0x80, true, 0xbb909c611f19fcc0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.ifConnectorPresent", if_connector_present, 0x1140, 0x8, true, 0x808a075bca504b87)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.ifFlags", if_flags, 0x1160, 0x20, true, 0xe9be270ebd6782bb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::medium_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.MediaType", media_type, 0x1180, 0x20, true, 0xd842e92023908995)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::physical_medium_t), "_NDIS_NSI_INTERFACE_ENUM_ROS.PhysicalMediumType", physical_medium_type, 0x11a0, 0x20, true, 0xd75a8111af77c3cc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif