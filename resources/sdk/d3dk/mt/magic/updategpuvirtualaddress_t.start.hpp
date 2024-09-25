#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UPDATEGPUVIRTUALADDRESS.hDevice", h_device, 0x0, 0x20, true, 0xebd516cc97adc2f6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UPDATEGPUVIRTUALADDRESS.hContext", h_context, 0x20, 0x20, true, 0xc0e2ea68066a01e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UPDATEGPUVIRTUALADDRESS.hFenceObject", h_fence_object, 0x40, 0x20, true, 0xe444544163704366)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UPDATEGPUVIRTUALADDRESS.NumOperations", num_operations, 0x60, 0x20, true, 0x7f87fd1ad9b48172)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::updategpuvirtualaddress_operation_t*), "_D3DKMT_UPDATEGPUVIRTUALADDRESS.Operations", operations, 0x80, 0x40, true, 0x5b91da43d0a95588)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_UPDATEGPUVIRTUALADDRESS.FenceValue", fence_value, 0x140, 0x40, true, 0xfc762f57bd6b8e2)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_UPDATEGPUVIRTUALADDRESS.Flags.DoNotWait", do_not_wait, 0x0, 0x1, true, 0x5342b8a88b55189c, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_UPDATEGPUVIRTUALADDRESS.Flags.Value", value, 0x0, 0x20, true, 0x51408c878f6288b4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_D3DKMT_UPDATEGPUVIRTUALADDRESS.Flags", flags, 0x180, 0x20, true, 0x3cff277057e5b690)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif