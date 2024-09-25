#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::pdo_event_callbacks_t), "PdoInit.EventCallbacks", event_callbacks, 0x0, 0x0, true, 0x767652e3b51b7ebd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::device_t*), "PdoInit.Parent", parent, 0x200, 0x40, true, 0x4ed50be74a0aa516)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::string_t*), "PdoInit.DeviceID", device_id, 0x240, 0x40, true, 0x3b31fc2a987c6a54)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::string_t*), "PdoInit.InstanceID", instance_id, 0x280, 0x40, true, 0x69841cf540316a04)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::collection_internal_t), "PdoInit.HardwareIDs", hardware_i_ds, 0x2c0, 0xc0, true, 0xec83c280f077d52a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::collection_internal_t), "PdoInit.CompatibleIDs", compatible_i_ds, 0x380, 0xc0, true, 0x3e24a419780ed689)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::string_t*), "PdoInit.ContainerID", container_id, 0x440, 0x40, true, 0xf997dc2bba36d96f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "PdoInit.DeviceText", device_text, 0x480, 0x40, true, 0x5157d2187573d7cc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t**), "PdoInit.LastDeviceTextEntry", last_device_text_entry, 0x4c0, 0x40, true, 0xc21b0ba491d36743)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::device_description_entry_t*), "PdoInit.DescriptionEntry", description_entry, 0x500, 0x40, true, 0x48c7b147306ca852)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PdoInit.DefaultLocale", default_locale, 0x540, 0x20, true, 0xde820d1054ad593c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PdoInit.Raw", raw, 0x560, 0x8, true, 0xd0f3f3f7ed4dbbc6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PdoInit.Static", _static, 0x568, 0x8, true, 0x8a514f6c42c54ea4)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PdoInit.ForwardRequestToParent", forward_request_to_parent, 0x570, 0x8, true, 0xd0580bdd5e1a7c43)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "PdoInit.NoPowerDependencyOnParent", no_power_dependency_on_parent, 0x578, 0x8, true, 0xe7e816d56d9f7719)
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
#endif