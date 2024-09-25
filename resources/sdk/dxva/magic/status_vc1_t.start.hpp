#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Status_VC1.StatusReportFeedbackNumber", status_report_feedback_number, 0x0, 0x10, true, 0x96c75275939644c5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Status_VC1.wDecodedPictureIndex", w_decoded_picture_index, 0x10, 0x10, true, 0x4b25413ad7aecfa8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Status_VC1.wDeblockedPictureIndex", w_deblocked_picture_index, 0x20, 0x10, true, 0x17dc0e81583ad54e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_VC1.bPicStructure", b_pic_structure, 0x30, 0x8, true, 0x58a8cffa853a4197)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_VC1.bBufType", b_buf_type, 0x38, 0x8, true, 0x856a73a83a83a42)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_VC1.bStatus", b_status, 0x40, 0x8, true, 0x3a91d5a1e475a95f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_Status_VC1.bReserved8Bits", b_reserved8_bits, 0x48, 0x8, true, 0xe65ca2c4db331b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Status_VC1.wNumMbsAffected", w_num_mbs_affected, 0x50, 0x10, true, 0xfad7b2d91e265375)
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