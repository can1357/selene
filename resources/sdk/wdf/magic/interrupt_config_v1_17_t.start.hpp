#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0x6cb88440292035d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG_V1_17.SpinLock", spin_lock, 0x0, 0x0, false, 0x4b3d3edc9fbf82fb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_17.ShareVector", share_vector, 0x0, 0x0, false, 0x6029d42647f935c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_17.FloatingSave", floating_save, 0x0, 0x0, false, 0xb0fcd9db8cd7a58f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_17.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xa8d907a49fc6b91f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG_V1_17.EvtInterruptIsr", evt_interrupt_isr, 0x0, 0x0, false, 0x91d9cf48581f8e44)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_17.EvtInterruptDpc", evt_interrupt_dpc, 0x0, 0x0, false, 0xba40e6f012f1396f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_17.EvtInterruptEnable", evt_interrupt_enable, 0x0, 0x0, false, 0xa5b39d07ba312a73)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_17.EvtInterruptDisable", evt_interrupt_disable, 0x0, 0x0, false, 0xb5ee5eab2d4a52ca)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_17.EvtInterruptWorkItem", evt_interrupt_work_item, 0x0, 0x0, false, 0xa0a3e95ddd522563)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG_V1_17.InterruptRaw", interrupt_raw, 0x0, 0x0, false, 0xba9acfd889fd44e4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG_V1_17.InterruptTranslated", interrupt_translated, 0x0, 0x0, false, 0xa60c95b7b847f29d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwaitlock_t*), "_WDF_INTERRUPT_CONFIG_V1_17.WaitLock", wait_lock, 0x0, 0x0, false, 0xfc80609337779cca)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_17.PassiveHandling", passive_handling, 0x0, 0x0, false, 0xd0a28ddc4908e51c)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_17.ReportInactiveOnPowerDown", report_inactive_on_power_down, 0x0, 0x0, false, 0x7b6485586459968)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_17.CanWakeDevice", can_wake_device, 0x0, 0x0, false, 0x8a3737123f8d428b)
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