#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xed94157cdc515ff0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0x228e3d1d37034878)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_DEVICE_DESCRIPTOR.DeviceType", device_type, 0x40, 0x8, true, 0x17fd9f0c063f90f4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_DEVICE_DESCRIPTOR.DeviceTypeModifier", device_type_modifier, 0x48, 0x8, true, 0xfce4db8ab5fc6899)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_DEVICE_DESCRIPTOR.RemovableMedia", removable_media, 0x50, 0x8, true, 0x105640cc591b3b8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_DEVICE_DESCRIPTOR.CommandQueueing", command_queueing, 0x58, 0x8, true, 0xaad0cd2525668bec)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_DESCRIPTOR.VendorIdOffset", vendor_id_offset, 0x60, 0x20, true, 0xd17b98adab66961)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_DESCRIPTOR.ProductIdOffset", product_id_offset, 0x80, 0x20, true, 0x2758b8490d51d740)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_DESCRIPTOR.ProductRevisionOffset", product_revision_offset, 0xa0, 0x20, true, 0x4de5839e462293a0)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_DESCRIPTOR.SerialNumberOffset", serial_number_offset, 0xc0, 0x20, true, 0x80b419845c7cb641)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum stor::port::storage_bus_type_t), "_STORAGE_DEVICE_DESCRIPTOR.BusType", bus_type, 0xe0, 0x20, true, 0x2ba7bbdeeaa4093b)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_DESCRIPTOR.RawPropertiesLength", raw_properties_length, 0x100, 0x20, true, 0x63374791d9a003f8)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_STORAGE_DEVICE_DESCRIPTOR.RawDeviceProperties", raw_device_properties, 0x120, 0x8, true, 0xd9eb20c506793b09)
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
#define _m10
#define _m11
#define _m12
#endif