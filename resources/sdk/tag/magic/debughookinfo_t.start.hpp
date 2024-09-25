#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDEBUGHOOKINFO.idThread", id_thread, 0x0, 0x20, true, 0xb92382b6025d9e1d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagDEBUGHOOKINFO.idThreadInstaller", id_thread_installer, 0x20, 0x20, true, 0x7dc443b27cae9ff3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "tagDEBUGHOOKINFO.lParam", l_param, 0x40, 0x40, true, 0xef55cabc50e226c6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagDEBUGHOOKINFO.wParam", w_param, 0x80, 0x40, true, 0x1768b92d44d02e71)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagDEBUGHOOKINFO.code", code, 0xc0, 0x20, true, 0x1dfe1f9b4bb7c551)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif