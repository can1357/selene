#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0xda08c8b8be908988)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::setvidpnsourceaddress_input_flags_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3.InputFlags", input_flags, 0x20, 0x20, true, 0x9f8ee7c635bf7f28)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::setvidpnsourceaddress_output_flags_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3.OutputFlags", output_flags, 0x40, 0x20, true, 0x4853e4113ca37fc2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3.PlaneCount", plane_count, 0x60, 0x20, true, 0x3aa9c5553a9772d4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_plane3_t**), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3.ppPlanes", pp_planes, 0x80, 0x40, true, 0x146604caca77de70)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_post_composition_t*), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3.pPostComposition", p_post_composition, 0xc0, 0x40, true, 0x6914becfa8c35f9e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3.Duration", duration, 0x100, 0x20, true, 0xa0841dec037bacfa)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::hdr_metadata_t*), "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3.pHDRMetaData", p_hdr_meta_data, 0x140, 0x40, true, 0x4a328ee3524c6f80)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif