#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_FilmGrainCharacteristics.wFrameWidthInMbsMinus1", w_frame_width_in_mbs_minus1, 0x0, 0x10, true, 0xdee195ab21cff71b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_FilmGrainCharacteristics.wFrameHeightInMbsMinus1", w_frame_height_in_mbs_minus1, 0x10, 0x10, true, 0x7db23eff05d4997d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_h264_t), "_DXVA_FilmGrainCharacteristics.InPic", in_pic, 0x20, 0x8, true, 0x8e599a40a696b1cf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_h264_t), "_DXVA_FilmGrainCharacteristics.OutPic", out_pic, 0x28, 0x8, true, 0x80a0bf24a598bbb4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_FilmGrainCharacteristics.PicOrderCnt_offset", pic_order_cnt_offset, 0x30, 0x10, true, 0xefb994b27dbce64e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXVA_FilmGrainCharacteristics.CurrPicOrderCnt", curr_pic_order_cnt, 0x40, 0x20, true, 0xdfab40cab866d174)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_FilmGrainCharacteristics.StatusReportFeedbackNumber", status_report_feedback_number, 0x60, 0x20, true, 0xcda8b2d037a031ff)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_FilmGrainCharacteristics.model_id", model_id, 0x80, 0x8, true, 0x80940de850b232d8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_FilmGrainCharacteristics.separate_colour_description_present_flag", separate_colour_description_present_flag, 0x88, 0x8, true, 0xd0ff3df90e6678c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_FilmGrainCharacteristics.film_grain_bit_depth_luma_minus8", film_grain_bit_depth_luma_minus8, 0x90, 0x8, true, 0x1539e175a8abdd7a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_FilmGrainCharacteristics.film_grain_bit_depth_chroma_minus8", film_grain_bit_depth_chroma_minus8, 0x98, 0x8, true, 0x7895ad4862d94d69)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_FilmGrainCharacteristics.film_grain_full_range_flag", film_grain_full_range_flag, 0xa0, 0x8, true, 0xc39b57fd89bec926)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_FilmGrainCharacteristics.film_grain_colour_primaries", film_grain_colour_primaries, 0xa8, 0x8, true, 0xba4faf0a4204ac88)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_FilmGrainCharacteristics.film_grain_transfer_characteristics", film_grain_transfer_characteristics, 0xb0, 0x8, true, 0xa65cea10119c05a5)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_FilmGrainCharacteristics.film_grain_matrix_coefficients", film_grain_matrix_coefficients, 0xb8, 0x8, true, 0x9270d35c962ccd1d)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_FilmGrainCharacteristics.blending_mode_id", blending_mode_id, 0xc0, 0x8, true, 0x4029a643229728fe)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_FilmGrainCharacteristics.log2_scale_factor", log2_scale_factor, 0xc8, 0x8, true, 0x5583aa46dfc01ca5)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DXVA_FilmGrainCharacteristics.comp_model_present_flag", comp_model_present_flag, 0xd0, 0x20, true, 0xcae795486191f14a)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DXVA_FilmGrainCharacteristics.num_intensity_intervals_minus1", num_intensity_intervals_minus1, 0xf0, 0x20, true, 0x230e1a8215d29190)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DXVA_FilmGrainCharacteristics.num_model_values_minus1", num_model_values_minus1, 0x110, 0x20, true, 0xd183394d5c692474)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 16>, 3>), "_DXVA_FilmGrainCharacteristics.intensity_interval_lower_bound", intensity_interval_lower_bound, 0x130, 0x80, true, 0x3c82d4e4c3d29afa)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 16>, 3>), "_DXVA_FilmGrainCharacteristics.intensity_interval_upper_bound", intensity_interval_upper_bound, 0x2b0, 0x80, true, 0x9045e1085caff068)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<sdk::array<int16_t, 8>, 16>, 3>), "_DXVA_FilmGrainCharacteristics.comp_model_value", comp_model_value, 0x430, 0x0, true, 0xde505d6655fb3eab)
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