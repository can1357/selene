#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_MPEG4_PART2.short_video_header", short_video_header, 0x0, 0x8, true, 0x8a1b19809fdf1dcc)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_MPEG4_PART2.vop_coding_type", vop_coding_type, 0x8, 0x8, true, 0x601b591e743c777b)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_MPEG4_PART2.vop_quant", vop_quant, 0x10, 0x8, true, 0x5aa9b66b284e9648)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.wDecodedPictureIndex", w_decoded_picture_index, 0x18, 0x10, true, 0xadb7bd9f85536896)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.wDeblockedPictureIndex", w_deblocked_picture_index, 0x28, 0x10, true, 0xd2ff033be64505db)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.wForwardRefPictureIndex", w_forward_ref_picture_index, 0x38, 0x10, true, 0x8a216e36018e0088)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.wBackwardRefPictureIndex", w_backward_ref_picture_index, 0x48, 0x10, true, 0x35a49703a407158)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.vop_time_increment_resolution", vop_time_increment_resolution, 0x58, 0x10, true, 0x9606c587674cae5c)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_DXVA_PicParams_MPEG4_PART2.TRB", trb, 0x68, 0x40, true, 0xf1e3c0674c2450c1)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_DXVA_PicParams_MPEG4_PART2.TRD", trd, 0xa8, 0x40, true, 0xfbd9610c2be5ee09)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_MPEG4_PART2.unPicPostProc", un_pic_post_proc, 0xe8, 0x2, true, 0x7fa18d03761bab80, 2, uint16_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.interlaced", interlaced, 0xea, 0x1, true, 0x3551acb4cfcca648, 1, uint16_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.quant_type", quant_type, 0xeb, 0x1, true, 0x937cbcb9e0d86a6f, 1, uint16_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.quarter_sample", quarter_sample, 0xec, 0x1, true, 0x225ae09242be18db, 1, uint16_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.resync_marker_disable", resync_marker_disable, 0xed, 0x1, true, 0x2e2707b80d951206, 1, uint16_t)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.data_partitioned", data_partitioned, 0xee, 0x1, true, 0x62719ca3cdbaaefe, 1, uint16_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.reversible_vlc", reversible_vlc, 0xef, 0x1, true, 0xfb6338f51f832697, 1, uint16_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.reduced_resolution_vop_enable", reduced_resolution_vop_enable, 0xf0, 0x1, true, 0x2627762be3bb1a0, 1, uint16_t)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.vop_coded", vop_coded, 0xf1, 0x1, true, 0xaf3544d0c5246a76, 1, uint16_t)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.vop_rounding_type", vop_rounding_type, 0xf2, 0x1, true, 0x79d222416c78295, 1, uint16_t)
#define _m020 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXVA_PicParams_MPEG4_PART2.intra_dc_vlc_thr", intra_dc_vlc_thr, 0xf3, 0x3, true, 0xa4259db8be49ac71, 3, uint16_t)
#define _m021 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.top_field_first", top_field_first, 0xf6, 0x1, true, 0x4185ffeffdd9d08d, 1, uint16_t)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXVA_PicParams_MPEG4_PART2.alternate_vertical_scan_flag", alternate_vertical_scan_flag, 0xf7, 0x1, true, 0x2e4f90981d7dcfc, 1, uint16_t)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.wPicFlagBitFields", w_pic_flag_bit_fields, 0xe8, 0x10, true, 0x65bbc54c7cf9c94e)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_MPEG4_PART2.profile_and_level_indication", profile_and_level_indication, 0xf8, 0x8, true, 0xec126556005f548e)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_MPEG4_PART2.video_object_layer_verid", video_object_layer_verid, 0x100, 0x8, true, 0x8c4c2a1962bd6bda)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.vop_width", vop_width, 0x108, 0x10, true, 0x5aeca69155bebe6a)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.vop_height", vop_height, 0x118, 0x10, true, 0xe85a90da12560c3e)
#define _m028 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_MPEG4_PART2.sprite_enable", sprite_enable, 0x128, 0x2, true, 0x7602c5ada23aa1c1, 2, uint16_t)
#define _m029 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_DXVA_PicParams_MPEG4_PART2.no_of_sprite_warping_points", no_of_sprite_warping_points, 0x12a, 0x6, true, 0xbd55a473c4c97b76, 6, uint16_t)
#define _m030 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DXVA_PicParams_MPEG4_PART2.sprite_warping_accuracy", sprite_warping_accuracy, 0x130, 0x2, true, 0x78abce514295956a, 2, uint16_t)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.wSpriteBitFields", w_sprite_bit_fields, 0x128, 0x10, true, 0xd2727b9dc29b92c)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<int16_t, 2>, 4>), "_DXVA_PicParams_MPEG4_PART2.warping_mv", warping_mv, 0x138, 0x80, true, 0xc4fc8a60b3701f1b)
#define _m033 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXVA_PicParams_MPEG4_PART2.vop_fcode_forward", vop_fcode_forward, 0x1b8, 0x3, true, 0xb34a3b80047102f6, 3, uint8_t)
#define _m034 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_DXVA_PicParams_MPEG4_PART2.vop_fcode_backward", vop_fcode_backward, 0x1bb, 0x3, true, 0xaf25aa29234b722, 3, uint8_t)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_PicParams_MPEG4_PART2.wFcodeBitFields", w_fcode_bit_fields, 0x1b8, 0x8, true, 0x5220e473c939a3ef)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.StatusReportFeedbackNumber", status_report_feedback_number, 0x1c0, 0x10, true, 0x7eb2a68097c1d6f9)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.Reserved16BitsA", reserved16_bits_a, 0x1d0, 0x10, true, 0xb81d4d9195c2093a)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_PicParams_MPEG4_PART2.Reserved16BitsB", reserved16_bits_b, 0x1e0, 0x10, true, 0x14a3e7539d21f5b5)
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
#endif