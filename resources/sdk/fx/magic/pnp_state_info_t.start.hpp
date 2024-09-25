#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.Bits.QueueOpen", queue_open, 0x0, 0x1, true, 0x30d4ff677e921181, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "FxPnpStateInfo.Bits.KnownDroppedEvents", known_dropped_events, 0x1, 0x1f, true, 0x13ae98bcf9c695a1, 31, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bits_t), "FxPnpStateInfo.Bits", bits, 0x0, 0x20, true, 0x36e6f7859201a09c)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventAddDeviceKnown", pnp_event_add_device_known, 0x1, 0x1, true, 0x401d73e0e6570094, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventStartDeviceKnown", pnp_event_start_device_known, 0x2, 0x1, true, 0xf645816245dd5a99, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventStartDeviceCompleteKnown", pnp_event_start_device_complete_known, 0x3, 0x1, true, 0xfb52d652b09649bc, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventStartDeviceFailedKnown", pnp_event_start_device_failed_known, 0x4, 0x1, true, 0x846df59790fba4f1, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventQueryRemoveKnown", pnp_event_query_remove_known, 0x5, 0x1, true, 0x4b5b13d626c67b8b, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventQueryStopKnown", pnp_event_query_stop_known, 0x6, 0x1, true, 0x8ea6aa97196917c9, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventCancelRemoveKnown", pnp_event_cancel_remove_known, 0x7, 0x1, true, 0x9920d867cc5cd2b9, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventCancelStopKnown", pnp_event_cancel_stop_known, 0x8, 0x1, true, 0x27e071724c54e52a, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventStopKnown", pnp_event_stop_known, 0x9, 0x1, true, 0xabd458e374327652, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventRemoveKnown", pnp_event_remove_known, 0xa, 0x1, true, 0x510bd895cc74684f, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventSurpriseRemoveKnown", pnp_event_surprise_remove_known, 0xb, 0x1, true, 0x3f841368991c0f9b, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventEjectKnown", pnp_event_eject_known, 0xc, 0x1, true, 0x872de8a7a18a0b14, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventPwrPolStopped", pnp_event_pwr_pol_stopped, 0xd, 0x1, true, 0x378ea6ff2c835f37, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventPwrPolStopFailed", pnp_event_pwr_pol_stop_failed, 0xe, 0x1, true, 0x9e93d8fe74c39859, 1, uint32_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventPowerUpFailedKnown", pnp_event_power_up_failed_known, 0xf, 0x1, true, 0x239eff6ccde2457a, 1, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventPowerDownFailedKnown", pnp_event_power_down_failed_known, 0x10, 0x1, true, 0x88b6c4e64d66fc79, 1, uint32_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventParentRemovedKnown", pnp_event_parent_removed_known, 0x11, 0x1, true, 0x8b2ebdc90b4f7afc, 1, uint32_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventChildrenRemovalCompleteKnown", pnp_event_children_removal_complete_known, 0x12, 0x1, true, 0xa3df639b8f70665f, 1, uint32_t)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventPwrPolStarted", pnp_event_pwr_pol_started, 0x13, 0x1, true, 0x8be593e47ddf8b05, 1, uint32_t)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "FxPnpStateInfo.BitsByName.PnpEventPwrPolStartFailed", pnp_event_pwr_pol_start_failed, 0x14, 0x1, true, 0x3d2ed86c20964217, 1, uint32_t)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_bits_by_name_t), "FxPnpStateInfo.BitsByName", bits_by_name, 0x0, 0x20, true, 0x7e5e8db187bc8d01)
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
#endif