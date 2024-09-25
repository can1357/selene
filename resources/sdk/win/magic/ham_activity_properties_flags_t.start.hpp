#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.TaskCompletionType", task_completion_type, 0x0, 0x7, true, 0x554e642462fa40f1, 7, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.EePolicy", ee_policy, 0x7, 0x2, true, 0x3598d41cf54f7233, 2, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.NoReclaimForResourcePressure", no_reclaim_for_resource_pressure, 0x9, 0x1, true, 0xf56af3d512a2f729, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.ResumeRequired", resume_required, 0xa, 0x1, true, 0x3a20ac200047fa4d, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.ExtendSuspend", extend_suspend, 0xb, 0x1, true, 0x3877e9e3ffd54ea6, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.DeferTransitions", defer_transitions, 0xc, 0x1, true, 0x17b521d6d0ded8f5, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.InswapRequired", inswap_required, 0xd, 0x1, true, 0x42a7cb833acd47a4, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.TerminateIfCsBlocked", terminate_if_cs_blocked, 0xe, 0x1, true, 0xc359f30bcc7fba3f, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.BackgroundAccessStateAware", background_access_state_aware, 0xf, 0x1, true, 0xe30a8b4f111e5f6a, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.IsWindow", is_window, 0x10, 0x1, true, 0xc4d73436ffe1a9ac, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.ExpireOnTermination", expire_on_termination, 0x11, 0x1, true, 0xd5db797e9767034c, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.ForceBindToCurrentGeneration", force_bind_to_current_generation, 0x12, 0x1, true, 0x27d9c26b3615d36c, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.ElasticRecipient", elastic_recipient, 0x13, 0x1, true, 0x692aad9101ff85, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.AlwaysRevokeSuspendExtend", always_revoke_suspend_extend, 0x14, 0x1, true, 0x4ff3ba492e6601d2, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.HostRequired", host_required, 0x15, 0x1, true, 0xcaee352750bb60c5, 1, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.IsMultiInstance", is_multi_instance, 0x16, 0x1, true, 0x2dc44abedb0fccb7, 1, uint32_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.LicenseType", license_type, 0x17, 0x2, true, 0x5067b6a552aa8fa4, 2, uint32_t)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.All", all, 0x0, 0x20, true, 0x1be199c95691c08e)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HAM_ACTIVITY_PROPERTIES_FLAGS.IsBridgeDesktop", is_bridge_desktop, 0x0, 0x0, false, 0xcf7c4fe7096f94b9, 1, uint32_t)
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