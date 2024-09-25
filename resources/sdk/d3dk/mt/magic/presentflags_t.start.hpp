#if !IN_PARSER
#define _m000 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.Blt", blt, 0x0, 0x1, true, 0x8974162e7cc6787e, 1, uint32_t)
#define _m001 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.ColorFill", color_fill, 0x1, 0x1, true, 0xa5e30fb0e57338e, 1, uint32_t)
#define _m002 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.Flip", flip, 0x2, 0x1, true, 0xe447acc1279ae8d5, 1, uint32_t)
#define _m003 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.FlipDoNotFlip", flip_do_not_flip, 0x3, 0x1, true, 0x9983408a64e7deeb, 1, uint32_t)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.FlipDoNotWait", flip_do_not_wait, 0x4, 0x1, true, 0xbe2f14a1de7ae7f9, 1, uint32_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.FlipRestart", flip_restart, 0x5, 0x1, true, 0x61e5955e15bf9da9, 1, uint32_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.DstRectValid", dst_rect_valid, 0x6, 0x1, true, 0xc1db9c1c0efa45c4, 1, uint32_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.SrcRectValid", src_rect_valid, 0x7, 0x1, true, 0xc9a1c14051303cc4, 1, uint32_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.RestrictVidPnSource", restrict_vid_pn_source, 0x8, 0x1, true, 0x7437d44cf360deb6, 1, uint32_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.SrcColorKey", src_color_key, 0x9, 0x1, true, 0xc8759d92501a1576, 1, uint32_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.DstColorKey", dst_color_key, 0xa, 0x1, true, 0xbf03231b5119a2ee, 1, uint32_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.LinearToSrgb", linear_to_srgb, 0xb, 0x1, true, 0x1cf4731ded12acfc, 1, uint32_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.PresentCountValid", present_count_valid, 0xc, 0x1, true, 0x58647f8d805ce581, 1, uint32_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.Rotate", rotate, 0xd, 0x1, true, 0xd44ef9d63e0f82c7, 1, uint32_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.PresentToBitmap", present_to_bitmap, 0xe, 0x1, true, 0x58425803c2cf7996, 1, uint32_t)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.RedirectedFlip", redirected_flip, 0xf, 0x1, true, 0x35d699b96684007b, 1, uint32_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.RedirectedBlt", redirected_blt, 0x10, 0x1, true, 0xadfe8878210865de, 1, uint32_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.FlipStereo", flip_stereo, 0x11, 0x1, true, 0xfd077e4da671674, 1, uint32_t)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.FlipStereoTemporaryMono", flip_stereo_temporary_mono, 0x12, 0x1, true, 0x3a89d80228832711, 1, uint32_t)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.FlipStereoPreferRight", flip_stereo_prefer_right, 0x13, 0x1, true, 0x2805a3aeb576118c, 1, uint32_t)
#define _m020 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.BltStereoUseRight", blt_stereo_use_right, 0x14, 0x1, true, 0xb71ec583d60dff1b, 1, uint32_t)
#define _m021 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.PresentHistoryTokenOnly", present_history_token_only, 0x15, 0x1, true, 0xcf72cc3a2d2a3af7, 1, uint32_t)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.PresentRegionsValid", present_regions_valid, 0x16, 0x1, true, 0x49cf6a2f98a1931, 1, uint32_t)
#define _m023 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.PresentDDA", present_dda, 0x17, 0x1, true, 0x5e0d63a042ed4cc7, 1, uint32_t)
#define _m024 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.ProtectedContentBlankedOut", protected_content_blanked_out, 0x18, 0x1, true, 0x33a25a8d246d82a1, 1, uint32_t)
#define _m025 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.RemoteSession", remote_session, 0x19, 0x1, true, 0xeb7cb2e5f2cadf51, 1, uint32_t)
#define _m026 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.CrossAdapter", cross_adapter, 0x1a, 0x1, true, 0x2b418e423907e9c7, 1, uint32_t)
#define _m027 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.DurationValid", duration_valid, 0x1b, 0x1, true, 0x2aae0e39534fb5f4, 1, uint32_t)
#define _m028 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.PresentIndirect", present_indirect, 0x1c, 0x1, true, 0x827f2775d7e7a779, 1, uint32_t)
#define _m029 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_PRESENTFLAGS.PresentHMD", present_hmd, 0x1d, 0x1, true, 0x14d9141913bc828, 1, uint32_t)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENTFLAGS.Value", value, 0x0, 0x20, true, 0xcca3345c46531c19)
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
#endif