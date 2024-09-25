#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Status_VPx.StatusReportFeedbackNumber", status_report_feedback_number, 0x0, 0x20, true, 0xa7489fe1bc36cb7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_v_px_t), "_DXVA_Status_VPx.CurrPic", curr_pic, 0x20, 0x8, true, 0x335a1a2d85df49a3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_VPx.bBufType", b_buf_type, 0x28, 0x8, true, 0x1e18722d11c494a1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_VPx.bStatus", b_status, 0x30, 0x8, true, 0x259133b215c64dbf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_VPx.bReserved8Bits", b_reserved8_bits, 0x38, 0x8, true, 0x5b637a6a1c654933)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Status_VPx.wNumMbsAffected", w_num_mbs_affected, 0x40, 0x10, true, 0xd5cfaf84643a1c7c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif