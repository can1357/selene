#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::p_unk_list_element_t*), "CpUnkList._head", head, 0x0, 0x0, false, 0x5c9352f4958b8b65)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_mutex_sem2_t), "CpUnkList._mutex", mutex, 0x0, 0x0, false, 0xa6eb663a20382534)
#else
#define _m00
#define _m01
#endif