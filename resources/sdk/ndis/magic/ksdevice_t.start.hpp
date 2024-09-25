#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct ndis::ksdevice_descriptor_t*), "_KSDEVICE.Descriptor", descriptor, 0x0, 0x0, false, 0x893ee3945fd37756)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSDEVICE.Bag", bag, 0x0, 0x0, false, 0x9168e2108705546a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSDEVICE.Context", context, 0x0, 0x0, false, 0xf930330fdea42d0d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_KSDEVICE.FunctionalDeviceObject", functional_device_object, 0x0, 0x0, false, 0x75e754363628656)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_KSDEVICE.PhysicalDeviceObject", physical_device_object, 0x0, 0x0, false, 0xed9d37c802fdfb44)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_KSDEVICE.NextDeviceObject", next_device_object, 0x0, 0x0, false, 0x756d1190a0f98777)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSDEVICE.Started", started, 0x0, 0x0, false, 0x882cdff8d03296bd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_KSDEVICE.SystemPowerState", system_power_state, 0x0, 0x0, false, 0x172f1f01d847b1c8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_KSDEVICE.DevicePowerState", device_power_state, 0x0, 0x0, false, 0x9eac850358c67627)
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
#endif