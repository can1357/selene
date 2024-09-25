#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_ATS_INTERFACE.Size", size, 0x0, 0x0, false, 0xf19186a92f34d0b5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_ATS_INTERFACE.Version", version, 0x0, 0x0, false, 0x16c5b27f9e477e5a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_ATS_INTERFACE.Context", context, 0x0, 0x0, false, 0xfc58e82bf0f16ea4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_ATS_INTERFACE.InterfaceReference", interface_reference, 0x0, 0x0, false, 0xb71eaab8bda65f39)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_ATS_INTERFACE.InterfaceDereference", interface_dereference, 0x0, 0x0, false, 0x184aae3a8186d82f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint8_t)>*), "_PCI_ATS_INTERFACE.SetAddressTranslationServices", set_address_translation_services, 0x0, 0x0, false, 0x6d761b427a87eede)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_ATS_INTERFACE.InvalidateQueueDepth", invalidate_queue_depth, 0x0, 0x0, false, 0x5cd8218dab6ddff)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif