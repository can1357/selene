#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_RAID_ADAPTER_POFX.PoHandle", po_handle, 0x0, 0x40, true, 0x573d77323d3be115)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RAID_ADAPTER_POFX.PoFxDevice", po_fx_device, 0x40, 0x40, true, 0xc75c2bb2d09f7fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_POFX.CurrentFState", current_f_state, 0x80, 0x20, true, 0x989eb112af778ff7)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_POFX.Active", active, 0xa0, 0x1, true, 0xc65f370ebb5f2ff7, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_POFX.DevicePowerRequired", device_power_required, 0xa1, 0x1, true, 0x3d8391b741e2ac2c, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_POFX.StoppedActiveReference", stopped_active_reference, 0xa2, 0x1, true, 0xefb834f912510e16, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_POFX.DPNRInCS", dpnr_in_cs, 0xa3, 0x1, true, 0x7efc8ae30c623c94, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_POFX.F1InCS", f1_in_cs, 0xa4, 0x1, true, 0xf96ef64a53213e7, 1, uint32_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_ADAPTER_POFX.RegisteredPerfSets", registered_perf_sets, 0xe0, 0x8, true, 0xcba76c6936c86b42)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_POFX.OperationalPowerMax", operational_power_max, 0x100, 0x40, true, 0x19b1428f66aad658)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_POFX.OperationalPowerMin", operational_power_min, 0x140, 0x40, true, 0x36630df3f2f8417d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 3>), "_RAID_ADAPTER_POFX.MaxOperationalPower", max_operational_power, 0x180, 0xc0, true, 0x3fdd058a14f23a5c)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_POFX.DFxPowerDownInCS", d_fx_power_down_in_cs, 0xa5, 0x1, true, 0xa30c031ac0ea8367, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_POFX.WaitWakeIrpSent", wait_wake_irp_sent, 0xa6, 0x1, true, 0xf2e5d44f547fef9f, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_POFX.WakeCapable", wake_capable, 0xa7, 0x1, true, 0xaa9a7a65682cdad9, 1, uint32_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_POFX.WaitWakeActiveReference", wait_wake_active_reference, 0xc0, 0x20, true, 0x354d6306bc09b7a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_RAID_ADAPTER_POFX.WaitWakeIrp", wait_wake_irp, 0x240, 0x40, true, 0x44b9f9a2155e484a)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_POFX.MiniportActiveReferences", miniport_active_references, 0x0, 0x0, false, 0x796dbeeafffcee20)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_POFX.ActiveReferences", active_references, 0x0, 0x0, false, 0x22afc36e576f8c51)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_POFX.IoctlActiveReferences", ioctl_active_references, 0x0, 0x0, false, 0xf8513287b697ef4d)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_ADAPTER_POFX.F0Only", f0_only, 0x0, 0x0, false, 0xea2037a9a5cc0d51, 1, uint32_t)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_POFX.MiniportActiveReferenceAcquires", miniport_active_reference_acquires, 0x0, 0x0, false, 0xf0a1dc79c42dd6f7)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_POFX.MiniportActiveReferenceReleases", miniport_active_reference_releases, 0x0, 0x0, false, 0x2d4941cc91a9e913)
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