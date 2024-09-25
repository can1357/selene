#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "DISPLAYCONFIG_SET_TARGET_PERSISTENCE.header", header, 0x0, 0xa0, true, 0x3972f12672bf2ef)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DISPLAYCONFIG_SET_TARGET_PERSISTENCE.bootPersistenceOn", boot_persistence_on, 0xa0, 0x1, true, 0x170f7fa1574db9e7, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_SET_TARGET_PERSISTENCE.value", value, 0xa0, 0x20, true, 0xcaf29c1a1e17c3a2)
#else
#define _m00
#define _m01
#define _m02
#endif