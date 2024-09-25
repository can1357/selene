#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_header_t*), "_OBJECT_REF_INFO.ObjectHeader", object_header, 0x0, 0x40, true, 0x7fd71333993c903e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OBJECT_REF_INFO.NextRef", next_ref, 0x40, 0x40, true, 0x48f07d4c68780534)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_OBJECT_REF_INFO.ImageFileName", image_file_name, 0x80, 0x80, true, 0x319cfca26feb7217)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OBJECT_REF_INFO.NextPos", next_pos, 0x100, 0x10, true, 0xd2d5dd2638ba61fe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OBJECT_REF_INFO.MaxStacks", max_stacks, 0x110, 0x10, true, 0xf5127d0cdc9560f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::object_ref_stack_info_t>), "_OBJECT_REF_INFO.StackInfo", stack_info, 0x120, 0x0, true, 0xa5bb18cd6b55461f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif