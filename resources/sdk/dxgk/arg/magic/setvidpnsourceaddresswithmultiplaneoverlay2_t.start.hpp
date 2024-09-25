#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2.ContextCount", context_count, 0x0, 0x20, true, 0xf8b64b9103fb7bc6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 65>), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2.Context", context, 0x40, 0x40, true, 0xdef51e3ceee2ecca)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::setvidpnsourceaddress_flags_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2.Flags", flags, 0x1080, 0x20, true, 0x294f0c31cc9e2fda)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2.VidPnSourceId", vid_pn_source_id, 0x10a0, 0x20, true, 0x6624169681f0b5f7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2.PlaneCount", plane_count, 0x10c0, 0x20, true, 0x6aa504ab0b18a34d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_plane2_t*), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2.pPlanes", p_planes, 0x1100, 0x40, true, 0xe9cac579c5c274b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2.Duration", duration, 0x1140, 0x20, true, 0x7c9883c2e6af7ad3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif