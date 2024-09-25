#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALGPUSEGMENTINFO.DriverSegmentId", driver_segment_id, 0x0, 0x20, true, 0xb9ebc46e8e83df5f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VIRTUALGPUSEGMENTINFO.Size", size, 0x40, 0x40, true, 0xce2e0f2267f9695b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALGPUSEGMENTINFO.Alignment", alignment, 0x80, 0x20, true, 0x7478d35536287ed7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VIRTUALGPUSEGMENTINFO.MinSegmentOffset", min_segment_offset, 0xc0, 0x40, true, 0x3bfc4b5ab54d414b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VIRTUALGPUSEGMENTINFO.MaxSegmentOffset", max_segment_offset, 0x100, 0x40, true, 0x349593ab36285ad0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIRTUALGPUSEGMENTINFO.PrivateDriverData", private_driver_data, 0x140, 0x20, true, 0xcb39dbf69bb4a878)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif