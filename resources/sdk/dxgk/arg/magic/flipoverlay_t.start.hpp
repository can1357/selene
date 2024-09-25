#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_FLIPOVERLAY.hSource", h_source, 0x0, 0x40, true, 0x2b8a7ee13628fcb3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_FLIPOVERLAY.SrcPhysicalAddress", src_physical_address, 0x40, 0x40, true, 0x5736dd92999d0850)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_FLIPOVERLAY.SrcSegmentId", src_segment_id, 0x80, 0x20, true, 0xda9d528d53683361)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_FLIPOVERLAY.pPrivateDriverData", p_private_driver_data, 0xc0, 0x40, true, 0x7e3f8f93c1f80883)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_FLIPOVERLAY.PrivateDriverDataSize", private_driver_data_size, 0x100, 0x20, true, 0xd5e0f35a575f4e0b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif