#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETRUNTIMEDATA.hAdapter", h_adapter, 0x0, 0x20, true, 0x75f0288a461b4c88)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETRUNTIMEDATA.hGlobalShare", h_global_share, 0x20, 0x20, true, 0x6ceb868f702a4d5d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_GETRUNTIMEDATA.pRuntimeData", p_runtime_data, 0x40, 0x40, true, 0x39ccaed866fe952e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETRUNTIMEDATA.RuntimeDataSize", runtime_data_size, 0x80, 0x20, true, 0xc2275b043f87626f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif