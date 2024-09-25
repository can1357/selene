#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE_EARLY_RESTORE_TRACES.CausedEarlyRestoreLogicalPowerState", caused_early_restore_logical_power_state, 0x0, 0x0, false, 0x54420774afbdf8fd, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE_EARLY_RESTORE_TRACES.CausedEarlyRestoreRealPowerState", caused_early_restore_real_power_state, 0x0, 0x0, false, 0x14ff710714ced00b, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE_EARLY_RESTORE_TRACES.CausedEarlyRestoreBME", caused_early_restore_bme, 0x0, 0x0, false, 0x8d946d785bd9dfce, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE_EARLY_RESTORE_TRACES.CausedEarlyRestoreResource", caused_early_restore_resource, 0x0, 0x0, false, 0x247af2f14836423a, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE_EARLY_RESTORE_TRACES.ExecutePowerOn", execute_power_on, 0x0, 0x0, false, 0xf24b9e2f3dfcc5db, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE_EARLY_RESTORE_TRACES.ExecuteEarlyRestoreResource", execute_early_restore_resource, 0x0, 0x0, false, 0x54be3c2c2b2f0c, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_DEVICE_EARLY_RESTORE_TRACES.ExecuteEarlyRestoreBME", execute_early_restore_bme, 0x0, 0x0, false, 0x41cd2b99464ebf74, 1, uint32_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE_EARLY_RESTORE_TRACES.AsULONG", as_ulong, 0x0, 0x0, false, 0x53588472d6086490)
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