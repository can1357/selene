#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMDT_VIRTUALGPUSURFACEDATA.Size", size, 0x0, 0x40, true, 0x852747022b48042b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIRTUALGPUSURFACEDATA.Alignment", alignment, 0x40, 0x20, true, 0x5b285ab60c13a6cc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIRTUALGPUSURFACEDATA.DriverSegmentId", driver_segment_id, 0x60, 0x20, true, 0xefca2dffcac3ef9c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIRTUALGPUSURFACEDATA.PrivateDriverData", private_driver_data, 0x80, 0x20, true, 0x1c666c5096f5fef)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif