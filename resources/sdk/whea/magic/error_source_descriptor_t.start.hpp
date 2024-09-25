#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Length", length, 0x0, 0x20, true, 0x911e08132597e19d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Version", version, 0x20, 0x20, true, 0x25f90bc156561096)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_source_type_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Type", type, 0x40, 0x20, true, 0xef74af849a6ab22c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_source_state_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.State", state, 0x60, 0x20, true, 0x8ed86ba4958f98b2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.MaxRawDataLength", max_raw_data_length, 0x80, 0x20, true, 0x640fea715e04abb5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.NumRecordsToPreallocate", num_records_to_preallocate, 0xa0, 0x20, true, 0xa84c100088ea9bf)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.MaxSectionsPerRecord", max_sections_per_record, 0xc0, 0x20, true, 0xe5d7a5f2b7d5ba05)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.ErrorSourceId", error_source_id, 0xe0, 0x20, true, 0x643017caa8e8763b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.PlatformErrorSourceId", platform_error_source_id, 0x100, 0x20, true, 0xdaf6e51bd8d7273d)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Flags", flags, 0x120, 0x20, true, 0xdf28ee20f33e4508)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::xpf_mce_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.XpfMceDescriptor", xpf_mce_descriptor, 0x0, 0xc0, true, 0xcd862c780f5d0b4f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::xpf_cmc_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.XpfCmcDescriptor", xpf_cmc_descriptor, 0x0, 0x20, true, 0xe84ebb4a804b32c8)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::xpf_nmi_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.XpfNmiDescriptor", xpf_nmi_descriptor, 0x0, 0x18, true, 0x8634703da9a1a46e)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::ipf_mca_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.IpfMcaDescriptor", ipf_mca_descriptor, 0x0, 0x20, true, 0x1b36e22e52455996)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::ipf_cmc_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.IpfCmcDescriptor", ipf_cmc_descriptor, 0x0, 0x20, true, 0xb364a45597ebd262)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::ipf_cpe_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.IpfCpeDescriptor", ipf_cpe_descriptor, 0x0, 0x20, true, 0xaa269d4719c75e05)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::aer_rootport_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.AerRootportDescriptor", aer_rootport_descriptor, 0x0, 0x20, true, 0xdb4be18376fa314c)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::aer_endpoint_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.AerEndpointDescriptor", aer_endpoint_descriptor, 0x0, 0x0, true, 0x303724b51d4d0d00)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::aer_bridge_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.AerBridgeDescriptor", aer_bridge_descriptor, 0x0, 0x60, true, 0x1ee6155f5174d7c2)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::generic_error_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.GenErrDescriptor", gen_err_descriptor, 0x0, 0xa0, true, 0xcdb49ad1054c843)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::generic_error_descriptor_v2_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.GenErrDescriptorV2", gen_err_descriptor_v2, 0x0, 0x80, true, 0xb80c53c2a7a3c057)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::device_driver_descriptor_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info.DeviceDriverDescriptor", device_driver_descriptor, 0x0, 0xa0, true, 0x66e4202404fcc51)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_info_t), "_WHEA_ERROR_SOURCE_DESCRIPTOR.Info", info, 0x140, 0x20, true, 0xbdac1eb41faae53e)
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
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif