#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSOFTWARE_INTERRUPT_BATCH.Level", level, 0x0, 0x0, false, 0xf6d395250c3d2e2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSOFTWARE_INTERRUPT_BATCH.TargetType", target_type, 0x0, 0x0, false, 0x7cfb170f11dbedf6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSOFTWARE_INTERRUPT_BATCH.ReservedBatchInProgress", reserved_batch_in_progress, 0x0, 0x0, false, 0x8d7c7edc82f45ead)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSOFTWARE_INTERRUPT_BATCH.SingleTargetIndex", single_target_index, 0x0, 0x0, false, 0xfecffefb54cf8547)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KSOFTWARE_INTERRUPT_BATCH.MultipleTargetAffinity", multiple_target_affinity, 0x0, 0x0, false, 0xc199050884c567ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif