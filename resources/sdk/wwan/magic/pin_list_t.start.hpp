#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_desc_t), "_WWAN_PIN_LIST.WwanPinDescPin1", wwan_pin_desc_pin1, 0x0, 0x80, true, 0xc92b0ecbf83cb3bb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_desc_t), "_WWAN_PIN_LIST.WwanPinDescPin2", wwan_pin_desc_pin2, 0x80, 0x80, true, 0x806a840e6194776e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_desc_t), "_WWAN_PIN_LIST.WwanPinDescDeviceSimPin", wwan_pin_desc_device_sim_pin, 0x100, 0x80, true, 0x6fb9d1c07febd7e6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_desc_t), "_WWAN_PIN_LIST.WwanPinDescDeviceFirstSimPin", wwan_pin_desc_device_first_sim_pin, 0x180, 0x80, true, 0x428793228a0efdd1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_desc_t), "_WWAN_PIN_LIST.WwanPinDescNetworkPin", wwan_pin_desc_network_pin, 0x200, 0x80, true, 0x1fc2cfca582f7170)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_desc_t), "_WWAN_PIN_LIST.WwanPinDescNetworkSubsetPin", wwan_pin_desc_network_subset_pin, 0x280, 0x80, true, 0xf3fcda25f8734953)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_desc_t), "_WWAN_PIN_LIST.WwanPinDescSvcProviderPin", wwan_pin_desc_svc_provider_pin, 0x300, 0x80, true, 0xdc0b90395bb94c7d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_desc_t), "_WWAN_PIN_LIST.WwanPinDescCorporatePin", wwan_pin_desc_corporate_pin, 0x380, 0x80, true, 0x7857b5d49b36f938)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_desc_t), "_WWAN_PIN_LIST.WwanPinDescSubsidyLock", wwan_pin_desc_subsidy_lock, 0x400, 0x80, true, 0x7136e4e3a9761daa)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_desc_t), "_WWAN_PIN_LIST.WwanPinDescCustom", wwan_pin_desc_custom, 0x480, 0x80, true, 0x86bcbea049703520)
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
#endif