#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagTYPEATTR.guid", guid, 0x0, 0x80, true, 0x6f7a87354fe8e80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTYPEATTR.lcid", lcid, 0x80, 0x20, true, 0xde064ee720b8344f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTYPEATTR.dwReserved", dw_reserved, 0xa0, 0x20, true, 0xa97af2360f48001e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagTYPEATTR.memidConstructor", memid_constructor, 0xc0, 0x20, true, 0xd13b0669e14c1bb7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagTYPEATTR.memidDestructor", memid_destructor, 0xe0, 0x20, true, 0xa5ac341a8d92a01d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagTYPEATTR.lpstrSchema", lpstr_schema, 0x100, 0x40, true, 0xa6660d0307352b93)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagTYPEATTR.cbSizeInstance", cb_size_instance, 0x140, 0x20, true, 0xda93a01ee5e9a6bc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::typekind_t), "tagTYPEATTR.typekind", typekind, 0x160, 0x20, true, 0xe25002dfebcdb50d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTYPEATTR.cFuncs", c_funcs, 0x180, 0x10, true, 0xe756623460bb22e1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTYPEATTR.cVars", c_vars, 0x190, 0x10, true, 0x79e3187535e56d10)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTYPEATTR.cImplTypes", c_impl_types, 0x1a0, 0x10, true, 0x34f52253295a5a66)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTYPEATTR.cbSizeVft", cb_size_vft, 0x1b0, 0x10, true, 0x6478bdb48b723b09)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTYPEATTR.cbAlignment", cb_alignment, 0x1c0, 0x10, true, 0x54483d9592e30fa9)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTYPEATTR.wTypeFlags", w_type_flags, 0x1d0, 0x10, true, 0xc14beb8260b5a5df)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTYPEATTR.wMajorVerNum", w_major_ver_num, 0x1e0, 0x10, true, 0x6ff7bbb06eace6c3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagTYPEATTR.wMinorVerNum", w_minor_ver_num, 0x1f0, 0x10, true, 0xad2f4f80ef3bd742)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::typedesc_t), "tagTYPEATTR.tdescAlias", tdesc_alias, 0x200, 0x80, true, 0x8b78c35d73fb9657)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::idldesc_t), "tagTYPEATTR.idldescType", idldesc_type, 0x280, 0x80, true, 0x493488884cfea258)
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
#define _m16
#define _m17
#endif