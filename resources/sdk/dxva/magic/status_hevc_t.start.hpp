#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Status_HEVC.StatusReportFeedbackNumber", status_report_feedback_number, 0x0, 0x10, true, 0xe3251769569edb77)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_hevc_t), "_DXVA_Status_HEVC.CurrPic", curr_pic, 0x10, 0x8, true, 0x90afa94048c0ff89)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_HEVC.bBufType", b_buf_type, 0x18, 0x8, true, 0x6623aaa715cef056)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_HEVC.bStatus", b_status, 0x20, 0x8, true, 0x7f45c23293d41194)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_HEVC.bReserved8Bits", b_reserved8_bits, 0x28, 0x8, true, 0xab3f8c9fda2ee272)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Status_HEVC.wNumMbsAffected", w_num_mbs_affected, 0x30, 0x10, true, 0xbaf2e4a56716fe51)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif