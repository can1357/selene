#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PARAMINFO.wIDLFlags", w_idl_flags, 0x0, 0x20, true, 0x88ef720734bcdd28)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PARAMINFO.vt", vt, 0x20, 0x10, true, 0xbc788b2d0d4c0c59)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_type_info_t*), "PARAMINFO.pTypeInfo", p_type_info, 0x40, 0x40, true, 0x69a29aa52cb4f037)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::typeattr_t*), "PARAMINFO.pTypeAttr", p_type_attr, 0x80, 0x40, true, 0x82db1ffb1d94afa7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PARAMINFO.cbAlignment", cb_alignment, 0xc0, 0x10, true, 0x419304c75c312ca8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "PARAMINFO.lLevelCount", l_level_count, 0xe0, 0x20, true, 0x83877c5e19187302)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "PARAMINFO.realvt", realvt, 0x100, 0x10, true, 0x1ccc5883a97ffaf9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "PARAMINFO.iid", iid, 0x140, 0x80, true, 0xec703d0ec1830bb7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::arraydesc_t*), "PARAMINFO.pArray", p_array, 0x140, 0x40, true, 0x78f5af4d73f3e314)
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
#endif