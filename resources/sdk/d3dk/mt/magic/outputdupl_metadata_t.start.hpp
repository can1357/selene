#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_METADATA.hAdapter", h_adapter, 0x0, 0x20, true, 0xf14d04fc4c4c721a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_METADATA.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0x12490e37c4b5ad9d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::outputdupl_metadatatype_t), "_D3DKMT_OUTPUTDUPL_METADATA.Type", type, 0x40, 0x20, true, 0xfc59ead0c9e4fe7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_METADATA.BufferSizeSupplied", buffer_size_supplied, 0x60, 0x20, true, 0x2bfc869fbf2f1210)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OUTPUTDUPL_METADATA.pBuffer", p_buffer, 0x80, 0x40, true, 0x78a2d95e2efd7625)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OUTPUTDUPL_METADATA.BufferSizeRequired", buffer_size_required, 0xc0, 0x20, true, 0x341821edbd0fc7dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif