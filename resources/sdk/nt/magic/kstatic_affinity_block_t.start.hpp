#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KSTATIC_AFFINITY_BLOCK.KeFlushTbAffinity", ke_flush_tb_affinity, 0x0, 0x40, true, 0x698523a53cddaf2b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KSTATIC_AFFINITY_BLOCK.KeFlushWbAffinity", ke_flush_wb_affinity, 0x0, 0x40, true, 0xfe38e5a83ec4b5e9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KSTATIC_AFFINITY_BLOCK.KeSyncContextAffinity", ke_sync_context_affinity, 0x0, 0x40, true, 0xe42b0aa0d4ab01d3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KSTATIC_AFFINITY_BLOCK.KeFlushTbDeepIdleAffinity", ke_flush_tb_deep_idle_affinity, 0x540, 0x40, true, 0xe0bcee2f8cdfd773)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KSTATIC_AFFINITY_BLOCK.KeIpiSendAffinity", ke_ipi_send_affinity, 0xa80, 0x40, true, 0xeaa4653d82dfeef9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KSTATIC_AFFINITY_BLOCK.KeIpiSendIpiSet", ke_ipi_send_ipi_set, 0xfc0, 0x40, true, 0xb98c1225ad2315d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif