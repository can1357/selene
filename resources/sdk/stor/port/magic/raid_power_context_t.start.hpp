#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::scsi_power_request_block_t), "_RAID_POWER_CONTEXT.PowerSrb", power_srb, 0x0, 0xc0, true, 0x3f2da16ba4b1b3ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::storage_request_block_t), "_RAID_POWER_CONTEXT.PowerSrbEx", power_srb_ex, 0x0, 0x0, true, 0xaf9b749afba02eaa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 168>), "_RAID_POWER_CONTEXT.PowerSrbExBuffer", power_srb_ex_buffer, 0x0, 0x40, true, 0x4f109b73e1dc3842)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_entry_t*), "_RAID_POWER_CONTEXT.IoResource", io_resource, 0x540, 0x40, true, 0x3c12c990f58c7608)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_POWER_CONTEXT.InUse", in_use, 0x580, 0x8, true, 0xb0b0832eeb291d27)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_POWER_CONTEXT.D3Processing", d3_processing, 0x588, 0x8, true, 0xacfbca3e001e4356)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif