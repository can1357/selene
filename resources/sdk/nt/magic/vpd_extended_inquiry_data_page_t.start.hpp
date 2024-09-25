#if !IN_PARSER
#define _m000 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.DeviceType", device_type, 0x0, 0x5, true, 0x2f26ab2b31944b2d, 5, uint8_t)
#define _m001 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0xfbfbeae5bd758211, 3, uint8_t)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.PageCode", page_code, 0x8, 0x8, true, 0x4181783cf951d728)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.PageLength", page_length, 0x10, 0x10, true, 0x6f7ff9f05bcc97f)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.RefChk", ref_chk, 0x20, 0x1, true, 0xf8db2e311855deae, 1, uint8_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.AppChk", app_chk, 0x21, 0x1, true, 0x94bebb34edbcac55, 1, uint8_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.GrdChk", grd_chk, 0x22, 0x1, true, 0x4b9ba2e3526852b5, 1, uint8_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.Spt", spt, 0x23, 0x3, true, 0xf1588b51321600e3, 3, uint8_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.ActivateMicrocode", activate_microcode, 0x26, 0x2, true, 0x1bb25d0bcf341017, 2, uint8_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.SimpSup", simp_sup, 0x28, 0x1, true, 0xe954ac1fed9b6ee0, 1, uint8_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.OrdSup", ord_sup, 0x29, 0x1, true, 0x9f27c0e1f954c026, 1, uint8_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.HeadSup", head_sup, 0x2a, 0x1, true, 0x9f8f0a4840abc0d9, 1, uint8_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.PriorSup", prior_sup, 0x2b, 0x1, true, 0xd81d1f806e495d84, 1, uint8_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.GroupSup", group_sup, 0x2c, 0x1, true, 0xaa7be5e4b9b4c827, 1, uint8_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.UaskSup", uask_sup, 0x2d, 0x1, true, 0x6bc16139a598702a, 1, uint8_t)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.VSup", v_sup, 0x30, 0x1, true, 0xf3f874cb45593d4d, 1, uint8_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.NvSup", nv_sup, 0x31, 0x1, true, 0x88a364b6d254ffac, 1, uint8_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.Obsolete0", obsolete0, 0x32, 0x1, true, 0x836019f914d5d614, 1, uint8_t)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.WuSup", wu_sup, 0x33, 0x1, true, 0xad8abe3cc2f01d43, 1, uint8_t)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.LuiClr", lui_clr, 0x38, 0x1, true, 0x741e6e60ad1f62af, 1, uint8_t)
#define _m020 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.PiiSup", pii_sup, 0x3c, 0x1, true, 0x91885fdd8089a40f, 1, uint8_t)
#define _m021 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.NoPiChk", no_pi_chk, 0x3d, 0x1, true, 0x8a96406337b2ffdb, 1, uint8_t)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.Obsolete1", obsolete1, 0x40, 0x1, true, 0x9166c21d89264768, 1, uint8_t)
#define _m023 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.HssRelef", hss_relef, 0x41, 0x1, true, 0x837ea9580026be7a, 1, uint8_t)
#define _m024 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.RtdSup", rtd_sup, 0x43, 0x1, true, 0xc2722fa79e86bb8c, 1, uint8_t)
#define _m025 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.RSup", r_sup, 0x44, 0x1, true, 0x34c0c6ef7f5af03f, 1, uint8_t)
#define _m026 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.LuCollectionType", lu_collection_type, 0x45, 0x3, true, 0x65c922f15182539c, 3, uint8_t)
#define _m027 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.Multi_i_t_Nexus_Microcode_Download", multi_i_t_nexus_microcode_download, 0x48, 0x4, true, 0x803781df2909156f, 4, uint8_t)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.ExtendedSelfTestCompletionMinutes", extended_self_test_completion_minutes, 0x50, 0x10, true, 0xdbde3ba232b808b0)
#define _m029 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.VsaSup", vsa_sup, 0x65, 0x1, true, 0x3978afd033b3b716, 1, uint8_t)
#define _m030 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.HraSup", hra_sup, 0x66, 0x1, true, 0xa43a0617023dc775, 1, uint8_t)
#define _m031 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.PoaSup", poa_sup, 0x67, 0x1, true, 0x29230eb74b2a7b80, 1, uint8_t)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.MaxSupportedSenseDataLength", max_supported_sense_data_length, 0x68, 0x8, true, 0xff2eb4c86a277713)
#define _m033 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.Nrd0", nrd0, 0x70, 0x1, true, 0xce65bdf6396e0203, 1, uint8_t)
#define _m034 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.Nrd1", nrd1, 0x71, 0x1, true, 0xcbd1db4d3fd81812, 1, uint8_t)
#define _m035 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.Sac", sac, 0x72, 0x1, true, 0x6c40ff93bcc434b5, 1, uint8_t)
#define _m036 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.Ias", ias, 0x76, 0x1, true, 0x950342fc10ca0bdb, 1, uint8_t)
#define _m037 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.Ibs", ibs, 0x77, 0x1, true, 0x783bc1d0a08e4e6a, 1, uint8_t)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.MaxInquiryChangeLogs", max_inquiry_change_logs, 0x78, 0x10, true, 0x4a6031d498b6d4f)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_VPD_EXTENDED_INQUIRY_DATA_PAGE.MaxModePageChangeLogs", max_mode_page_change_logs, 0x88, 0x10, true, 0xde46a6eaadb79084)
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
#endif