#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_D3DKMT_OUTPUTDUPL_FRAMEINFO.LastPresentTime", last_present_time, 0x0, 0x40, true, 0x7fcfbcd96364da46)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_D3DKMT_OUTPUTDUPL_FRAMEINFO.LastMouseUpdateTime", last_mouse_update_time, 0x40, 0x40, true, 0x411e6fb8ae5a285e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_FRAMEINFO.AccumulatedFrames", accumulated_frames, 0x80, 0x20, true, 0xb276addad76fc896)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_OUTPUTDUPL_FRAMEINFO.RectsCoalesced", rects_coalesced, 0xa0, 0x20, true, 0x43ab610e08bb78a3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_OUTPUTDUPL_FRAMEINFO.ProtectedContentMaskedOut", protected_content_masked_out, 0xc0, 0x20, true, 0x21d5006cdb870ce8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::outputdupl_pointer_position_t), "_D3DKMT_OUTPUTDUPL_FRAMEINFO.PointerPosition", pointer_position, 0xe0, 0x60, true, 0x5ed5bfe59ec689f3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_FRAMEINFO.TotalMetadataBufferSize", total_metadata_buffer_size, 0x140, 0x20, true, 0x2af3e2e9739a931)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_FRAMEINFO.PointerShapeBufferSize", pointer_shape_buffer_size, 0x160, 0x20, true, 0xb6640964c49ff034)
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