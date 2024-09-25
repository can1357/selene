#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::capabilities_header_t), "PCI_MSIX_CAPABILITY.Header", header, 0x0, 0x10, true, 0xc43b4d2aba3c1e2f)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "PCI_MSIX_CAPABILITY.MessageControl.TableSize", table_size, 0x0, 0xb, true, 0x4121c009469d3897, 11, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_MSIX_CAPABILITY.MessageControl.FunctionMask", function_mask, 0xe, 0x1, true, 0xa6e722e4158b4ad5, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "PCI_MSIX_CAPABILITY.MessageControl.MSIXEnable", msix_enable, 0xf, 0x1, true, 0x1dcaf78451ada303, 1, uint16_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_message_control_t), "PCI_MSIX_CAPABILITY.MessageControl", message_control, 0x10, 0x10, true, 0x35246d6b0412697e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::msix_table_pointer_t), "PCI_MSIX_CAPABILITY.MessageTable", message_table, 0x20, 0x20, true, 0xf953c5eb82b95387)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::msix_table_pointer_t), "PCI_MSIX_CAPABILITY.PBATable", pba_table, 0x40, 0x20, true, 0x41625328040216f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif