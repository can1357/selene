#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::device_map_t*, struct ex::fast_ref_t>), "_OBP_SILODRIVERSTATE.SystemDeviceMap", system_device_map, 0x0, 0x40, true, 0x79cd883f92ef4222)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct obp::system_dos_device_state_t), "_OBP_SILODRIVERSTATE.SystemDosDeviceState", system_dos_device_state, 0x40, 0x60, true, 0x528f35e0b5b86e32)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_OBP_SILODRIVERSTATE.DeviceMapLock", device_map_lock, 0x3c0, 0x40, true, 0xb5b7f85045527d8f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_namespace_lookuptable_t), "_OBP_SILODRIVERSTATE.PrivateNamespaceLookupTable", private_namespace_lookup_table, 0x400, 0x0, true, 0xa6819438652f5a7c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif