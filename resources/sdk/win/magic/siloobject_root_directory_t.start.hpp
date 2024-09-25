#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SILOOBJECT_ROOT_DIRECTORY.ControlFlags", control_flags, 0x0, 0x20, true, 0xcdbb23316d7c4af0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SILOOBJECT_ROOT_DIRECTORY.Path", path, 0x0, 0x80, true, 0x8c38f8811c248f0a)
#else
#define _m00
#define _m01
#endif