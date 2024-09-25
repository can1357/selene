#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTPROTECT_PROMPTSTRUCT.cbSize", cb_size, 0x0, 0x20, true, 0x32a02ad314d5852c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTPROTECT_PROMPTSTRUCT.dwPromptFlags", dw_prompt_flags, 0x20, 0x20, true, 0x316d43c9363ed09c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "_CRYPTPROTECT_PROMPTSTRUCT.hwndApp", hwnd_app, 0x40, 0x40, true, 0xb9744078ced636c2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_CRYPTPROTECT_PROMPTSTRUCT.szPrompt", sz_prompt, 0x80, 0x40, true, 0x2565bc2958075043)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif