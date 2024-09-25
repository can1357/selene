#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoDesc.Size", size, 0x0, 0x20, true, 0xe14acc7c614087ed)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoDesc.SampleWidth", sample_width, 0x20, 0x20, true, 0x142cb4d1529308c5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoDesc.SampleHeight", sample_height, 0x40, 0x20, true, 0x10d2ddefb31ef360)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoDesc.SampleFormat", sample_format, 0x60, 0x20, true, 0xe1eabdb5283c3141)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_VideoDesc.d3dFormat", d3d_format, 0x80, 0x20, true, 0x2607ea978d59cf1f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::frequency_t), "_DXVA_VideoDesc.InputSampleFreq", input_sample_freq, 0xa0, 0x40, true, 0x3d1c0d372559835e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::frequency_t), "_DXVA_VideoDesc.OutputFrameFreq", output_frame_freq, 0xe0, 0x40, true, 0x3925228904491181)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif