#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ADAPTER_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x9b66935eb61d9b1b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ADAPTER_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xad68b2f082675d77)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ADAPTER_DESCRIPTOR.MaximumTransferLength", maximum_transfer_length, 0x40, 0x20, true, 0x59b8fadd16bd7bc8)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ADAPTER_DESCRIPTOR.MaximumPhysicalPages", maximum_physical_pages, 0x60, 0x20, true, 0x2996b31299acfb29)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ADAPTER_DESCRIPTOR.AlignmentMask", alignment_mask, 0x80, 0x20, true, 0xd9b6167170942eaf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ADAPTER_DESCRIPTOR.AdapterUsesPio", adapter_uses_pio, 0xa0, 0x8, true, 0x2b50f9146fa0c7f1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ADAPTER_DESCRIPTOR.AdapterScansDown", adapter_scans_down, 0xa8, 0x8, true, 0x8a5b1605175f112b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ADAPTER_DESCRIPTOR.CommandQueueing", command_queueing, 0xb0, 0x8, true, 0x289834ef3c3fc789)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ADAPTER_DESCRIPTOR.AcceleratedTransfer", accelerated_transfer, 0xb8, 0x8, true, 0x8eb745b3b9da15e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ADAPTER_DESCRIPTOR.BusType", bus_type, 0xc0, 0x8, true, 0x6fdb49d17123425c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_ADAPTER_DESCRIPTOR.BusMajorVersion", bus_major_version, 0xd0, 0x10, true, 0x2dae14b7835d9c01)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_ADAPTER_DESCRIPTOR.BusMinorVersion", bus_minor_version, 0xe0, 0x10, true, 0xf67b23afc1c47c67)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ADAPTER_DESCRIPTOR.SrbType", srb_type, 0xf0, 0x8, true, 0x9c314bd3dfb99e57)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_ADAPTER_DESCRIPTOR.AddressType", address_type, 0xf8, 0x8, true, 0x3fd90d890e4a39ad)
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
#define _m13
#endif