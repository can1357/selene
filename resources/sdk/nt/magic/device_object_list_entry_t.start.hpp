#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_DEVICE_OBJECT_LIST_ENTRY.DeviceObject", device_object, 0x0, 0x40, true, 0xe8cfdc7d95c6bc77)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_relation_level_t), "_DEVICE_OBJECT_LIST_ENTRY.RelationLevel", relation_level, 0x40, 0x20, true, 0x917a7ce9f67ccf8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT_LIST_ENTRY.Ordinal", ordinal, 0x60, 0x20, true, 0x4815a6546b62ab10)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT_LIST_ENTRY.Flags", flags, 0x80, 0x20, true, 0xfe2756a21ad87612)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif