#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA.hAdapter", h_adapter, 0x0, 0x20, true, 0x9d6b89bad2caa923)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x583079e98f7c3c44)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA.BufferSizeSupplied", buffer_size_supplied, 0x40, 0x20, true, 0x5c99e8130a145a14)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA.pShapeBuffer", p_shape_buffer, 0x80, 0x40, true, 0x457a51c466797163)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA.BufferSizeRequired", buffer_size_required, 0xc0, 0x20, true, 0x41af6b363b6057a1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::outdupl_pointer_shape_info_t), "_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA.ShapeInfo", shape_info, 0xe0, 0xc0, true, 0x5923554b09309ea7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif