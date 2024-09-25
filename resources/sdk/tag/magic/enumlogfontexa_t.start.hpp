#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logfonta_t), "tagENUMLOGFONTEXA.elfLogFont", elf_log_font, 0x0, 0xe0, true, 0x5574cd494668248c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "tagENUMLOGFONTEXA.elfFullName", elf_full_name, 0x1e0, 0x0, true, 0x2b47651a8e9a1e7e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "tagENUMLOGFONTEXA.elfStyle", elf_style, 0x3e0, 0x0, true, 0xb54fb9e872a8cd3c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "tagENUMLOGFONTEXA.elfScript", elf_script, 0x4e0, 0x0, true, 0x81e765b2f06e9bb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif