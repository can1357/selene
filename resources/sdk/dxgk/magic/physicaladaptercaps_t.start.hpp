#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_PHYSICALADAPTERCAPS.NumExecutionNodes", num_execution_nodes, 0x0, 0x10, true, 0x288089aa0c0dcc80)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_PHYSICALADAPTERCAPS.PagingNodeIndex", paging_node_index, 0x10, 0x10, true, 0xf257cdc4429cef00)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_PHYSICALADAPTERCAPS.DxgkPhysicalAdapterHandle", dxgk_physical_adapter_handle, 0x40, 0x40, true, 0x9d64c1a130c6e353)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::physicaladapterflags_t), "_DXGK_PHYSICALADAPTERCAPS.Flags", flags, 0x80, 0x20, true, 0x77b9341148133682)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PHYSICALADAPTERCAPS.VPRPagingNode", vpr_paging_node, 0xa0, 0x20, true, 0xb38d1651422d2d5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_PHYSICALADAPTERCAPS.VirtualCopyNodeIndex", virtual_copy_node_index, 0xc0, 0x20, true, 0xa21690dbd374077b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif