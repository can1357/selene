#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_DEVICEPAGEFAULT_STATE.FaultedPrimitiveAPISequenceNumber", faulted_primitive_api_sequence_number, 0x0, 0x40, true, 0xb40627cd7876bb9e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::render_pipeline_stage_t), "_D3DKMT_DEVICEPAGEFAULT_STATE.FaultedPipelineStage", faulted_pipeline_stage, 0x40, 0x20, true, 0x4665c53752e9974f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICEPAGEFAULT_STATE.FaultedBindTableEntry", faulted_bind_table_entry, 0x60, 0x20, true, 0xe5253b11c5aee0c6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::page_fault_flags_t), "_D3DKMT_DEVICEPAGEFAULT_STATE.PageFaultFlags", page_fault_flags, 0x80, 0x20, true, 0xd27e4eacfaf3c05c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::fault_error_code_t), "_D3DKMT_DEVICEPAGEFAULT_STATE.FaultErrorCode", fault_error_code, 0xa0, 0x20, true, 0x3bfec5816dd8110b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_DEVICEPAGEFAULT_STATE.FaultedVirtualAddress", faulted_virtual_address, 0xc0, 0x40, true, 0xfa517aa6292aa5e9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif