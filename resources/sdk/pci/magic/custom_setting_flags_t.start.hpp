#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_CUSTOM_SETTING_FLAGS.CustomDeviceD0DelayTimeSupplied", custom_device_d0_delay_time_supplied, 0x0, 0x0, false, 0xe9fcc6b6d7481e92, 1, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_CUSTOM_SETTING_FLAGS.CustomBusDataLinkSettleTimeSupplied", custom_bus_data_link_settle_time_supplied, 0x0, 0x0, false, 0xf5890090e7fd96cd, 1, uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCI_CUSTOM_SETTING_FLAGS.AsULONGLONG", as_ulonglong, 0x0, 0x0, false, 0x464a0d217a749ebf)
#else
#define _m00
#define _m01
#define _m02
#endif