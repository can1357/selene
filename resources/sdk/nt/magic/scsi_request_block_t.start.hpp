#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCSI_REQUEST_BLOCK.Length", length, 0x0, 0x10, true, 0xe27849d7e44483e6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_REQUEST_BLOCK.Function", function, 0x10, 0x8, true, 0x1eb4c7560f0de249)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_REQUEST_BLOCK.SrbStatus", srb_status, 0x18, 0x8, true, 0x4be4c59a4d37ae97)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_REQUEST_BLOCK.ScsiStatus", scsi_status, 0x20, 0x8, true, 0x6edbeef4670aaa47)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_REQUEST_BLOCK.PathId", path_id, 0x28, 0x8, true, 0xdb6756100a9adcfa)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_REQUEST_BLOCK.TargetId", target_id, 0x30, 0x8, true, 0xecd0194698bab609)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_REQUEST_BLOCK.Lun", lun, 0x38, 0x8, true, 0xb2b607ce53a3594c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_REQUEST_BLOCK.QueueTag", queue_tag, 0x40, 0x8, true, 0x14d49ab75c8ef5e4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_REQUEST_BLOCK.QueueAction", queue_action, 0x48, 0x8, true, 0x17dbce64589d9291)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_REQUEST_BLOCK.CdbLength", cdb_length, 0x50, 0x8, true, 0xf2cabb3d6afa5c0c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_REQUEST_BLOCK.SenseInfoBufferLength", sense_info_buffer_length, 0x58, 0x8, true, 0xd94594a8d00475dc)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_REQUEST_BLOCK.SrbFlags", srb_flags, 0x60, 0x20, true, 0xccb6736c357b60f3)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_REQUEST_BLOCK.DataTransferLength", data_transfer_length, 0x80, 0x20, true, 0x354c805401325415)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_REQUEST_BLOCK.TimeOutValue", time_out_value, 0xa0, 0x20, true, 0xdf341fd4d1064cf6)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_REQUEST_BLOCK.DataBuffer", data_buffer, 0xc0, 0x40, true, 0xfdd0b38cc1253dcb)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_REQUEST_BLOCK.SenseInfoBuffer", sense_info_buffer, 0x100, 0x40, true, 0xed7eefe64d7a0e96)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_request_block_t*), "_SCSI_REQUEST_BLOCK.NextSrb", next_srb, 0x140, 0x40, true, 0x3a21a0fd9aae6dae)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_REQUEST_BLOCK.OriginalRequest", original_request, 0x180, 0x40, true, 0x81433a62c4d96fa0)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_REQUEST_BLOCK.SrbExtension", srb_extension, 0x1c0, 0x40, true, 0x65637d0df5100de2)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_REQUEST_BLOCK.InternalStatus", internal_status, 0x200, 0x20, true, 0x7c09c2ff4637f186)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_REQUEST_BLOCK.QueueSortKey", queue_sort_key, 0x200, 0x20, true, 0x2f084a1e6a0bc5ac)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_REQUEST_BLOCK.LinkTimeoutValue", link_timeout_value, 0x200, 0x20, true, 0x32983e1872f561bc)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_SCSI_REQUEST_BLOCK.Cdb", cdb, 0x240, 0x80, true, 0xb8bd6890270631ea)
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
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif