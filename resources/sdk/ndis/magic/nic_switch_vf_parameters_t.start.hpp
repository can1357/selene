#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_NIC_SWITCH_VF_PARAMETERS.Header", header, 0x0, 0x0, false, 0xac1d882be7607c73)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_VF_PARAMETERS.Flags", flags, 0x0, 0x0, false, 0x1ac5e66d9e16a2fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_VF_PARAMETERS.SwitchId", switch_id, 0x0, 0x0, false, 0x5809677aebb6fb7b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NIC_SWITCH_VF_PARAMETERS.VMName", vm_name, 0x0, 0x0, false, 0x6e6cf37a04ee40f4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NIC_SWITCH_VF_PARAMETERS.VMFriendlyName", vm_friendly_name, 0x0, 0x0, false, 0xcae1bb6464f1b3ae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::if_counted_string_lh_t), "_NDIS_NIC_SWITCH_VF_PARAMETERS.NicName", nic_name, 0x0, 0x0, false, 0x6a9ec610f9aefa38)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_NIC_SWITCH_VF_PARAMETERS.MacAddressLength", mac_address_length, 0x0, 0x0, false, 0x71357188a023c42d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_NIC_SWITCH_VF_PARAMETERS.PermanentMacAddress", permanent_mac_address, 0x0, 0x0, false, 0xf3cbd0ca13d2b727)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_NDIS_NIC_SWITCH_VF_PARAMETERS.CurrentMacAddress", current_mac_address, 0x0, 0x0, false, 0x72ed544e3c11e82a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_NIC_SWITCH_VF_PARAMETERS.VFId", vf_id, 0x0, 0x0, false, 0x33771a47f91be833)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NIC_SWITCH_VF_PARAMETERS.RequestorId", requestor_id, 0x0, 0x0, false, 0xc3e0186b16442326)
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