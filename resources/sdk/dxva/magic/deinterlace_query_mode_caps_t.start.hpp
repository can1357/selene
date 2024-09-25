#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceQueryModeCaps.Size", size, 0x0, 0x20, true, 0x67a4342c88e25558)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_DeinterlaceQueryModeCaps.Guid", guid, 0x20, 0x80, true, 0x48d7da1227364642)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::video_desc_t), "_DXVA_DeinterlaceQueryModeCaps.VideoDesc", video_desc, 0xa0, 0x20, true, 0xd47b15c58d2d87fd)
#else
#define _m00
#define _m01
#define _m02
#endif