#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG_V1_0.Size", size, 0x0, 0x0, false, 0x4a2eebfbbf6ca75)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG_V1_0.SpinLock", spin_lock, 0x0, 0x0, false, 0x9f707d5366e2e48f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_0.ShareVector", share_vector, 0x0, 0x0, false, 0x9e3389c58edffb0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_0.FloatingSave", floating_save, 0x0, 0x0, false, 0x572d0f523a22319f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_0.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x505d864b8c6386b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG_V1_0.EvtInterruptIsr", evt_interrupt_isr, 0x0, 0x0, false, 0xf7ea14f868e67ec1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_0.EvtInterruptDpc", evt_interrupt_dpc, 0x0, 0x0, false, 0x77ab6f0f01006776)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_0.EvtInterruptEnable", evt_interrupt_enable, 0x0, 0x0, false, 0x12616ae7501ade51)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_0.EvtInterruptDisable", evt_interrupt_disable, 0x0, 0x0, false, 0xde40964eb1dcc07)
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