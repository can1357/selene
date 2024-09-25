#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagOLEVERB.lVerb", l_verb, 0x0, 0x20, true, 0x66912be33d16d395)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagOLEVERB.lpszVerbName", lpsz_verb_name, 0x40, 0x40, true, 0x9f6207e2fae8398f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOLEVERB.fuFlags", fu_flags, 0x80, 0x20, true, 0x1369366dda195e18)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagOLEVERB.grfAttribs", grf_attribs, 0xa0, 0x20, true, 0x110ac4fabf02a908)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif