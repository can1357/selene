#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.Size", size, 0x0, 0x0, false, 0x4bcd54c50cac8e0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::execution_context_flags_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.Flags", flags, 0x0, 0x0, false, 0x386ff02b5afc06ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.MaxTimeAtDispatch", max_time_at_dispatch, 0x0, 0x0, false, 0x427b2911e93374e4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.DispatchTimeWarning", dispatch_time_warning, 0x0, 0x0, false, 0x40ebe863854d396b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.DispatchTimeWarningInterval", dispatch_time_warning_interval, 0x0, 0x0, false, 0xf344f13e24cb2d1a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.DpcWatchdogTimerThreshold", dpc_watchdog_timer_threshold, 0x0, 0x0, false, 0x3020027dd59f3ab)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.WorkerThreadPriority", worker_thread_priority, 0x0, 0x0, false, 0xd024a52fbac56521)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::execution_context_work_unit_knobs_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.MaxPacketsSend", max_packets_send, 0x0, 0x0, false, 0x35965c53967ddc8f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::execution_context_work_unit_knobs_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.MaxPacketsSendComplete", max_packets_send_complete, 0x0, 0x0, false, 0x3bc9e7c2af803c1a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::execution_context_work_unit_knobs_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.MaxPacketsReceive", max_packets_receive, 0x0, 0x0, false, 0x1ebf5ae86d66f168)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::execution_context_work_unit_knobs_t), "_EXECUTION_CONTEXT_RUNTIME_KNOBS.MaxPacketsReceiveComplete", max_packets_receive_complete, 0x0, 0x0, false, 0x3c9e347657cc95d7)
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
#endif