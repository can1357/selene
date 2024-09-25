#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG.Size", size, 0x0, 0x20, true, 0x30a90010823dee54)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG.SpinLock", spin_lock, 0x40, 0x40, true, 0xd87eeaa4311cea15)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG.ShareVector", share_vector, 0x80, 0x20, true, 0x8c077dfe7cc8d7e6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG.FloatingSave", floating_save, 0xa0, 0x8, true, 0xac016f19c29c02c9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG.AutomaticSerialization", automatic_serialization, 0xa8, 0x8, true, 0xd949145c5bef0f2a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG.EvtInterruptIsr", evt_interrupt_isr, 0xc0, 0x40, true, 0x57e6b6e531f79582)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG.EvtInterruptDpc", evt_interrupt_dpc, 0x100, 0x40, true, 0x2b26fd6dce7c8db9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG.EvtInterruptEnable", evt_interrupt_enable, 0x140, 0x40, true, 0x734d14482afdc437)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG.EvtInterruptDisable", evt_interrupt_disable, 0x180, 0x40, true, 0x510e464d9caf3874)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG.EvtInterruptWorkItem", evt_interrupt_work_item, 0x1c0, 0x40, true, 0x591bd273f9e23621)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG.InterruptRaw", interrupt_raw, 0x200, 0x40, true, 0x998fc146efbb141d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG.InterruptTranslated", interrupt_translated, 0x240, 0x40, true, 0x209f60c5654d490d)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwaitlock_t*), "_WDF_INTERRUPT_CONFIG.WaitLock", wait_lock, 0x280, 0x40, true, 0x69b378b4809af238)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG.PassiveHandling", passive_handling, 0x2c0, 0x8, true, 0x35f77f9bd7be05d2)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG.ReportInactiveOnPowerDown", report_inactive_on_power_down, 0x2e0, 0x20, true, 0xdf7134e5d0bd2424)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG.CanWakeDevice", can_wake_device, 0x300, 0x8, true, 0x5eaa762727198b73)
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