#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::logfonta_t), "tagEXTLOGFONTA.elfLogFont", elf_log_font, 0x0, 0xe0, true, 0xfe4f5e2be72b964a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "tagEXTLOGFONTA.elfFullName", elf_full_name, 0x1e0, 0x0, true, 0x1fa25d7366ad1ad7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "tagEXTLOGFONTA.elfStyle", elf_style, 0x3e0, 0x0, true, 0xdfa1a6ad9945971)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGFONTA.elfVersion", elf_version, 0x4e0, 0x20, true, 0xa02d1a75602bc851)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGFONTA.elfStyleSize", elf_style_size, 0x500, 0x20, true, 0x441e9c5e6b5390c4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGFONTA.elfMatch", elf_match, 0x520, 0x20, true, 0x6c49864ac7d92815)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGFONTA.elfReserved", elf_reserved, 0x540, 0x20, true, 0x639ab7dec8dce118)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "tagEXTLOGFONTA.elfVendorId", elf_vendor_id, 0x560, 0x20, true, 0x34ae5d7d1e7c7b85)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagEXTLOGFONTA.elfCulture", elf_culture, 0x580, 0x20, true, 0xaaf5b56db9538d3a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::panose_t), "tagEXTLOGFONTA.elfPanose", elf_panose, 0x5a0, 0x50, true, 0x14f1ec7e9ae69f93)
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