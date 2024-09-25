#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsNonPnpDriver", is_non_pnp_driver, 0x0, 0x1, true, 0x8b34285626af6149, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsNoDispatchOverride", is_no_dispatch_override, 0x1, 0x1, true, 0x58a117bf7a9360ac, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsVerifierOn", is_verifier_on, 0x2, 0x1, true, 0x8d79c8338e1283b6, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsEnhancedVerifierOn", is_enhanced_verifier_on, 0x3, 0x1, true, 0x9a09de76b82336eb, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsFilter", is_filter, 0x4, 0x1, true, 0x64ad9572b8585db7, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingRemoveLockOption", is_using_remove_lock_option, 0x5, 0x1, true, 0x1c88c1e162224313, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingNonDefaultHardwareReleaseOrder", is_using_non_default_hardware_release_order, 0x6, 0x1, true, 0x5cb14f229e2ae8f9, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsPowerPolicyOwner", is_power_policy_owner, 0x7, 0x1, true, 0xaf525378d9b82410, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsS0IdleWakeFromS0Enabled", is_s0_idle_wake_from_s0_enabled, 0x9, 0x1, true, 0xfc159bf3037b96b5, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsS0IdleUsbSSEnabled", is_s0_idle_usb_ss_enabled, 0xa, 0x1, true, 0xb83580916a4d6a1, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsS0IdleSystemManaged", is_s0_idle_system_managed, 0xb, 0x1, true, 0xcf432f1eca4c3413, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsSxWakeEnabled", is_sx_wake_enabled, 0xc, 0x1, true, 0x685e7e8cd1554bf0, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingLevelTriggeredLineInterrupt", is_using_level_triggered_line_interrupt, 0xd, 0x1, true, 0x58fa2de7282aa4b2, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingEdgeTriggeredLineInterrupt", is_using_edge_triggered_line_interrupt, 0xe, 0x1, true, 0x5163b0df5652d6ea, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingMsiXOrSingleMsi22Interrupt", is_using_msi_x_or_single_msi22_interrupt, 0xf, 0x1, true, 0xb41937a95a7aa95d, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingMsi22MultiMessageInterrupt", is_using_msi22_multi_message_interrupt, 0x10, 0x1, true, 0x8723f329059e033c, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingMultipleInterrupt", is_using_multiple_interrupt, 0x11, 0x1, true, 0xc5e02c044e53075a, 1, uint32_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingPassiveLevelInterrupt", is_using_passive_level_interrupt, 0x12, 0x1, true, 0xdd1fb8f20420ae0b, 1, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingBusMasterDma", is_using_bus_master_dma, 0x13, 0x1, true, 0x9b6cdad43fccd9c1, 1, uint32_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingSystemDma", is_using_system_dma, 0x14, 0x1, true, 0xd48ef609ae898583, 1, uint32_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingSystemDmaDuplex", is_using_system_dma_duplex, 0x15, 0x1, true, 0x85e2ce973ea9a094, 1, uint32_t)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingStaticBusEnumration", is_using_static_bus_enumration, 0x16, 0x1, true, 0x90b9b65a26c88210, 1, uint32_t)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsUsingDynamicBusEnumeration", is_using_dynamic_bus_enumeration, 0x17, 0x1, true, 0x72cc9c2c993a5407, 1, uint32_t)
#define _m23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxTelemetryDriverInfo.bitmap.IsS0IdleEnabled", is_s0_idle_enabled, 0x8, 0x1, true, 0x992ba538dca47b64, 1, uint32_t)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bitmap_t), "FxTelemetryDriverInfo.bitmap", bitmap, 0x0, 0x20, true, 0x5f05c569e6484cc6)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxTelemetryDriverInfo.Dword", dword, 0x0, 0x20, true, 0xa23dfa327f0ef7c5)
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
#define _m23
#define _m24
#define _m25
#endif