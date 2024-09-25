#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO2.LayerIndex", layer_index, 0x0, 0x20, true, 0xe23006e9083ddadb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO2.PresentId", present_id, 0x40, 0x40, true, 0xd562e6e9f59e007)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::cb::notify_mpo_vsync_flags_t), "_DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO2.Flags", flags, 0x80, 0x20, true, 0xa9fde59469bf0233)
#else
#define _m00
#define _m01
#define _m02
#endif