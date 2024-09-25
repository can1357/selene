#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0xace08d11bfacaee4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG_V1_5.SpinLock", spin_lock, 0x0, 0x0, false, 0xa2f51d67f7428078)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_5.ShareVector", share_vector, 0x0, 0x0, false, 0xb4f79fccb2efff74)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_5.FloatingSave", floating_save, 0x0, 0x0, false, 0x79395f467023b574)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_5.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0xb7240cd4f8672684)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG_V1_5.EvtInterruptIsr", evt_interrupt_isr, 0x0, 0x0, false, 0xcd9dc4c540440c30)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_5.EvtInterruptDpc", evt_interrupt_dpc, 0x0, 0x0, false, 0x39a3c84f8dffbe3e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_5.EvtInterruptEnable", evt_interrupt_enable, 0x0, 0x0, false, 0x41c6f667350a73)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_5.EvtInterruptDisable", evt_interrupt_disable, 0x0, 0x0, false, 0xc00baf95e245e44b)
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