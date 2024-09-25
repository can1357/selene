#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP64.Signature", signature, 0x0, 0x20, true, 0xa8bbf76549739294)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP64.ValidDump", valid_dump, 0x20, 0x20, true, 0x4521cd7da93f7e19)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP64.DumpOptions", dump_options, 0x40, 0x20, true, 0xe9730acfcf6d529a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP64.HeaderSize", header_size, 0x60, 0x20, true, 0x2a2e1e8ed107b79c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP64.BitmapSize", bitmap_size, 0x80, 0x20, true, 0x7abc9430636ded4f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP64.Pages", pages, 0xa0, 0x20, true, 0xe8be02f66cdab1d)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP64.Bitmap.SizeOfBitMap", size_of_bit_map, 0x0, 0x20, true, 0xb830eae80072d018)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SUMMARY_DUMP64.Bitmap._reserved0", reserved0, 0x40, 0x40, true, 0xd230a8a8ebea95ab)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t>), "_SUMMARY_DUMP64.Bitmap.Buffer", buffer, 0x80, 0x0, true, 0x5f5332d4d5dfcf7f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_bitmap_t), "_SUMMARY_DUMP64.Bitmap", bitmap, 0xc0, 0x80, true, 0xd422f4ce156908e)
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