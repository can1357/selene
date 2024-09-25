#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER.ConfigLock", config_lock, 0x0, 0x0, false, 0xd902acfd020a7395, 1, uint16_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_CXL_DVSEC_LOCK_REGISTER.AsUSHORT", as_ushort, 0x0, 0x0, false, 0x42d8aa5d9b89e665)
#else
#define _m00
#define _m01
#endif