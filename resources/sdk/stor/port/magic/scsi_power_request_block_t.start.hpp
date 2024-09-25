#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCSI_POWER_REQUEST_BLOCK.Length", length, 0x0, 0x10, true, 0x9bff229c97412d8b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_POWER_REQUEST_BLOCK.Function", function, 0x10, 0x8, true, 0x51f7ca971b9fbc7b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_POWER_REQUEST_BLOCK.SrbStatus", srb_status, 0x18, 0x8, true, 0x832c43c911c601bd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_POWER_REQUEST_BLOCK.SrbPowerFlags", srb_power_flags, 0x20, 0x8, true, 0xb257f7893ce2c26c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_POWER_REQUEST_BLOCK.PathId", path_id, 0x28, 0x8, true, 0x970c9d11ecf7a1ca)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_POWER_REQUEST_BLOCK.TargetId", target_id, 0x30, 0x8, true, 0x9a3648e8144c1f9e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_POWER_REQUEST_BLOCK.Lun", lun, 0x38, 0x8, true, 0x1bdc34c3d6cccc9e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_device_power_state_t), "_SCSI_POWER_REQUEST_BLOCK.DevicePowerState", device_power_state, 0x40, 0x20, true, 0xbf26d98e427621f7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_POWER_REQUEST_BLOCK.SrbFlags", srb_flags, 0x60, 0x20, true, 0x9f23a986aea82107)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_POWER_REQUEST_BLOCK.DataTransferLength", data_transfer_length, 0x80, 0x20, true, 0x8853bfde4b337a95)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_POWER_REQUEST_BLOCK.TimeOutValue", time_out_value, 0xa0, 0x20, true, 0x41e92f9b548c471b)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_POWER_REQUEST_BLOCK.DataBuffer", data_buffer, 0xc0, 0x40, true, 0xb574f7929e1ae5b3)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_POWER_REQUEST_BLOCK.SenseInfoBuffer", sense_info_buffer, 0x100, 0x40, true, 0xfcf95804099480de)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_request_block_t*), "_SCSI_POWER_REQUEST_BLOCK.NextSrb", next_srb, 0x140, 0x40, true, 0x64e22b9774c51828)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_POWER_REQUEST_BLOCK.OriginalRequest", original_request, 0x180, 0x40, true, 0x3c05fa00ff75cd9f)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_POWER_REQUEST_BLOCK.SrbExtension", srb_extension, 0x1c0, 0x40, true, 0x8dc1c5e046a5361d)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_SCSI_POWER_REQUEST_BLOCK.PowerAction", power_action, 0x200, 0x20, true, 0xd7c5f61d6f6b1313, 32, uint32_t)
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
#define _m14
#define _m15
#define _m16
#endif