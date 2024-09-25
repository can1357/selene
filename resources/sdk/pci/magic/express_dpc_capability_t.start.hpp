#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_enhanced_capability_header_t), "_PCI_EXPRESS_DPC_CAPABILITY.Header", header, 0x0, 0x20, true, 0xdeca3c2c8cea68fa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_dpc_caps_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.DpcCapabilities", dpc_capabilities, 0x20, 0x10, true, 0x577fc816a50d196c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_dpc_control_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.DpcControl", dpc_control, 0x30, 0x10, true, 0x85ffd41f8018f121)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_dpc_status_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.DpcStatus", dpc_status, 0x40, 0x10, true, 0xb87bd13990a7f775)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<uint16_t, union pci::express_dpc_error_source_id_t>), "_PCI_EXPRESS_DPC_CAPABILITY.DpcErrSrcId", dpc_err_src_id, 0x50, 0x10, true, 0x2e39c945f0c5fb4a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_dpc_rp_pio_status_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.RpPioStatus", rp_pio_status, 0x60, 0x20, true, 0x5a4e75ca978c7c0f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_dpc_rp_pio_mask_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.RpPioMask", rp_pio_mask, 0x80, 0x20, true, 0x6c7c0b8de6baa2fb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_dpc_rp_pio_severity_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.RpPioSeverity", rp_pio_severity, 0xa0, 0x20, true, 0xaa69caa750d5baf7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_dpc_rp_pio_syserr_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.RpPioSysError", rp_pio_sys_error, 0xc0, 0x20, true, 0x51940d234dbb08b1)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_dpc_rp_pio_exception_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.RpPioException", rp_pio_exception, 0xe0, 0x20, true, 0x319d2398d4f9c4d8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_dpc_rp_pio_headerlog_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.RpPioHeaderLog", rp_pio_header_log, 0x100, 0x80, true, 0x81525a5810952bd7)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::express_dpc_rp_pio_impspeclog_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.RpPioImpSpecLog", rp_pio_imp_spec_log, 0x180, 0x20, true, 0xefb422cc094f3579)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::express_dpc_rp_pio_tlpprefixlog_register_t), "_PCI_EXPRESS_DPC_CAPABILITY.RpPioPrefixLog", rp_pio_prefix_log, 0x1a0, 0x80, true, 0x8c8bfbb8f0276e72)
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
#endif