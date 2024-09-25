#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_DXGKMDT_OPM_CREATE_VIDEO_OUTPUT_FOR_TARGET_PARAMETERS.AdapterLuid", adapter_luid, 0x0, 0x40, true, 0x1578f70b55d89e8e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_CREATE_VIDEO_OUTPUT_FOR_TARGET_PARAMETERS.TargetId", target_id, 0x40, 0x20, true, 0x36eabff7922d7730)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::mdt::opm_video_output_semantics_t), "_DXGKMDT_OPM_CREATE_VIDEO_OUTPUT_FOR_TARGET_PARAMETERS.Vos", vos, 0x60, 0x20, true, 0x907d7553099d0ab8)
#else
#define _m00
#define _m01
#define _m02
#endif