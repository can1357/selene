#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT_LIST.Count", count, 0x0, 0x20, true, 0x5544d78e4ac116ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT_LIST.MaxCount", max_count, 0x20, 0x20, true, 0xf7521f8bac2e97e5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEVICE_OBJECT_LIST.TagCount", tag_count, 0x40, 0x20, true, 0xe4668d33ba0b279f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::device_delete_type_t), "_DEVICE_OBJECT_LIST.OperationCode", operation_code, 0x60, 0x20, true, 0xacaae69ecf0c9e5d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::device_object_list_entry_t, 1>), "_DEVICE_OBJECT_LIST.Devices", devices, 0x80, 0xc0, true, 0xd1af73c002527fc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif