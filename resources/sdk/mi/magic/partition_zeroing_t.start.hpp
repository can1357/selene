#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_PARTITION_ZEROING.ZeroFreePageSlistMinimum", zero_free_page_slist_minimum, 0xe0, 0x20, true, 0x1a44a4547b49f300)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_PARTITION_ZEROING.RebalanceZeroFreeWorkItem", rebalance_zero_free_work_item, 0x100, 0x0, true, 0x50feda967b9018ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_ZEROING.PageEvent", page_event, 0x0, 0xc0, true, 0xf51e5021a6596e23)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_ZEROING.BackgroundZeroingDisabled", background_zeroing_disabled, 0x220, 0x20, true, 0xe046746db76e29de)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_ZEROING.ThreadPriorityStatic", thread_priority_static, 0xc0, 0x8, true, 0x261667e1b47a7581)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_ZEROING.AdaptiveZeroingEnabled", adaptive_zeroing_enabled, 0xc8, 0x8, true, 0x53ae464655f97ed5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_ZEROING.NodeCount", node_count, 0x200, 0x20, true, 0x99492a4bebdd2812)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kgate_t), "_MI_PARTITION_ZEROING.LargeBootZeroingComplete", large_boot_zeroing_complete, 0x240, 0xc0, true, 0x4ce43432b5cc5e60)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::write_calibration_t), "_MI_PARTITION_ZEROING.WriteCalibration", write_calibration, 0x300, 0x0, true, 0xaa8e0fe2faa76beb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_ZEROING.IpiCalibrationFailed", ipi_calibration_failed, 0x400, 0x8, true, 0xfef915ae09679aad)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_ZEROING.ActiveProcessorsForIpiCalibration", active_processors_for_ipi_calibration, 0x420, 0x20, true, 0x465de70970089eba)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_ZEROING.NodesReadyForIpiCalibration", nodes_ready_for_ipi_calibration, 0x440, 0x20, true, 0x5ea31af63ffebf0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_ZEROING.ReleaseNodeZeroingThreads", release_node_zeroing_threads, 0x480, 0xc0, true, 0x5747cb6619ffda5d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::zero_thread_context_t*), "_MI_PARTITION_ZEROING.ThreadContext", thread_context, 0x540, 0x40, true, 0x8fbc1b2705cfc3cb)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_ZEROING.ThreadActive", thread_active, 0x0, 0x0, false, 0xfe77c3741a45bd95)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_ZEROING.ThreadCount", thread_count, 0x0, 0x0, false, 0xc95a68acbbb76324)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kgate_t), "_MI_PARTITION_ZEROING.Gate", gate, 0x0, 0x0, false, 0xc84f3ac0e9ae12a3)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_ZEROING.BootEnginesCalibrating", boot_engines_calibrating, 0x0, 0x0, false, 0x71f73dcb8037deb8)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_ZEROING.BootEnginesCalibrationWaiters", boot_engines_calibration_waiters, 0x0, 0x0, false, 0xe860659ee93d8c54)
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
#define _m16
#define _m17
#define _m18
#endif