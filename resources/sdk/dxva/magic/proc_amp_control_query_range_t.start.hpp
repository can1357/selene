#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_ProcAmpControlQueryRange.Size", size, 0x0, 0x20, true, 0xb95560fa2690134c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxva::proc_amp_control_prop_t), "_DXVA_ProcAmpControlQueryRange.ProcAmpControlProp", proc_amp_control_prop, 0x20, 0x20, true, 0x4625f6f4e7beccdf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::video_desc_t), "_DXVA_ProcAmpControlQueryRange.VideoDesc", video_desc, 0x40, 0x20, true, 0xc6243fc4b0953873)
#else
#define _m00
#define _m01
#define _m02
#endif