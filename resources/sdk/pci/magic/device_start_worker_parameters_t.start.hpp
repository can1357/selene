#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_PCI_DEVICE_START_WORKER_PARAMETERS.Irp", irp, 0x0, 0x40, true, 0x3129e53847960a90)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_PCI_DEVICE_START_WORKER_PARAMETERS.Resources", resources, 0x40, 0x40, true, 0x60f6be76fff9edf1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::resource_list_t*), "_PCI_DEVICE_START_WORKER_PARAMETERS.ResourcesTranslated", resources_translated, 0x80, 0x40, true, 0x74e124c19630adc7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE_START_WORKER_PARAMETERS.Complete", complete, 0xc0, 0x8, true, 0xe4e44b8573138a32)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif