#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER.Version", version, 0x0, 0x10, true, 0x3a084ac47d61e0f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER.Status", status, 0x10, 0x10, true, 0x88681146743b76f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER.Length", length, 0x20, 0x20, true, 0xfcf00ad3c2e31c21)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::firmware_bus_caps_t), "_PCI_FIRMWARE_BUS_CAPS_RETURN_BUFFER.Caps", caps, 0x40, 0x80, true, 0x134739f4217ad86d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif