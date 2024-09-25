#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG_V1_7.Size", size, 0x0, 0x0, false, 0xf44328a4003731f1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG_V1_7.SpinLock", spin_lock, 0x0, 0x0, false, 0x9ad9f2aaef067ed7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_7.ShareVector", share_vector, 0x0, 0x0, false, 0xbd619020c5b59f9f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_7.FloatingSave", floating_save, 0x0, 0x0, false, 0x77f7af2ddbe1431a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_7.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x6ac5246c81b539b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG_V1_7.EvtInterruptIsr", evt_interrupt_isr, 0x0, 0x0, false, 0x88629df138a61cda)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_7.EvtInterruptDpc", evt_interrupt_dpc, 0x0, 0x0, false, 0x62fb463d5e44be6e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_7.EvtInterruptEnable", evt_interrupt_enable, 0x0, 0x0, false, 0xc75826fe8b1e6e23)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_7.EvtInterruptDisable", evt_interrupt_disable, 0x0, 0x0, false, 0x97112a85886ecc85)
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