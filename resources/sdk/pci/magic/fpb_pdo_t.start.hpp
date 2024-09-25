#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_t*), "_PCI_FPB_PDO.Device", device, 0x0, 0x40, true, 0x3147407de98222fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_t*), "_PCI_FPB_PDO.Parent", parent, 0x40, 0x40, true, 0x53970f15c64a6670)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_capability_t), "_PCI_FPB_PDO.FpbCapability", fpb_capability, 0x80, 0x20, true, 0xb7639d2dfccd45ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::fpb_pdo_static_flags_t), "_PCI_FPB_PDO.FlagsStatic", flags_static, 0x1a0, 0x20, true, 0x59d797dab30e6199)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::fpb_pdo_dynamic_flags_t), "_PCI_FPB_PDO.FlagsRuntime", flags_runtime, 0x1c0, 0x20, true, 0xd0d22c0efadac9bd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::fpb_capability_support_t), "_PCI_FPB_PDO.FpbSupportInfo", fpb_support_info, 0x1e0, 0x20, true, 0x53e0761a1206b66)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_pdo_resource_t), "_PCI_FPB_PDO.Resource", resource, 0x200, 0x40, true, 0x717c50cc32f9a7de)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif