#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MEMSTM.cb", cb, 0x0, 0x20, true, 0xc8ff56322376ac14)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "MEMSTM.cRef", c_ref, 0x20, 0x20, true, 0x31c991a94366b1be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "MEMSTM.m_pBuf", m_p_buf, 0x40, 0x40, true, 0x3169faa0061ac35d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "MEMSTM.hGlobal", h_global, 0x80, 0x40, true, 0x71aaa302a2bc204)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "MEMSTM.fDeleteOnRelease", f_delete_on_release, 0xc0, 0x20, true, 0x54d97f90f38f2c5d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "MEMSTM.possibleLeakCondition", possible_leak_condition, 0xe0, 0x20, true, 0x8d9714883ff328be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif