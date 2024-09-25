#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::express_device_type_t), "_PCI_WHEA_CONTEXT.Type", type, 0x0, 0x0, false, 0x81fbfe6bf69c17b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_WHEA_CONTEXT.WheaInitialized", whea_initialized, 0x0, 0x0, false, 0x75bcb1ba190d4756)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_WHEA_CONTEXT.Context", context, 0x0, 0x0, false, 0xa27358322089d641)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::error_source_descriptor_t*), "_PCI_WHEA_CONTEXT.ErrorSource", error_source, 0x0, 0x0, false, 0xcb15865a88f593e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif