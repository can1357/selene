#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_PRIMARYCONTEXTDATA.hContext", h_context, 0x0, 0x40, true, 0xed0da443c24827a8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_PRIMARYCONTEXTDATA.hAllocation", h_allocation, 0x40, 0x40, true, 0xa7dfe119bacf7633)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_PRIMARYCONTEXTDATA.SegmentId", segment_id, 0x80, 0x10, true, 0x55597c81aca69ddd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_PRIMARYCONTEXTDATA.SegmentAddress", segment_address, 0xc0, 0x40, true, 0x5b41ef7a47e879a5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif