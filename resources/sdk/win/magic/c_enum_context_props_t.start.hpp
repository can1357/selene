#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CEnumContextProps._cRefs", c_refs, 0x40, 0x20, true, 0x19b40091cdc9b266)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::context_property_t*), "CEnumContextProps._pList", p_list, 0x80, 0x40, true, 0xc630d3624e70f1f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "CEnumContextProps._pcListRefs", pc_list_refs, 0xc0, 0x40, true, 0xc2d67119fdf3d2f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CEnumContextProps._cItems", c_items, 0x100, 0x20, true, 0xa7b9c722adf47ea0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CEnumContextProps._CurrentPosition", current_position, 0x120, 0x20, true, 0xc759cb5b1239a79b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif