#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_list_element_t*), "LoopDetector.m_head", m_head, 0x0, 0x40, true, 0x6270dc92925f8936)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_list_element_t*), "LoopDetector.m_slow", m_slow, 0x40, 0x40, true, 0x5f28101f589fd555)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_list_element_t*), "LoopDetector.m_fast", m_fast, 0x80, 0x40, true, 0xd9bfd409db599cc)
#else
#define _m00
#define _m01
#define _m02
#endif