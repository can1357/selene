#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYMITIGATEDRANGES.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0x502ebd766e565d7d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYMITIGATEDRANGES.BarIndex", bar_index, 0x20, 0x20, true, 0x4507096ba431c0d8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYMITIGATEDRANGES.NumRanges", num_ranges, 0x40, 0x20, true, 0xab69eaac3d2d7b0b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mitigatedrangeinfo_t*), "_DXGKARG_QUERYMITIGATEDRANGES.pMitigatedRange", p_mitigated_range, 0x80, 0x40, true, 0xec0413808c15fc6b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif