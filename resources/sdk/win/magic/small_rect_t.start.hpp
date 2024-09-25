#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_SMALL_RECT.Left", left, 0x0, 0x10, true, 0x2ac2f71e03556236)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_SMALL_RECT.Top", top, 0x10, 0x10, true, 0xaf317762b0f13ce0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_SMALL_RECT.Right", right, 0x20, 0x10, true, 0x760fd8f5143c9ce3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_SMALL_RECT.Bottom", bottom, 0x30, 0x10, true, 0xf92572ceb3343559)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif