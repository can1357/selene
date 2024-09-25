#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_NODEMETADATA.NodeOrdinalAndAdapterIndex", node_ordinal_and_adapter_index, 0x0, 0x20, true, 0x3725cf5aaf193140)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::nodemetadata_t), "_D3DKMT_NODEMETADATA.NodeData", node_data, 0x20, 0x50, true, 0xa1da53981c943418)
#else
#define _m00
#define _m01
#endif