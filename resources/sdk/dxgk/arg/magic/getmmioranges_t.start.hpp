#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETMMIORANGES.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0xe3dcf18d79982457)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETMMIORANGES.BarIndex", bar_index, 0x20, 0x20, true, 0x7edbfe66f7defa07)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETMMIORANGES.NumRanges", num_ranges, 0x40, 0x20, true, 0xcf5949aeb2d4a112)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mmiorangeinfo_t*), "_DXGKARG_GETMMIORANGES.pMmioRanges", p_mmio_ranges, 0x80, 0x40, true, 0x889da832aadc51c0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif