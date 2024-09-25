#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::custom_setting_flags_t), "_PCI_CUSTOM_SETTINGS.Flags", flags, 0x0, 0x0, false, 0xb66b599165c810b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CUSTOM_SETTINGS.DeviceD0DelayTimeInMilliseconds", device_d0_delay_time_in_milliseconds, 0x0, 0x0, false, 0x814a6b621f4069f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_CUSTOM_SETTINGS.BusDataLinkSettleTimeInMilliseconds", bus_data_link_settle_time_in_milliseconds, 0x0, 0x0, false, 0xcd33aff262bfd57a)
#else
#define _m00
#define _m01
#define _m02
#endif