#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_VP8.first_part_size", first_part_size, 0x0, 0x20, true, 0x58bfe0969293ecb3)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_VP8.width", width, 0x20, 0x20, true, 0x9beb01ada0fe1fc4)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_VP8.height", height, 0x40, 0x20, true, 0x81698a017d39b7f9)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_v_px_t), "_DXVA_PicParams_VP8.CurrPic", curr_pic, 0x60, 0x8, true, 0x24d0587bf9c2930d)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP8.frame_type", frame_type, 0x68, 0x1, true, 0x1f28a13edd0cfd73, 1, uint8_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXVA_PicParams_VP8.version", version, 0x69, 0x3, true, 0x5d3d96d0081a0fe4, 3, uint8_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP8.show_frame", show_frame, 0x6c, 0x1, true, 0x14fa32b09fc471d8, 1, uint8_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_VP8.clamp_type", clamp_type, 0x6d, 0x1, true, 0x37358238615a2a2a, 1, uint8_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_VP8.ReservedFrameTag3Bits", reserved_frame_tag3_bits, 0x6e, 0x2, true, 0x9ab21efe54df402b, 2, uint8_t)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.wFrameTagFlags", w_frame_tag_flags, 0x68, 0x8, true, 0xce2b2f70edbb6695)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::segmentation_vp8_t), "_DXVA_PicParams_VP8.stVP8Segments", st_vp8_segments, 0x70, 0x60, true, 0xb983066dd7b7ce0)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.filter_type", filter_type, 0xd0, 0x8, true, 0xe3542f5b87452103)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.filter_level", filter_level, 0xd8, 0x8, true, 0x9ba4d6dbcad3b34e)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.sharpness_level", sharpness_level, 0xe0, 0x8, true, 0x1a822410182fab22)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.mode_ref_lf_delta_enabled", mode_ref_lf_delta_enabled, 0xe8, 0x8, true, 0xd2504dd2b1f3282a)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.mode_ref_lf_delta_update", mode_ref_lf_delta_update, 0xf0, 0x8, true, 0xf3f2675bd8b749a0)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 4>), "_DXVA_PicParams_VP8.ref_lf_deltas", ref_lf_deltas, 0xf8, 0x20, true, 0x513266b7045ecc6f)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 4>), "_DXVA_PicParams_VP8.mode_lf_deltas", mode_lf_deltas, 0x118, 0x20, true, 0x6f7f370e3778070)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.log2_nbr_of_dct_partitions", log2_nbr_of_dct_partitions, 0x138, 0x8, true, 0xcd23ab786a7940ed)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.base_qindex", base_qindex, 0x140, 0x8, true, 0xb80d22e56a4e3763)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_VP8.y1dc_delta_q", y1dc_delta_q, 0x148, 0x8, true, 0xc7cd272dd89503e)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_VP8.y2dc_delta_q", y2dc_delta_q, 0x150, 0x8, true, 0x658e5b900b95b2b0)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_VP8.y2ac_delta_q", y2ac_delta_q, 0x158, 0x8, true, 0xbb0f4ae13b2e548f)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_VP8.uvdc_delta_q", uvdc_delta_q, 0x160, 0x8, true, 0xf7c813f99f4c3f59)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_DXVA_PicParams_VP8.uvac_delta_q", uvac_delta_q, 0x168, 0x8, true, 0x42173de3f668ffb3)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_v_px_t), "_DXVA_PicParams_VP8.alt_fb_idx", alt_fb_idx, 0x170, 0x8, true, 0xfb33dc81085093f)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_v_px_t), "_DXVA_PicParams_VP8.gld_fb_idx", gld_fb_idx, 0x178, 0x8, true, 0x751c88cc5aeb83ca)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::pic_entry_v_px_t), "_DXVA_PicParams_VP8.lst_fb_idx", lst_fb_idx, 0x180, 0x8, true, 0x38701197018c9b07)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.ref_frame_sign_bias_golden", ref_frame_sign_bias_golden, 0x188, 0x8, true, 0x367df2e360a698ec)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.ref_frame_sign_bias_altref", ref_frame_sign_bias_altref, 0x190, 0x8, true, 0xfa1bbd5c1cd36374)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.refresh_entropy_probs", refresh_entropy_probs, 0x198, 0x8, true, 0x6761e93e27dd611f)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<sdk::array<sdk::array<uint8_t, 11>, 3>, 8>, 4>), "_DXVA_PicParams_VP8.vp8_coef_update_probs", vp8_coef_update_probs, 0x1a0, 0x0, true, 0xe7477ac57db6c382)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.mb_no_coeff_skip", mb_no_coeff_skip, 0x22a0, 0x8, true, 0x88ce73c57e6e86bb)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.prob_skip_false", prob_skip_false, 0x22a8, 0x8, true, 0x541738546488d4fd)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.prob_intra", prob_intra, 0x22b0, 0x8, true, 0x22c5567851c9de23)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.prob_last", prob_last, 0x22b8, 0x8, true, 0x18fd4092cb7f981b)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_VP8.prob_golden", prob_golden, 0x22c0, 0x8, true, 0xbe5bd975240fbd01)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_DXVA_PicParams_VP8.intra_16x16_prob", intra_16x16_prob, 0x22c8, 0x20, true, 0x41adc31e241906ad)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_DXVA_PicParams_VP8.intra_chroma_prob", intra_chroma_prob, 0x22e8, 0x18, true, 0x7a5ca30be413005d)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint8_t, 19>, 2>), "_DXVA_PicParams_VP8.vp8_mv_update_probs", vp8_mv_update_probs, 0x2300, 0x30, true, 0xaa822d5c979c1d43)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_PicParams_VP8.StatusReportFeedbackNumber", status_report_feedback_number, 0x2460, 0x20, true, 0x70f670239ce73c3d)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#endif