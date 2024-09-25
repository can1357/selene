#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_ABCFLOAT.abcfA", abcf_a, 0x0, 0x20, true, 0xbbd965c3b45f61bc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_ABCFLOAT.abcfB", abcf_b, 0x20, 0x20, true, 0x651cdb1082e6575b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_ABCFLOAT.abcfC", abcf_c, 0x40, 0x20, true, 0x52e35dfc593d3dfa)
#else
#define _m00
#define _m01
#define _m02
#endif