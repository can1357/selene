#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSAFEARRAYBOUND.cElements", c_elements, 0x0, 0x20, true, 0xc7af22f45608dbe4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSAFEARRAYBOUND.lLbound", l_lbound, 0x20, 0x20, true, 0x4c6468d941ea3f4b)
#else
#define _m00
#define _m01
#endif