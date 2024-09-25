#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_CONTROL_FIELD.ExpressNativeHotPlug", express_native_hot_plug, 0x0, 0x1, true, 0x5235024d65ea50a6, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_CONTROL_FIELD.ShpcNativeHotPlug", shpc_native_hot_plug, 0x1, 0x1, true, 0x88e9d63bd203d99f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_CONTROL_FIELD.ExpressNativePME", express_native_pme, 0x2, 0x1, true, 0x5cf27bbccbb04dce, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_CONTROL_FIELD.ExpressAdvancedErrorReporting", express_advanced_error_reporting, 0x3, 0x1, true, 0xbd1e2bdf10f3d2ab, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_CONTROL_FIELD.ExpressCapabilityStructure", express_capability_structure, 0x4, 0x1, true, 0xdc702c73e4ffb184, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_ROOT_BUS_OSC_CONTROL_FIELD.LatencyToleranceReporting", latency_tolerance_reporting, 0x5, 0x1, true, 0xb9b8418274a9ddc4, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_ROOT_BUS_OSC_CONTROL_FIELD.AsULONG", as_ulong, 0x0, 0x20, true, 0x6b3fb4a9eb31b2ee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif