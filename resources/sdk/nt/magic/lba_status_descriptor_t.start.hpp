#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_LBA_STATUS_DESCRIPTOR.StartingLBA", starting_lba, 0x0, 0x40, true, 0x7703f62b6e1fcc06)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_LBA_STATUS_DESCRIPTOR.LogicalBlockCount", logical_block_count, 0x40, 0x20, true, 0x133053da9fb59251)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_LBA_STATUS_DESCRIPTOR.ProvisioningStatus", provisioning_status, 0x60, 0x4, true, 0x44840ad2ad80794c, 4, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#endif