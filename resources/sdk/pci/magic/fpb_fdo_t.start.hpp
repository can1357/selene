#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::bus_t*), "_PCI_FPB_FDO.Bus", bus, 0x0, 0x40, true, 0xd45da137084a58f0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_t*), "_PCI_FPB_FDO.Root", root, 0x40, 0x40, true, 0x43edf9cb30c1ba9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_t*), "_PCI_FPB_FDO.Parent", parent, 0x80, 0x40, true, 0xf4b4ead4ef316a4a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_t*), "_PCI_FPB_FDO.ChildrenHead", children_head, 0xc0, 0x40, true, 0x9ea7f2f796d527eb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_t*), "_PCI_FPB_FDO.ChildrenTail", children_tail, 0x100, 0x40, true, 0x22301587faed4ea3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_t*), "_PCI_FPB_FDO.Sibling", sibling, 0x140, 0x40, true, 0xc07a8611fa4011e1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::fpb_capability_support_t), "_PCI_FPB_FDO.FpbSupportInfo", fpb_support_info, 0x180, 0x20, true, 0x9862638a063ac09)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::fpb_fdo_resource_t), "_PCI_FPB_FDO.Resource", resource, 0x1c0, 0xc0, true, 0xf6392ff5d040f898)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_resource_allocation_context_t), "_PCI_FPB_FDO.ArbitrationContext", arbitration_context, 0x480, 0xc0, true, 0x3312289506ef79d5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PCI_FPB_FDO.FpbLock", fpb_lock, 0x540, 0xc0, true, 0x54945f067ae6146e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::fpb_fdo_static_flags_t), "_PCI_FPB_FDO.FlagsStatic", flags_static, 0x600, 0x20, true, 0xddcb605427a2073d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::fpb_fdo_dynamic_flags_t), "_PCI_FPB_FDO.FlagsRuntime", flags_runtime, 0x620, 0x20, true, 0xff2219353048d675)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PCI_FPB_FDO.Context", context, 0x640, 0x40, true, 0x65fb3c350a8a1b38)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, uint8_t*)>*), "_PCI_FPB_FDO.FpbReadCapability", fpb_read_capability, 0x680, 0x40, true, 0x8b7ba929ed1ed3cd)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t, uint8_t*)>*), "_PCI_FPB_FDO.FpbWriteCapability", fpb_write_capability, 0x6c0, 0x40, true, 0xbb33e4be616202e9)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, enum pci::fpb_resource_type_t, struct pci::fpb_resource_descriptor_t**)>*), "_PCI_FPB_FDO.GetResourceDescriptor", get_resource_descriptor, 0x700, 0x40, true, 0xe69d79e7f1c224d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, enum pci::fpb_resource_type_t, uint64_t, uint64_t, uint8_t)>*), "_PCI_FPB_FDO.SetResourceDescriptor", set_resource_descriptor, 0x740, 0x40, true, 0x7c31835577fe0533)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, enum pci::fpb_resource_type_t, uint8_t)>*), "_PCI_FPB_FDO.CommitResourceDescriptor", commit_resource_descriptor, 0x780, 0x40, true, 0x7cdad680c71d8768)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t*, struct cm::resource_list_t**, struct cm::resource_list_t**, uint32_t*)>*), "_PCI_FPB_FDO.GetCurrentResourceList", get_current_resource_list, 0x7c0, 0x40, true, 0x93c01855d8699dbf)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#endif