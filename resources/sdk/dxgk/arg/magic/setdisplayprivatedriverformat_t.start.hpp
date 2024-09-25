#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x65b3f2b88c730bd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT.PrimaryAllocation", primary_allocation, 0x40, 0x40, true, 0xa7de663f212f9013)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT.PrivateDriverFormatAttribute", private_driver_format_attribute, 0x80, 0x20, true, 0x8ee51575930e8106)
#else
#define _m00
#define _m01
#define _m02
#endif