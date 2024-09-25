#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_ProcAmpControlCaps.Size", size, 0x0, 0x20, true, 0x504d44a2b4d8dacc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_ProcAmpControlCaps.InputPool", input_pool, 0x20, 0x20, true, 0x57b93b97261b9d37)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_ProcAmpControlCaps.d3dOutputFormat", d3d_output_format, 0x40, 0x20, true, 0xaedc763167a52890)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_ProcAmpControlCaps.ProcAmpControlProps", proc_amp_control_props, 0x60, 0x20, true, 0xa35523196daaff0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_ProcAmpControlCaps.VideoProcessingCaps", video_processing_caps, 0x80, 0x20, true, 0x7a40f514683eefc2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif