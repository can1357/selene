#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_RENDERFLAGS.ResizeCommandBuffer", resize_command_buffer, 0x0, 0x1, true, 0xd68eeb471a96065f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_RENDERFLAGS.ResizeAllocationList", resize_allocation_list, 0x1, 0x1, true, 0x5aa5f032efa1a9b0, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_RENDERFLAGS.ResizePatchLocationList", resize_patch_location_list, 0x2, 0x1, true, 0xa99221df9a80b40f, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_RENDERFLAGS.NullRendering", null_rendering, 0x3, 0x1, true, 0x46f8a07fe2015209, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_RENDERFLAGS.PresentRedirected", present_redirected, 0x4, 0x1, true, 0xa9a0fe577e8805f3, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_RENDERFLAGS.RenderKm", render_km, 0x5, 0x1, true, 0x3072afe1800e207d, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_RENDERFLAGS.RenderKmReadback", render_km_readback, 0x6, 0x1, true, 0x71f98b7c5ed32d79, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif