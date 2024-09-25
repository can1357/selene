#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::full_ptr_to_refid_element_t*), "_FULL_PTR_TO_REFID_ELEMENT.Next", next, 0x0, 0x40, true, 0x950bfb12ef4192f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FULL_PTR_TO_REFID_ELEMENT.Pointer", pointer, 0x40, 0x40, true, 0x1923f3f0eb4df097)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FULL_PTR_TO_REFID_ELEMENT.RefId", ref_id, 0x80, 0x20, true, 0x26e486d411b0cd8b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FULL_PTR_TO_REFID_ELEMENT.State", state, 0xa0, 0x8, true, 0xe6a2169992a4e94c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif