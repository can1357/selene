#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RECTL.left", left, 0x0, 0x20, true, 0x58e1f3f5b5cbce3c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RECTL.top", top, 0x20, 0x20, true, 0x431261c46e9d70d7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RECTL.right", right, 0x40, 0x20, true, 0xf5229f249d801ef3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_RECTL.bottom", bottom, 0x60, 0x20, true, 0x1f4433cb0cbea49a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif