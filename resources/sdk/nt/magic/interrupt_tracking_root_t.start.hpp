#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_INTERRUPT_TRACKING_ROOT.ListEntry", list_entry, 0x0, 0x0, false, 0xb5c505557e7b5d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_INTERRUPT_TRACKING_ROOT.TrackingEntryList", tracking_entry_list, 0x0, 0x0, false, 0x344c9f7df944722f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_TRACKING_ROOT.Gsiv", gsiv, 0x0, 0x0, false, 0x8551b4b78d5afec7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::interrupt_vector_data_t), "_INTERRUPT_TRACKING_ROOT.VectorData", vector_data, 0x0, 0x0, false, 0x59c94a63be6c1dd1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interrupt_steering_mode_t), "_INTERRUPT_TRACKING_ROOT.SteeringMode", steering_mode, 0x0, 0x0, false, 0x26d93feae2072a59)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_INTERRUPT_TRACKING_ROOT.EnableSteering", enable_steering, 0x0, 0x0, false, 0xae5c4d9ff305d8f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_INTERRUPT_TRACKING_ROOT.CpuSetMask", cpu_set_mask, 0x0, 0x0, false, 0xf79d1caeec6fbb0b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INTERRUPT_TRACKING_ROOT.AffinityEpoch", affinity_epoch, 0x0, 0x0, false, 0x81bfa7f945667d0b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_INTERRUPT_TRACKING_ROOT.CurrentTarget", current_target, 0x0, 0x0, false, 0x6fe4f313114af1ae)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_INTERRUPT_TRACKING_ROOT.NextTarget", next_target, 0x0, 0x0, false, 0x331cc9a2ef27fc5b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_INTERRUPT_TRACKING_ROOT.TimeDelta", time_delta, 0x0, 0x0, false, 0x5931eba72e51cc99)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_INTERRUPT_TRACKING_ROOT.RedirectHandle", redirect_handle, 0x0, 0x0, false, 0xe5172f453fa8fc86)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_INTERRUPT_TRACKING_ROOT.SteerQueueLink", steer_queue_link, 0x0, 0x0, false, 0x3a3dba12cfc31f41)
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
#endif