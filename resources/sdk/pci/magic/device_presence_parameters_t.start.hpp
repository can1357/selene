#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE_PRESENCE_PARAMETERS.Size", size, 0x0, 0x20, true, 0xd0e0d78737a0fbfd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE_PRESENCE_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0x972b5f08900fdcfe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE_PRESENCE_PARAMETERS.VendorID", vendor_id, 0x40, 0x10, true, 0xbcea359885fcb77d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE_PRESENCE_PARAMETERS.DeviceID", device_id, 0x50, 0x10, true, 0x68128dcb4d5251ad)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE_PRESENCE_PARAMETERS.RevisionID", revision_id, 0x60, 0x8, true, 0x8d291159f90dd1d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE_PRESENCE_PARAMETERS.SubVendorID", sub_vendor_id, 0x70, 0x10, true, 0x1c7d74f94996ebc8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE_PRESENCE_PARAMETERS.SubSystemID", sub_system_id, 0x80, 0x10, true, 0xe77e5762e7d39424)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE_PRESENCE_PARAMETERS.BaseClass", base_class, 0x90, 0x8, true, 0x6d0ee8984350a9e5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE_PRESENCE_PARAMETERS.SubClass", sub_class, 0x98, 0x8, true, 0xe42e361b6549381c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_DEVICE_PRESENCE_PARAMETERS.ProgIf", prog_if, 0xa0, 0x8, true, 0xf93f97d75b097a8f)
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