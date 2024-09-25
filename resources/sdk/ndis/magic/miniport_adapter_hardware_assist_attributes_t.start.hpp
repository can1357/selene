#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x2caa1ee099b02268)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::hd_split_attributes_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.HDSplitAttributes", hd_split_attributes, 0x40, 0x40, true, 0x18ec3f2f6ff38f2b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_filter_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.HardwareReceiveFilterCapabilities", hardware_receive_filter_capabilities, 0x80, 0x40, true, 0x29a34043e67c741c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::receive_filter_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.CurrentReceiveFilterCapabilities", current_receive_filter_capabilities, 0xc0, 0x40, true, 0x242a9623b29d7028)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.HardwareNicSwitchCapabilities", hardware_nic_switch_capabilities, 0x100, 0x40, true, 0x93a1a522fc4899cf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::nic_switch_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.CurrentNicSwitchCapabilities", current_nic_switch_capabilities, 0x140, 0x40, true, 0x6df0f4dc63b3448)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::sriov_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.HardwareSriovCapabilities", hardware_sriov_capabilities, 0x180, 0x40, true, 0xee1e69c10fc84dc3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::sriov_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.CurrentSriovCapabilities", current_sriov_capabilities, 0x1c0, 0x40, true, 0x67137f2dbe801eb)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::qos_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.HardwareQosCapabilities", hardware_qos_capabilities, 0x200, 0x40, true, 0xa0aaa6f0ac2ed60c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::qos_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.CurrentQosCapabilities", current_qos_capabilities, 0x240, 0x40, true, 0x8bf518965977517f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gft_offload_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.HardwareGftOffloadCapabilities", hardware_gft_offload_capabilities, 0x280, 0x40, true, 0x1c57120d145da14f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::gft_offload_capabilities_t*), "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.CurrentGftOffloadCapabilities", current_gft_offload_capabilities, 0x2c0, 0x40, true, 0x7b9a3e61389ecea3)
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
#endif