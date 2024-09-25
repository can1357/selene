#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_BUILDPAGINGBUFFER_COPYPAGETABLEENTRIES.NumRanges", num_ranges, 0x0, 0x20, true, 0x7eba9c6165085f1d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::buildpagingbuffer_copy_range_t*), "_DXGK_BUILDPAGINGBUFFER_COPYPAGETABLEENTRIES.pRanges", p_ranges, 0x40, 0x40, true, 0xe68596837f62bf84)
#else
#define _m00
#define _m01
#endif