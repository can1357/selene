#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_Status_H264.StatusReportFeedbackNumber", status_report_feedback_number, 0x0, 0x20, true, 0x570f4e26dfc0f618)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_h264_t), "_DXVA_Status_H264.CurrPic", curr_pic, 0x20, 0x8, true, 0xe5f0d233698afe1a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_H264.field_pic_flag", field_pic_flag, 0x28, 0x8, true, 0x875f2b73e16cf818)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_H264.bDXVA_Func", b_dxva_func, 0x30, 0x8, true, 0x9b7dfcd94c35f546)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_H264.bBufType", b_buf_type, 0x38, 0x8, true, 0xc0dde7c15ac8177b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_H264.bStatus", b_status, 0x40, 0x8, true, 0x2a954c94749c3932)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_H264.bReserved8Bits", b_reserved8_bits, 0x48, 0x8, true, 0xa3a9844b16b6c265)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Status_H264.wNumMbsAffected", w_num_mbs_affected, 0x50, 0x10, true, 0x6980eb0d9be25223)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif