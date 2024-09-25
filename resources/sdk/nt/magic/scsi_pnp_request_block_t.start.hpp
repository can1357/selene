#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SCSI_PNP_REQUEST_BLOCK.Length", length, 0x0, 0x10, true, 0x76b215e1d7c41650)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PNP_REQUEST_BLOCK.Function", function, 0x10, 0x8, true, 0x52cc95e83a5f5c76)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PNP_REQUEST_BLOCK.SrbStatus", srb_status, 0x18, 0x8, true, 0xe3ed5342476458a5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PNP_REQUEST_BLOCK.PnPSubFunction", pn_p_sub_function, 0x20, 0x8, true, 0x3a9447db7cdbac0a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PNP_REQUEST_BLOCK.PathId", path_id, 0x28, 0x8, true, 0xfd082a748a7a0a58)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PNP_REQUEST_BLOCK.TargetId", target_id, 0x30, 0x8, true, 0x31168752ac5e0771)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SCSI_PNP_REQUEST_BLOCK.Lun", lun, 0x38, 0x8, true, 0x5106696f10047ff2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_pn_p_action_t), "_SCSI_PNP_REQUEST_BLOCK.PnPAction", pn_p_action, 0x40, 0x20, true, 0x9c879d02e98e6322)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PNP_REQUEST_BLOCK.SrbFlags", srb_flags, 0x60, 0x20, true, 0x712389c67ba9e8c0)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PNP_REQUEST_BLOCK.DataTransferLength", data_transfer_length, 0x80, 0x20, true, 0x4306f43ad2f07849)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PNP_REQUEST_BLOCK.TimeOutValue", time_out_value, 0xa0, 0x20, true, 0x808dedc47cf821bd)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_PNP_REQUEST_BLOCK.DataBuffer", data_buffer, 0xc0, 0x40, true, 0x7a7ed0b530ab5cec)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_PNP_REQUEST_BLOCK.SenseInfoBuffer", sense_info_buffer, 0x100, 0x40, true, 0x6813831b85f67327)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::scsi_request_block_t*), "_SCSI_PNP_REQUEST_BLOCK.NextSrb", next_srb, 0x140, 0x40, true, 0xbb43bf75ef761d7e)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_PNP_REQUEST_BLOCK.OriginalRequest", original_request, 0x180, 0x40, true, 0xb930ad2d4868af76)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SCSI_PNP_REQUEST_BLOCK.SrbExtension", srb_extension, 0x1c0, 0x40, true, 0xf1c6116c6d0facc0)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SCSI_PNP_REQUEST_BLOCK.SrbPnPFlags", srb_pn_p_flags, 0x200, 0x20, true, 0x6d4240cb778c167b)
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