#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceCaps.Size", size, 0x0, 0x20, true, 0x2fdc89661a96cbe0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceCaps.NumPreviousOutputFrames", num_previous_output_frames, 0x20, 0x20, true, 0x1a9d3c1e96485c28)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceCaps.InputPool", input_pool, 0x40, 0x20, true, 0x662e576de063d54d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceCaps.NumForwardRefSamples", num_forward_ref_samples, 0x60, 0x20, true, 0x526f3175beefca0e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceCaps.NumBackwardRefSamples", num_backward_ref_samples, 0x80, 0x20, true, 0x2aa6c0d111c27d42)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_DeinterlaceCaps.d3dOutputFormat", d3d_output_format, 0xa0, 0x20, true, 0xc93c3e0f4227dda5)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxva::video_process_caps_t), "_DXVA_DeinterlaceCaps.VideoProcessingCaps", video_processing_caps, 0xc0, 0x20, true, 0xca1279aa19c0c899)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxva::deinterlace_tech_t), "_DXVA_DeinterlaceCaps.DeinterlaceTechnology", deinterlace_technology, 0xe0, 0x20, true, 0x745e307c570566a6)
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