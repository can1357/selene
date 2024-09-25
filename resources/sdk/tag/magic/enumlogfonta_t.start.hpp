#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logfonta_t), "tagENUMLOGFONTA.elfLogFont", elf_log_font, 0x0, 0xe0, true, 0xe579a75507140399)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "tagENUMLOGFONTA.elfFullName", elf_full_name, 0x1e0, 0x0, true, 0x9bf41be0ec31de7d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "tagENUMLOGFONTA.elfStyle", elf_style, 0x3e0, 0x0, true, 0xd78193d94853c4a4)
#else
#define _m00
#define _m01
#define _m02
#endif