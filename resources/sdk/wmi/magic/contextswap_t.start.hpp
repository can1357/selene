#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_CONTEXTSWAP.NewThreadId", new_thread_id, 0x0, 0x20, true, 0xb5adb952acd74c61)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_CONTEXTSWAP.OldThreadId", old_thread_id, 0x20, 0x20, true, 0x73e6c174e5826fc5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_WMI_CONTEXTSWAP.NewThreadPriority", new_thread_priority, 0x40, 0x8, true, 0x220fff7fed1b8696)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_WMI_CONTEXTSWAP.OldThreadPriority", old_thread_priority, 0x48, 0x8, true, 0xb92aa9f6c47911fc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_CONTEXTSWAP.PreviousCState", previous_c_state, 0x50, 0x8, true, 0xcc4cdd69b50a9f10)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_CONTEXTSWAP.OldThreadRank", old_thread_rank, 0x50, 0x8, true, 0x3aaa5ebf0b46e623)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_WMI_CONTEXTSWAP.NewThreadPriorityDecrement", new_thread_priority_decrement, 0x58, 0x8, true, 0xd40a9d308d05264b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_CONTEXTSWAP.OldThreadWaitReason", old_thread_wait_reason, 0x60, 0x8, true, 0xe7ba956faf0102c0)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WMI_CONTEXTSWAP.OldThreadWaitMode", old_thread_wait_mode, 0x68, 0x1, true, 0x4cd34c78d7ecce0c, 0, uint8_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_CONTEXTSWAP.OldThreadState", old_thread_state, 0x70, 0x8, true, 0x8d1117a69e74b7d9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_CONTEXTSWAP.OldThreadIdealProcessor", old_thread_ideal_processor, 0x78, 0x8, true, 0x823bcc8f88ae39f3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_CONTEXTSWAP.NewThreadWaitTime", new_thread_wait_time, 0x80, 0x20, true, 0x287203d120015eac)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_CONTEXTSWAP.OldThreadRemainingQuantum", old_thread_remaining_quantum, 0xa0, 0x20, true, 0xcd68c852ff09d0cd)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WMI_CONTEXTSWAP.OldThreadBamQosLevel", old_thread_bam_qos_level, 0x69, 0x3, true, 0xf2a25653aa9e5832, 3, uint8_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WMI_CONTEXTSWAP.NewThreadBamQosLevel", new_thread_bam_qos_level, 0x6c, 0x3, true, 0x35fbe815cd04338b, 3, uint8_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WMI_CONTEXTSWAP.Flags", flags, 0x68, 0x8, true, 0xb6215570ab05fd0c)
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
#define _m12
#define _m13
#define _m14
#define _m15
#endif