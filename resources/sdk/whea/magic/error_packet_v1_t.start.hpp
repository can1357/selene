#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V1.Signature", signature, 0x0, 0x20, true, 0x782b3bedd3fff4de)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::error_packet_flags_t), "_WHEA_ERROR_PACKET_V1.Flags", flags, 0x20, 0x20, true, 0xbef1332f3f4724c9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V1.Size", size, 0x40, 0x20, true, 0x9f2dc61edf20b9b9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V1.RawDataLength", raw_data_length, 0x60, 0x20, true, 0xc032ae8aba722a46)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ERROR_PACKET_V1.Context", context, 0xc0, 0x40, true, 0xa6b2fdc87407cc6f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_type_t), "_WHEA_ERROR_PACKET_V1.ErrorType", error_type, 0x100, 0x20, true, 0x4e7954c14e74fe23)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_severity_t), "_WHEA_ERROR_PACKET_V1.ErrorSeverity", error_severity, 0x120, 0x20, true, 0x29a6436793873e13)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V1.ErrorSourceId", error_source_id, 0x140, 0x20, true, 0x3063ae6d268ea5d6)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::error_source_type_t), "_WHEA_ERROR_PACKET_V1.ErrorSourceType", error_source_type, 0x160, 0x20, true, 0x1a91d5a385fbe979)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V1.Version", version, 0x1a0, 0x20, true, 0x4c3a96c066621972)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ERROR_PACKET_V1.Cpu", cpu, 0x1c0, 0x40, true, 0x3b82ce52068aeca8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::processor_generic_error_section_t), "_WHEA_ERROR_PACKET_V1.ProcessorError", processor_error, 0x200, 0x0, true, 0xf94281713a21f4d4)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::memory_error_section_t), "_WHEA_ERROR_PACKET_V1.MemoryError", memory_error, 0x200, 0x80, true, 0x6753286345afaf46)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::nmi_error_section_t), "_WHEA_ERROR_PACKET_V1.NmiError", nmi_error, 0x200, 0x60, true, 0x1ebb861f897a8500)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pciexpress_error_section_t), "_WHEA_ERROR_PACKET_V1.PciExpressError", pci_express_error, 0x200, 0x80, true, 0xee0df2df729c190d)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pcixbus_error_section_t), "_WHEA_ERROR_PACKET_V1.PciXBusError", pci_x_bus_error, 0x200, 0x40, true, 0x97ca7a3dbb04827c)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pcixdevice_error_section_t), "_WHEA_ERROR_PACKET_V1.PciXDeviceError", pci_x_device_error, 0x200, 0xc0, true, 0xefd41009e661a6fa)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::raw_data_format_t), "_WHEA_ERROR_PACKET_V1.RawDataFormat", raw_data_format, 0x880, 0x20, true, 0xa15ec1963c015467)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_PACKET_V1.RawDataOffset", raw_data_offset, 0x8a0, 0x20, true, 0x16affb41b0fceb17)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_WHEA_ERROR_PACKET_V1.RawData", raw_data, 0x8c0, 0x8, true, 0x246fe8f3a5d470ef)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pmem_error_section_t), "_WHEA_ERROR_PACKET_V1.PmemError", pmem_error, 0x200, 0x80, true, 0x53930f6efa4b90dc)
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
#endif