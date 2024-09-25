#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::fpb_capability_header_t), "_PCI_FPB_CAPABILITY.Header", header, 0x0, 0x20, true, 0x5ab8d89833c2251e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::fpb_capabilities_register_t), "_PCI_FPB_CAPABILITY.CapabilitiesRegister", capabilities_register, 0x20, 0x20, true, 0xfa926082a2ab2f90)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::fpb_rid_vector_control1_register_t), "_PCI_FPB_CAPABILITY.RidVectorControl1Register", rid_vector_control1_register, 0x40, 0x20, true, 0x46d1e62af0ebb17c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::fpb_rid_vector_control2_register_t), "_PCI_FPB_CAPABILITY.RidVectorControl2Register", rid_vector_control2_register, 0x60, 0x20, true, 0x8024ee0f14f80787)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::fpb_mem_low_vector_control_register_t), "_PCI_FPB_CAPABILITY.MemLowVectorControlRegister", mem_low_vector_control_register, 0x80, 0x20, true, 0x3e743741503597fa)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::fpb_mem_high_vector_control1_register_t), "_PCI_FPB_CAPABILITY.MemHighVectorControl1Register", mem_high_vector_control1_register, 0xa0, 0x20, true, 0xa1a421360b38232b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::fpb_mem_high_vector_control2_register_t), "_PCI_FPB_CAPABILITY.MemHighVectorControl2Register", mem_high_vector_control2_register, 0xc0, 0x20, true, 0x7bc8b6074fefed48)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union pci::fpb_vector_access_control_register_t), "_PCI_FPB_CAPABILITY.VectorAccessControlRegister", vector_access_control_register, 0xe0, 0x20, true, 0x271613c283e6488c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::fpb_vector_access_data_register_t), "_PCI_FPB_CAPABILITY.VectorAccessDataRegister", vector_access_data_register, 0x100, 0x20, true, 0x9f8293ff66a9ae9c)
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
#endif