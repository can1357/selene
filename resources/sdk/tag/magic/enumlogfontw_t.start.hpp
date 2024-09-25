#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logfontw_t), "tagENUMLOGFONTW.elfLogFont", elf_log_font, 0x0, 0xe0, true, 0xf0cfdb7036c4bd7e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "tagENUMLOGFONTW.elfFullName", elf_full_name, 0x2e0, 0x0, true, 0xcdb4fbf58301c87a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "tagENUMLOGFONTW.elfStyle", elf_style, 0x6e0, 0x0, true, 0x593d32279fb402c1)
#else
#define _m00
#define _m01
#define _m02
#endif