#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksdevice_t*)>*), "_KSDEVICE_DISPATCH.Add", add, 0x0, 0x0, false, 0xc4716ef581716135)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*, struct cm::resource_list_t*, struct cm::resource_list_t*)>*), "_KSDEVICE_DISPATCH.Start", start, 0x0, 0x0, false, 0x4cd1cefa5a6ef560)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksdevice_t*)>*), "_KSDEVICE_DISPATCH.PostStart", post_start, 0x0, 0x0, false, 0xe08ca88fc0050ed0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*)>*), "_KSDEVICE_DISPATCH.QueryStop", query_stop, 0x0, 0x0, false, 0xe5b957d70502a403)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*)>*), "_KSDEVICE_DISPATCH.CancelStop", cancel_stop, 0x0, 0x0, false, 0xba580bf6453e05f4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*)>*), "_KSDEVICE_DISPATCH.Stop", stop, 0x0, 0x0, false, 0x25f56c6ef46fbd70)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*)>*), "_KSDEVICE_DISPATCH.QueryRemove", query_remove, 0x0, 0x0, false, 0xf95ec05faa5a803)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*)>*), "_KSDEVICE_DISPATCH.CancelRemove", cancel_remove, 0x0, 0x0, false, 0xbb3bd8a80a315b06)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*)>*), "_KSDEVICE_DISPATCH.Remove", remove, 0x0, 0x0, false, 0x5b16c0a5920f4fd4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*, struct nt::device_capabilities_t*)>*), "_KSDEVICE_DISPATCH.QueryCapabilities", query_capabilities, 0x0, 0x0, false, 0xf1b4d32982fa5135)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*)>*), "_KSDEVICE_DISPATCH.SurpriseRemoval", surprise_removal, 0x0, 0x0, false, 0xc52ffd4aaf458e29)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*, enum nt::device_power_state_t, enum nt::device_power_state_t, enum nt::system_power_state_t, enum nt::system_power_state_t, enum power::action_t)>*), "_KSDEVICE_DISPATCH.QueryPower", query_power, 0x0, 0x0, false, 0x4f27c63c75aae108)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct ndis::ksdevice_t*, struct nt::irp_t*, enum nt::device_power_state_t, enum nt::device_power_state_t)>*), "_KSDEVICE_DISPATCH.SetPower", set_power, 0x0, 0x0, false, 0xa10c065766440dd7)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct ndis::ksdevice_t*, struct nt::irp_t*)>*), "_KSDEVICE_DISPATCH.QueryInterface", query_interface, 0x0, 0x0, false, 0x9cb1d84d757b9690)
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
#endif