#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYCLOCKCALIBRATION.hAdapter", h_adapter, 0x0, 0x20, true, 0xccea7b2e6f85d1b1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYCLOCKCALIBRATION.NodeOrdinal", node_ordinal, 0x20, 0x20, true, 0xba1617942c727688)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYCLOCKCALIBRATION.PhysicalAdapterIndex", physical_adapter_index, 0x40, 0x20, true, 0xd7cec8426682fa51)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gpuclockdata_t), "_D3DKMT_QUERYCLOCKCALIBRATION.ClockData", clock_data, 0x60, 0xe0, true, 0x8d78677c09b771be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif