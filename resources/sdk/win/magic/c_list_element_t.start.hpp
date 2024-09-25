#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_list_element_t*), "CListElement._flink", flink, 0x0, 0x40, true, 0x763ef621e2be96be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_list_element_t*), "CListElement._blink", blink, 0x40, 0x40, true, 0xc526795c0ecf608)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CListElement.m_isInList", m_is_in_list, 0x80, 0x8, true, 0x7152f3f920b93ce5)
#else
#define _m00
#define _m01
#define _m02
#endif