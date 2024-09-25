#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_OVERLAYINFO.hAllocation", h_allocation, 0x0, 0x40, true, 0x5e9504c5b49eeda0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_OVERLAYINFO.PhysicalAddress", physical_address, 0x40, 0x40, true, 0xba8bf73e42a3c698)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_OVERLAYINFO.SegmentId", segment_id, 0x80, 0x20, true, 0xb1f5c91fb4e60110)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_OVERLAYINFO.DstRect", dst_rect, 0xa0, 0x80, true, 0x2ca961164eaf7eef)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_OVERLAYINFO.SrcRect", src_rect, 0x120, 0x80, true, 0x2f7554f965eefc1c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_OVERLAYINFO.pPrivateDriverData", p_private_driver_data, 0x1c0, 0x40, true, 0xa534113c3401837f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_OVERLAYINFO.PrivateDriverDataSize", private_driver_data_size, 0x200, 0x20, true, 0xc596f0ae172e32f6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif