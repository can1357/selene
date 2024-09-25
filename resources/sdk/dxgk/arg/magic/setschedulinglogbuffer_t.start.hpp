#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETSCHEDULINGLOGBUFFER.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0x53c4bc2da87e5775)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETSCHEDULINGLOGBUFFER.EngineOrdinal", engine_ordinal, 0x20, 0x20, true, 0x97e27bbdd7f0be1c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETSCHEDULINGLOGBUFFER.NumberOfEntries", number_of_entries, 0x40, 0x20, true, 0xf2a6aa42f3d8469c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::scheduling_log_buffer_t*), "_DXGKARG_SETSCHEDULINGLOGBUFFER.LogBufferCpuVa", log_buffer_cpu_va, 0x80, 0x40, true, 0xb3168e76bd6e33b1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SETSCHEDULINGLOGBUFFER.LogBufferGpuVa", log_buffer_gpu_va, 0xc0, 0x40, true, 0xb831aa607aec1b52)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETSCHEDULINGLOGBUFFER.InterruptEntry", interrupt_entry, 0x100, 0x20, true, 0x98273e5585591bd3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif