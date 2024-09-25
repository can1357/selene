#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0xf2ae31c2f0af7378)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG_V1_15.SpinLock", spin_lock, 0x0, 0x0, false, 0xc2b63e78e0e46b6f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_15.ShareVector", share_vector, 0x0, 0x0, false, 0xba6b0cfc7fcee60a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_15.FloatingSave", floating_save, 0x0, 0x0, false, 0xa4f821ba46f07918)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_15.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xa661285f6fd2541a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG_V1_15.EvtInterruptIsr", evt_interrupt_isr, 0x0, 0x0, false, 0x217be337a3cbf837)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_15.EvtInterruptDpc", evt_interrupt_dpc, 0x0, 0x0, false, 0x779e1bb84cf6e5e2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_15.EvtInterruptEnable", evt_interrupt_enable, 0x0, 0x0, false, 0x5602cd5a6d58a37d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_15.EvtInterruptDisable", evt_interrupt_disable, 0x0, 0x0, false, 0x2bae037c81b6c031)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_15.EvtInterruptWorkItem", evt_interrupt_work_item, 0x0, 0x0, false, 0xd04b813ce2b0d581)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG_V1_15.InterruptRaw", interrupt_raw, 0x0, 0x0, false, 0x245bc68543ba6c2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG_V1_15.InterruptTranslated", interrupt_translated, 0x0, 0x0, false, 0x269051b59c5d250c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwaitlock_t*), "_WDF_INTERRUPT_CONFIG_V1_15.WaitLock", wait_lock, 0x0, 0x0, false, 0xd5c86ab21116caf3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_15.PassiveHandling", passive_handling, 0x0, 0x0, false, 0x7b6b465216bc6479)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_15.ReportInactiveOnPowerDown", report_inactive_on_power_down, 0x0, 0x0, false, 0xb67b2a11138c98ad)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_15.CanWakeDevice", can_wake_device, 0x0, 0x0, false, 0x934f1421e3c61bf1)
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