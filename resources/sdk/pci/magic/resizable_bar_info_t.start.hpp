#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_RESIZABLE_BAR_INFO.Capability", capability, 0x0, 0x10, true, 0x393eeff2c67d6889)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 6>), "_PCI_RESIZABLE_BAR_INFO.SizesSupported", sizes_supported, 0x20, 0xc0, true, 0xaa13309898bbe7e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_PCI_RESIZABLE_BAR_INFO.ControlRegister", control_register, 0xe0, 0x30, true, 0xc833b8142cfde6b0)
#else
#define _m00
#define _m01
#define _m02
#endif