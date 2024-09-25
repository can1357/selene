#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY.ContextCount", context_count, 0x0, 0x20, true, 0x43b2e2ec03d5690a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 65>), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY.Context", context, 0x40, 0x40, true, 0xdf76a5662d5f95e6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::setvidpnsourceaddress_flags_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY.Flags", flags, 0x1080, 0x20, true, 0x6bd597f2a4f58d63)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY.VidPnSourceId", vid_pn_source_id, 0x10a0, 0x20, true, 0x6cf0996ab5c38c77)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY.PlaneCount", plane_count, 0x10c0, 0x20, true, 0xe2f9755ee681816f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_plane_t*), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY.pPlanes", p_planes, 0x1100, 0x40, true, 0x1c1ab9c4153e4b85)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY.Duration", duration, 0x1140, 0x20, true, 0x98caee8cf96740a4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif