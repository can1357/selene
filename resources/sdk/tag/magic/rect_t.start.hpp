#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagRECT.left", left, 0x0, 0x20, true, 0x9e9ed9b13dc9df21)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagRECT.top", top, 0x20, 0x20, true, 0xf6b57ea5e24d3295)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagRECT.right", right, 0x40, 0x20, true, 0xc3bbd3fc73a4e0fe)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagRECT.bottom", bottom, 0x60, 0x20, true, 0xaa875c1e7482a868)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif