#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_HARDWARERESERVEDRANGES.NumRanges", num_ranges, 0x0, 0x20, true, 0x8b01f11db3f48701)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::physical_memory_range_t*), "_DXGK_HARDWARERESERVEDRANGES.pPhysicalRanges", p_physical_ranges, 0x40, 0x40, true, 0x841732013177cefe)
#else
#define _m00
#define _m01
#endif