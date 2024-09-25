#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.Size", size, 0x0, 0x20, true, 0x83a520c9b233f949)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfspinlock_t*), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.SpinLock", spin_lock, 0x40, 0x40, true, 0xa687557e9e13cc2d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.ShareVector", share_vector, 0x80, 0x20, true, 0xcdeccfc031a9d9a0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.FloatingSave", floating_save, 0xa0, 0x8, true, 0xc1546621449e5c3d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.AutomaticSerialization", automatic_serialization, 0xa8, 0x8, true, 0xdb58a25f31299802)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_interrupt_isr_t ), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.EvtInterruptIsr", evt_interrupt_isr, 0xc0, 0x40, true, 0xf6895d8bf1b810e4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.EvtInterruptDpc", evt_interrupt_dpc, 0x100, 0x40, true, 0xea10745ee99ab970)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.EvtInterruptEnable", evt_interrupt_enable, 0x140, 0x40, true, 0x3cb514e3af8f6739)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfinterrupt_t*, struct wdf::wdfdevice_t*)>*), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.EvtInterruptDisable", evt_interrupt_disable, 0x180, 0x40, true, 0x6571184d38f287a9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfinterrupt_t*, void*)>*), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.EvtInterruptWorkItem", evt_interrupt_work_item, 0x1c0, 0x40, true, 0x4ff95b9a399079b0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.InterruptRaw", interrupt_raw, 0x200, 0x40, true, 0x90a1df366b72fc98)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.InterruptTranslated", interrupt_translated, 0x240, 0x40, true, 0x754bdea74d64d3dc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfwaitlock_t*), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.WaitLock", wait_lock, 0x280, 0x40, true, 0x96296408ce8fb91)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_INTERRUPT_CONFIG_V1_11_BETA.PassiveHandling", passive_handling, 0x2c0, 0x8, true, 0xf489a8dea7804c5d)
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
#endif