#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_COMPLETION_CONTEXT.DeviceObject", device_object, 0x0, 0x40, true, 0xef2af6a0b00fa8b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_request_block_t), "_COMPLETION_CONTEXT.Srb.Srb", srb, 0x0, 0xc0, true, 0xa546e7bb5dee7dc2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::storage_request_block_t), "_COMPLETION_CONTEXT.Srb.SrbEx", srb_ex, 0x0, 0x0, true, 0x6f9c8c71be11745b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 184>), "_COMPLETION_CONTEXT.Srb.SrbExBuffer", srb_ex_buffer, 0x0, 0xc0, true, 0x48655d0f6e2ac899)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_srb_t), "_COMPLETION_CONTEXT.Srb", srb, 0x40, 0xc0, true, 0x620f93d6b16c25ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif