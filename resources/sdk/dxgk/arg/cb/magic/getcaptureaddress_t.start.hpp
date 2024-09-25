#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_GETCAPTUREADDRESS.hAllocation", h_allocation, 0x0, 0x20, true, 0x658bc580ff5b7f00)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_GETCAPTUREADDRESS.SegmentId", segment_id, 0x20, 0x20, true, 0xe3cc7da0e5de6ced)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARGCB_GETCAPTUREADDRESS.PhysicalAddress", physical_address, 0x40, 0x40, true, 0xbe1b6f249a73bfd2)
#else
#define _m00
#define _m01
#define _m02
#endif