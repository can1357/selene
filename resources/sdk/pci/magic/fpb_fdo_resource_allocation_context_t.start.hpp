#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_resource_allocation_context_t*), "_PCI_FPB_FDO_RESOURCE_ALLOCATION_CONTEXT.PreviousContext", previous_context, 0x0, 0x40, true, 0x525e36a1dc0131b8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::fpb_fdo_t*), "_PCI_FPB_FDO_RESOURCE_ALLOCATION_CONTEXT.FpbFdoNode", fpb_fdo_node, 0x40, 0x40, true, 0x73912d5dd08fb041)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct arbiter::test_allocation_parameters_t*), "_PCI_FPB_FDO_RESOURCE_ALLOCATION_CONTEXT.Parameters", parameters, 0x80, 0x40, true, 0x3dcb69f0889061c1)
#else
#define _m00
#define _m01
#define _m02
#endif