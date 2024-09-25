#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP32.Signature", signature, 0x0, 0x20, true, 0xccdf3b33e23e8577)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP32.ValidDump", valid_dump, 0x20, 0x20, true, 0xab881233f103bb25)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP32.DumpOptions", dump_options, 0x40, 0x20, true, 0xca43ccc8857f2b2a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP32.HeaderSize", header_size, 0x60, 0x20, true, 0xb57e4125dfd9256c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP32.BitmapSize", bitmap_size, 0x80, 0x20, true, 0xcd7cc628a351850d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP32.Pages", pages, 0xa0, 0x20, true, 0x514529c638094432)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP32.Bitmap.SizeOfBitMap", size_of_bit_map, 0x0, 0x20, true, 0x6691b0dddde57729)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUMMARY_DUMP32.Bitmap._reserved0", reserved0, 0x20, 0x20, true, 0x26fef42ff5772cfa)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t>), "_SUMMARY_DUMP32.Bitmap.Buffer", buffer, 0x40, 0x0, true, 0x7a2f9b829577e11b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_bitmap_t), "_SUMMARY_DUMP32.Bitmap", bitmap, 0xc0, 0x40, true, 0x888df20de72c3a8f)
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