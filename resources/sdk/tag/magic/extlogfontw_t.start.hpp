#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logfontw_t), "tagEXTLOGFONTW.elfLogFont", elf_log_font, 0x0, 0xe0, true, 0xd7b6faeb084fba74)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 64>), "tagEXTLOGFONTW.elfFullName", elf_full_name, 0x2e0, 0x0, true, 0xee374f22cb953a7b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "tagEXTLOGFONTW.elfStyle", elf_style, 0x6e0, 0x0, true, 0x18c336b4e7f6ddaf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGFONTW.elfVersion", elf_version, 0x8e0, 0x20, true, 0x57ad88b80b9f59eb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGFONTW.elfStyleSize", elf_style_size, 0x900, 0x20, true, 0x3998ceb02a28503f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGFONTW.elfMatch", elf_match, 0x920, 0x20, true, 0x65c048cbd136b372)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGFONTW.elfReserved", elf_reserved, 0x940, 0x20, true, 0x4afaa89ea478ab8a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "tagEXTLOGFONTW.elfVendorId", elf_vendor_id, 0x960, 0x20, true, 0xb214d5787729bc15)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGFONTW.elfCulture", elf_culture, 0x980, 0x20, true, 0xd8dc27d4f06b6672)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::panose_t), "tagEXTLOGFONTW.elfPanose", elf_panose, 0x9a0, 0x50, true, 0x3899271b5952f1cc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif