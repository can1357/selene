#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.CompartmentId", compartment_id, 0x0, 0x20, true, 0x23f087ee08e10059)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.NetworkGuid", network_guid, 0x20, 0x80, true, 0x73ba51a2cf297c53)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.ifAlias", if_alias, 0xa0, 0x20, true, 0xef7d0b52b875f594)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_oper_status_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.ifOperStatus", if_oper_status, 0x10c0, 0x20, true, 0x87ad8149e9e7034a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.ifOperStatusFlags", if_oper_status_flags, 0x10e0, 0x20, true, 0x9f768a3a9e11b382)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.ifMtu", if_mtu, 0x1100, 0x20, true, 0x2af2b3b9fcd25464)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_physical_address_lh_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.ifPhysAddress", if_phys_address, 0x1120, 0x10, true, 0x1824e1ecc6861cf4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_physical_address_lh_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.PermanentPhysAddress", permanent_phys_address, 0x1230, 0x10, true, 0x8001974ac5e26476)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_admin_status_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.ifAdminStatus", if_admin_status, 0x1340, 0x20, true, 0x62767c57393051fe)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.XmitLinkSpeed", xmit_link_speed, 0x1380, 0x40, true, 0xa51231d93de9dc1b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.RcvLinkSpeed", rcv_link_speed, 0x13c0, 0x40, true, 0x9c71865e7d747f57)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.ifPromiscuousMode", if_promiscuous_mode, 0x1400, 0x8, true, 0xf1bd157f1997c62a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.ifDeviceWakeUpEnable", if_device_wake_up_enable, 0x1408, 0x8, true, 0x8e0f233d49b59554)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.MediaConnectState", media_connect_state, 0x1420, 0x20, true, 0x95b42e2b5ec2544)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.MediaDuplexState", media_duplex_state, 0x1440, 0x20, true, 0x54a6090d70334e4)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_NSI_INTERFACE_ENUM_ROD.ifHideInterfaceInUi", if_hide_interface_in_ui, 0x1410, 0x8, true, 0xb06e3c09d2c4437b)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif