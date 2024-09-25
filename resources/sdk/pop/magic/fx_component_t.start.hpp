#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_POP_FX_COMPONENT.Id", id, 0x0, 0x80, true, 0xbfd69d6a83e84faa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_COMPONENT.Index", index, 0x80, 0x20, true, 0x599a17e99d007ebe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_work_order_t), "_POP_FX_COMPONENT.WorkOrder", work_order, 0xc0, 0xc0, true, 0x4b6758e97757e816)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_device_t*), "_POP_FX_COMPONENT.Device", device, 0x280, 0x40, true, 0x96b28ab9042ee028)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile union pop::fx_component_flags_t), "_POP_FX_COMPONENT.Flags", flags, 0x2c0, 0x40, true, 0x5e0f6642ffb721b0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_FX_COMPONENT.Resident", resident, 0x300, 0x20, true, 0x4880876394a91bda)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_POP_FX_COMPONENT.ActiveEvent", active_event, 0x340, 0xc0, true, 0xca3ada754f5a6e8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_COMPONENT.IdleLock", idle_lock, 0x400, 0x40, true, 0xeaff2c4b6968659)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_FX_COMPONENT.IdleConditionComplete", idle_condition_complete, 0x440, 0x20, true, 0xf7088fa25e89d07c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_POP_FX_COMPONENT.IdleStateComplete", idle_state_complete, 0x460, 0x20, true, 0xdbdb2f591d6015db)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_COMPONENT.IdleStamp", idle_stamp, 0x480, 0x40, true, 0xe63a5a6935f8ad5f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_POP_FX_COMPONENT.CurrentIdleState", current_idle_state, 0x4c0, 0x20, true, 0xe6e488e1ee46aedc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_COMPONENT.IdleStateCount", idle_state_count, 0x4e0, 0x20, true, 0x1d932a456d4279f4)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_idle_state_t*), "_POP_FX_COMPONENT.IdleStates", idle_states, 0x500, 0x40, true, 0x8aa288d6b01ee740)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_COMPONENT.DeepestWakeableIdleState", deepest_wakeable_idle_state, 0x540, 0x20, true, 0xb459136ebc8594e9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_COMPONENT.ProviderCount", provider_count, 0x560, 0x20, true, 0x58e45c0bc27649bb)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_provider_t*), "_POP_FX_COMPONENT.Providers", providers, 0x580, 0x40, true, 0xd17473af8c1ab226)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_COMPONENT.IdleProviderCount", idle_provider_count, 0x5c0, 0x20, true, 0x9cde80c8e9c4a187)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_COMPONENT.DependentCount", dependent_count, 0x5e0, 0x20, true, 0x3026560df418ddec)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_dependent_t*), "_POP_FX_COMPONENT.Dependents", dependents, 0x600, 0x40, true, 0x4949993d3e004f17)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_accounting_t), "_POP_FX_COMPONENT.Accounting", accounting, 0x640, 0x0, true, 0xdaceed5d55f2dd02)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_perf_info_t*), "_POP_FX_COMPONENT.Performance", performance, 0xd40, 0x40, true, 0x806815c21dec36b3)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::component_power_profile_t*), "_POP_FX_COMPONENT.PowerProfile", power_profile, 0xd80, 0x40, true, 0xd779cdab790b5089)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_FX_COMPONENT.ExternalDependents", external_dependents, 0x0, 0x0, false, 0xe07f89e40162a69d)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_FX_COMPONENT.ExternalDependencies", external_dependencies, 0x0, 0x0, false, 0x23701e01d9f3dec0)
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
#endif