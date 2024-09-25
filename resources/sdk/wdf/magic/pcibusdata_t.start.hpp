#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCIBUSDATA.Tag", tag, 0x0, 0x20, true, 0xa3b8612ee18476f9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCIBUSDATA.Version", version, 0x20, 0x20, true, 0x919eb1c14bf8e27a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pci_read_write_config_t ), "_PCIBUSDATA.ReadConfig", read_config, 0x40, 0x40, true, 0x970cd16aae82ad36)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pci_read_write_config_t ), "_PCIBUSDATA.WriteConfig", write_config, 0x80, 0x40, true, 0xc22047f320a0c42c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pci_pin2_line_t ), "_PCIBUSDATA.Pin2Line", pin2_line, 0xc0, 0x40, true, 0x6872d3b9cd7818aa)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pci_line2_pin_t ), "_PCIBUSDATA.Line2Pin", line2_pin, 0x100, 0x40, true, 0x69df99d27341f5df)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct pci::slot_number_t), "_PCIBUSDATA.ParentSlot", parent_slot, 0x140, 0x20, true, 0x30f65cbdaa2e2dc4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif