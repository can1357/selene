#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::queryadapterinfotype_t), "_DXGKARG_QUERYADAPTERINFO.Type", type, 0x0, 0x20, true, 0x46e47a1270585281)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_QUERYADAPTERINFO.pInputData", p_input_data, 0x40, 0x40, true, 0xcc57116da8256535)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYADAPTERINFO.InputDataSize", input_data_size, 0x80, 0x20, true, 0xbc70ad87416a8c3e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_QUERYADAPTERINFO.pOutputData", p_output_data, 0xc0, 0x40, true, 0xbf3eec13e9994afd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYADAPTERINFO.OutputDataSize", output_data_size, 0x100, 0x20, true, 0x3182cda46ae0640)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::queryadapterinfoflags_t), "_DXGKARG_QUERYADAPTERINFO.Flags", flags, 0x120, 0x20, true, 0x1d047d79c0429552)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_QUERYADAPTERINFO.hKmdProcessHandle", h_kmd_process_handle, 0x140, 0x40, true, 0xa7b8503be9971daa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif