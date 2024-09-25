#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_MSIX_TABLE_CONFIG_INTERFACE.Size", size, 0x0, 0x10, true, 0x10b605994ab64c83)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_MSIX_TABLE_CONFIG_INTERFACE.Version", version, 0x10, 0x10, true, 0x5f1b928e49f6fcf9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PCI_MSIX_TABLE_CONFIG_INTERFACE.Context", context, 0x40, 0x40, true, 0xe4f97d9512993d77)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_MSIX_TABLE_CONFIG_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xdb7abbee1f4f38ab)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_MSIX_TABLE_CONFIG_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xd3ef286d8a6367)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppci_msix_set_entry_t ), "_PCI_MSIX_TABLE_CONFIG_INTERFACE.SetTableEntry", set_table_entry, 0x100, 0x40, true, 0x4580f4c05320fee9)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_PCI_MSIX_TABLE_CONFIG_INTERFACE.MaskTableEntry", mask_table_entry, 0x140, 0x40, true, 0xd568d9dd1225681d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t)>*), "_PCI_MSIX_TABLE_CONFIG_INTERFACE.UnmaskTableEntry", unmask_table_entry, 0x180, 0x40, true, 0x6f87a04589688b76)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppci_msix_get_entry_t ), "_PCI_MSIX_TABLE_CONFIG_INTERFACE.GetTableEntry", get_table_entry, 0x1c0, 0x40, true, 0x3ac459a3a216d9e8)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_PCI_MSIX_TABLE_CONFIG_INTERFACE.GetTableSize", get_table_size, 0x200, 0x40, true, 0x27812ce9dfe33aa0)
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