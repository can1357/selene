#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0x34882bc29209f072)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG_V1_13.SpinLock", spin_lock, 0x0, 0x0, false, 0xdf92479710ce98fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_13.ShareVector", share_vector, 0x0, 0x0, false, 0x4cc680f1c940acc3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_13.FloatingSave", floating_save, 0x0, 0x0, false, 0xb3d731b3365af15a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_13.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x7ddc8f4b99fa8194)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG_V1_13.EvtInterruptIsr", evt_interrupt_isr, 0x0, 0x0, false, 0x9daba09502806e19)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_13.EvtInterruptDpc", evt_interrupt_dpc, 0x0, 0x0, false, 0x54bbf868f128d024)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_13.EvtInterruptEnable", evt_interrupt_enable, 0x0, 0x0, false, 0x7828e81d42c45e33)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_13.EvtInterruptDisable", evt_interrupt_disable, 0x0, 0x0, false, 0xf10934a44acda533)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_13.EvtInterruptWorkItem", evt_interrupt_work_item, 0x0, 0x0, false, 0x797539264f924f48)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG_V1_13.InterruptRaw", interrupt_raw, 0x0, 0x0, false, 0xd2fd574463eab03b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG_V1_13.InterruptTranslated", interrupt_translated, 0x0, 0x0, false, 0xc981850e38d79906)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwaitlock_t*), "_WDF_INTERRUPT_CONFIG_V1_13.WaitLock", wait_lock, 0x0, 0x0, false, 0xbc830ed40a3fc607)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_13.PassiveHandling", passive_handling, 0x0, 0x0, false, 0x728196d9d0451ef5)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_13.ReportInactiveOnPowerDown", report_inactive_on_power_down, 0x0, 0x0, false, 0xd627e5325ee87575)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_13.CanWakeDevice", can_wake_device, 0x0, 0x0, false, 0x7de70f6f5972fafa)
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