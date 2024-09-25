#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDEOPROTECTEDREGION.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0xd750176595127ff9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDEOPROTECTEDREGION.SegmentIndex", segment_index, 0x20, 0x20, true, 0x481587402ccb9786)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDEOPROTECTEDREGION.VprIndex", vpr_index, 0x40, 0x20, true, 0xdef4b283ef84263e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SETVIDEOPROTECTEDREGION.CurrentStartOffset", current_start_offset, 0x80, 0x40, true, 0x35811db4c4617331)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SETVIDEOPROTECTEDREGION.CurrentSize", current_size, 0xc0, 0x40, true, 0x93dadfcbfd6fd4ed)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SETVIDEOPROTECTEDREGION.NewStartOffset", new_start_offset, 0x100, 0x40, true, 0x777c6e92310824dd)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SETVIDEOPROTECTEDREGION.NewSize", new_size, 0x140, 0x40, true, 0x23d61e3bb86e20d5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif