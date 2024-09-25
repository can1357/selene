#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_POLICY_DEVICE.Link", link, 0x0, 0x80, true, 0x96d7e4580826711e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::policy_device_type_t), "_POP_POLICY_DEVICE.DeviceType", device_type, 0x80, 0x20, true, 0xa8b078d47511f82f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_POLICY_DEVICE.Notification", notification, 0xc0, 0x40, true, 0xd640996f0e3c70e9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_POP_POLICY_DEVICE.Name", name, 0x100, 0x80, true, 0xb7d36cb39d7611c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_POLICY_DEVICE.Device", device, 0x180, 0x40, true, 0x9d993713336c4fe9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_POP_POLICY_DEVICE.Irp", irp, 0x1c0, 0x40, true, 0x1567018270380bf0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif