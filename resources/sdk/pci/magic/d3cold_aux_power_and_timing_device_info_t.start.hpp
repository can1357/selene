#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_DEVICE_INFO.ListEntry", list_entry, 0x0, 0x80, true, 0xfe5b8b07113fed66)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_t*), "_PCI_D3COLD_AUX_POWER_AND_TIMING_DEVICE_INFO.Device", device, 0x80, 0x40, true, 0xa98c6cbbe972175f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_DEVICE_INFO.Linked", linked, 0xc0, 0x8, true, 0x76609848edf73efc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_DEVICE_INFO.CorePowerRailRequested", core_power_rail_requested, 0xc8, 0x8, true, 0x326407382ae22ca9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_DEVICE_INFO.AuxiliaryPowerRequested", auxiliary_power_requested, 0xe0, 0x20, true, 0xb03b56a918ce93c9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_DEVICE_INFO.PerstDelayRequested", perst_delay_requested, 0x100, 0x20, true, 0x1424509caa78ec68)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PCI_D3COLD_AUX_POWER_AND_TIMING_DEVICE_INFO.Lock", lock, 0x0, 0x0, false, 0x2c70ce84641dad02)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::d3cold_aux_power_and_timing_aggregation_info_t*), "_PCI_D3COLD_AUX_POWER_AND_TIMING_DEVICE_INFO.D3ColdAuxPowerCtrl", d3_cold_aux_power_ctrl, 0x0, 0x0, false, 0x3229d8238c2bcc33)
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