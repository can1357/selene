#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_DEVOBJ_EXTENSION.Type", type, 0x0, 0x10, true, 0x5465aa5a5ef13dbe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVOBJ_EXTENSION.Size", size, 0x10, 0x10, true, 0xd6cb0132387437a7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DEVOBJ_EXTENSION.DeviceObject", device_object, 0x40, 0x40, true, 0x4755547f1cbdbf9d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVOBJ_EXTENSION.PowerFlags", power_flags, 0x80, 0x20, true, 0x397cda440f50a92a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_power_extension_t*), "_DEVOBJ_EXTENSION.Dope", dope, 0xc0, 0x40, true, 0x39333ad13c574744)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVOBJ_EXTENSION.ExtensionFlags", extension_flags, 0x100, 0x20, true, 0xee47ede73621326a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DEVOBJ_EXTENSION.DeviceNode", device_node, 0x140, 0x40, true, 0xe440e3bd1126481d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DEVOBJ_EXTENSION.AttachedTo", attached_to, 0x180, 0x40, true, 0x91e80e217e285c5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DEVOBJ_EXTENSION.StartIoCount", start_io_count, 0x1c0, 0x20, true, 0xaaaf287609c45cfd)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DEVOBJ_EXTENSION.StartIoKey", start_io_key, 0x1e0, 0x20, true, 0x12ef64a912ab7cc8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVOBJ_EXTENSION.StartIoFlags", start_io_flags, 0x200, 0x20, true, 0xfdb5e08192b813e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::vpb_t*), "_DEVOBJ_EXTENSION.Vpb", vpb, 0x240, 0x40, true, 0xb7ca7921796e5e58)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DEVOBJ_EXTENSION.DependencyNode", dependency_node, 0x280, 0x40, true, 0xe26b55c3386c68fb)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DEVOBJ_EXTENSION.InterruptContext", interrupt_context, 0x2c0, 0x40, true, 0x300df85de57dbb58)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DEVOBJ_EXTENSION.VerifierContext", verifier_context, 0x340, 0x40, true, 0x8a1fd4e52a42984d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_DEVOBJ_EXTENSION.InterruptCount", interrupt_count, 0x300, 0x20, true, 0x203aef358031d687)
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
#endif