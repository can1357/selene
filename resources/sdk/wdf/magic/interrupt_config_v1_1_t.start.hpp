#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0x98a712ffbda5d140)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG_V1_1.SpinLock", spin_lock, 0x0, 0x0, false, 0xaa3ccc90b449940e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_1.ShareVector", share_vector, 0x0, 0x0, false, 0x53d7e79e14658d6a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_1.FloatingSave", floating_save, 0x0, 0x0, false, 0xf440716df1f613ca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_1.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x37ea074c2e67a92a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG_V1_1.EvtInterruptIsr", evt_interrupt_isr, 0x0, 0x0, false, 0x2f843f60aa1e693d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_1.EvtInterruptDpc", evt_interrupt_dpc, 0x0, 0x0, false, 0xc0fd5bd16019ae5d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_1.EvtInterruptEnable", evt_interrupt_enable, 0x0, 0x0, false, 0xe1ff029ee6de3076)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_1.EvtInterruptDisable", evt_interrupt_disable, 0x0, 0x0, false, 0xca59ebe44cfe0d31)
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