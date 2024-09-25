#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG_V1_9.Size", size, 0x0, 0x20, true, 0xf46cd001c954ecab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG_V1_9.SpinLock", spin_lock, 0x40, 0x40, true, 0x4aff5cdbfd61ec38)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_9.ShareVector", share_vector, 0x80, 0x20, true, 0x97abcb856c72dc67)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_9.FloatingSave", floating_save, 0xa0, 0x8, true, 0x505501024a4e194a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_9.AutomaticSerialization", automatic_serialization, 0xa8, 0x8, true, 0x769dffd98c8225fc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG_V1_9.EvtInterruptIsr", evt_interrupt_isr, 0xc0, 0x40, true, 0xef02232edf426861)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_9.EvtInterruptDpc", evt_interrupt_dpc, 0x100, 0x40, true, 0x1903e8324a51a231)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_9.EvtInterruptEnable", evt_interrupt_enable, 0x140, 0x40, true, 0xe9a3265664303a74)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_9.EvtInterruptDisable", evt_interrupt_disable, 0x180, 0x40, true, 0xb506123841c5783b)
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
#endif