#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_EXPRESS_DPC_WORK_ITEM.ListEntry", list_entry, 0x0, 0x80, true, 0xb9c7839fafedc9f8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXPRESS_DPC_WORK_ITEM.InUse", in_use, 0x80, 0x20, true, 0x9d7230c07409d60b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::express_bridge_t*), "_EXPRESS_DPC_WORK_ITEM.ExpressBridge", express_bridge, 0xc0, 0x40, true, 0xe76cb1468a1c362a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_t*), "_EXPRESS_DPC_WORK_ITEM.Device", device, 0x100, 0x40, true, 0xb110abf78ce23dd5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif