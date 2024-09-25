#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG_V1_11.Size", size, 0x0, 0x20, true, 0xccc638fcf7ed835b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG_V1_11.SpinLock", spin_lock, 0x40, 0x40, true, 0xf6ea96de683bdab4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_11.ShareVector", share_vector, 0x80, 0x20, true, 0x17af3570ab07559d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_11.FloatingSave", floating_save, 0xa0, 0x8, true, 0x52b5b434b8f519de)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_11.AutomaticSerialization", automatic_serialization, 0xa8, 0x8, true, 0x5a8f529e25c1bdce)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG_V1_11.EvtInterruptIsr", evt_interrupt_isr, 0xc0, 0x40, true, 0x47079dbae51ce671)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_11.EvtInterruptDpc", evt_interrupt_dpc, 0x100, 0x40, true, 0x281d88214d82e8be)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_11.EvtInterruptEnable", evt_interrupt_enable, 0x140, 0x40, true, 0xf15b49826fc5dbf3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_11.EvtInterruptDisable", evt_interrupt_disable, 0x180, 0x40, true, 0x82a02c5510c1b1e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_11.EvtInterruptWorkItem", evt_interrupt_work_item, 0x1c0, 0x40, true, 0x93c98b1e2ba0b734)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG_V1_11.InterruptRaw", interrupt_raw, 0x200, 0x40, true, 0xc79bcf42ab143193)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG_V1_11.InterruptTranslated", interrupt_translated, 0x240, 0x40, true, 0xef43187f59e96510)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwaitlock_t*), "_WDF_INTERRUPT_CONFIG_V1_11.WaitLock", wait_lock, 0x280, 0x40, true, 0x3949b8f1c6816e3b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_11.PassiveHandling", passive_handling, 0x2c0, 0x8, true, 0xf51a5814e5b5c08c)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_11.ReportInactiveOnPowerDown", report_inactive_on_power_down, 0x2e0, 0x20, true, 0x5e8d9ea0018b6d98)
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
#endif