#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_REGISTRY_INFO.Size", size, 0x0, 0x20, true, 0xe67a3e4057389fb9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PORT_REGISTRY_INFO.ListEntry", list_entry, 0x40, 0x80, true, 0x5c31ea3ab432eb3b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PORT_REGISTRY_INFO.SpinLock", spin_lock, 0xc0, 0x40, true, 0x2cbeb80022dcfa0a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_PORT_REGISTRY_INFO.Buffer", buffer, 0x100, 0x40, true, 0x7043d81f5506a091)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_REGISTRY_INFO.AllocatedLength", allocated_length, 0x140, 0x20, true, 0x3ecb1c16d87ded0c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_REGISTRY_INFO.CurrentLength", current_length, 0x160, 0x20, true, 0x51fd48fed81e658e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_REGISTRY_INFO.LengthNeeded", length_needed, 0x180, 0x20, true, 0xd4d31135308849bb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_REGISTRY_INFO.Offset", offset, 0x1a0, 0x20, true, 0xdf4a8bfc352b4204)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_REGISTRY_INFO.Flags", flags, 0x1c0, 0x20, true, 0x55d7176d1df3b799)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PORT_REGISTRY_INFO.InternalStatus", internal_status, 0x1e0, 0x20, true, 0xa179e3f874abfcf1)
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