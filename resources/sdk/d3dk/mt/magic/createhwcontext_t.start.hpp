#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEHWCONTEXT.hDevice", h_device, 0x0, 0x20, true, 0x72efca20e43dbbd7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEHWCONTEXT.NodeOrdinal", node_ordinal, 0x20, 0x20, true, 0x95c9f4ff49962cad)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEHWCONTEXT.EngineAffinity", engine_affinity, 0x40, 0x20, true, 0x61c4892b0ae4b1af)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::createhwcontextflags_t), "_D3DKMT_CREATEHWCONTEXT.Flags", flags, 0x60, 0x20, true, 0xd05e47df2a26d1c3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEHWCONTEXT.PrivateDriverDataSize", private_driver_data_size, 0x80, 0x20, true, 0x59cb7b088ed54689)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATEHWCONTEXT.pPrivateDriverData", p_private_driver_data, 0xc0, 0x40, true, 0xe64bbec9ba960540)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEHWCONTEXT.hHwContext", h_hw_context, 0x100, 0x20, true, 0x8a8cd33cad021920)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif