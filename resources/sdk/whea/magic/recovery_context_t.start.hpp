#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_RECOVERY_CONTEXT.MemoryError.Address", address, 0x0, 0x40, true, 0xb0b4aa4822737bfc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_RECOVERY_CONTEXT.MemoryError.Consumed", consumed, 0x40, 0x8, true, 0x738a18009d87e637)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_RECOVERY_CONTEXT.MemoryError.ErrorCode", error_code, 0x50, 0x10, true, 0x7ffd4448dda90647)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_RECOVERY_CONTEXT.MemoryError.ErrorIpValid", error_ip_valid, 0x60, 0x8, true, 0x1d4c992119a6cb10)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_RECOVERY_CONTEXT.MemoryError.RestartIpValid", restart_ip_valid, 0x68, 0x8, true, 0xb0b527dbf624b0e7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_RECOVERY_CONTEXT.MemoryError.ClearPoison", clear_poison, 0x70, 0x8, true, 0xb6fb8312fc3c131c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_memory_error_t), "_WHEA_RECOVERY_CONTEXT.MemoryError", memory_error, 0x0, 0x80, true, 0xf74c5c453482bcbd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_RECOVERY_CONTEXT.PartitionId", partition_id, 0x80, 0x40, true, 0x861403ef8c6bbdf4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_RECOVERY_CONTEXT.VpIndex", vp_index, 0xc0, 0x20, true, 0x2b251271967fd0e7)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_RECOVERY_CONTEXT.PmemError.PmemErrInfo", pmem_err_info, 0x0, 0x40, true, 0x20dea3098f51759e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_pmem_error_t), "_WHEA_RECOVERY_CONTEXT.PmemError", pmem_error, 0x0, 0x40, true, 0x9369f4c6322e3230)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::recovery_context_error_type_t), "_WHEA_RECOVERY_CONTEXT.ErrorType", error_type, 0xe0, 0x20, true, 0xa31cb14f1ce2c91d)
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
#define _m09
#define _m10
#define _m11
#endif