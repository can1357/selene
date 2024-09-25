#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SCHEDULING_LOG_ENTRY.GpuTimeStamp", gpu_time_stamp, 0x0, 0x40, true, 0xf08b294d7740d42a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_DXGK_SCHEDULING_LOG_ENTRY.OperationType", operation_type, 0x40, 0x20, true, 0xdbd2890c492d7d6d, 32, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_DXGK_SCHEDULING_LOG_ENTRY.ReservedOperationTypeBits", reserved_operation_type_bits, 0x60, 0x20, true, 0x2ff6f7101402eef2, 32, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::scheduling_log_context_state_change_t), "_DXGK_SCHEDULING_LOG_ENTRY.ContextStateChange", context_state_change, 0x80, 0x80, true, 0x7cb434498fe93075)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_DXGK_SCHEDULING_LOG_ENTRY.ReservedOperationData", reserved_operation_data, 0x80, 0x80, true, 0x94f6a1c49358cf34)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif