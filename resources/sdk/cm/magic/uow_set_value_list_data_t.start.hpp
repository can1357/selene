#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_UOW_SET_VALUE_LIST_DATA.RefCount", ref_count, 0x0, 0x20, true, 0xb4758daa811dfd6f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::child_list_t), "_CM_UOW_SET_VALUE_LIST_DATA.ValueList", value_list, 0x20, 0x40, true, 0x516ada66f40bda9b)
#else
#define _m00
#define _m01
#endif