#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logfontw_t), "tagENUMLOGFONTEXW.elfLogFont", elf_log_font, 0x0, 0xe0, true, 0x2c79fe8460ce1afb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "tagENUMLOGFONTEXW.elfFullName", elf_full_name, 0x2e0, 0x0, true, 0xe61eb0114b203815)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "tagENUMLOGFONTEXW.elfStyle", elf_style, 0x6e0, 0x0, true, 0xc734c765f251d59a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "tagENUMLOGFONTEXW.elfScript", elf_script, 0x8e0, 0x0, true, 0xf874fa32bf5292ce)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif