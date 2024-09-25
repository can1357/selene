#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.VID", vid, 0x0, 0x0, false, 0x37a24ff68dc6f268)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.SSVID", ssvid, 0x0, 0x0, false, 0x497ccca68fcd0971)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "NVME_IDENTIFY_CONTROLLER_DATA.SN", sn, 0x0, 0x0, false, 0x33da91909aea867a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 40>), "NVME_IDENTIFY_CONTROLLER_DATA.MN", mn, 0x0, 0x0, false, 0x94ac380e940c6eb8)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "NVME_IDENTIFY_CONTROLLER_DATA.FR", fr, 0x0, 0x0, false, 0xcac96960c668a47c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.RAB", rab, 0x0, 0x0, false, 0x9c4813bda182a512)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "NVME_IDENTIFY_CONTROLLER_DATA.IEEE", ieee, 0x0, 0x0, false, 0xe04734fb0b0b159c)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_cmic_t), "NVME_IDENTIFY_CONTROLLER_DATA.CMIC", cmic, 0x0, 0x0, false, 0x9f04d885fe6c8674)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.MDTS", mdts, 0x0, 0x0, false, 0x6dfc39f5475490ec)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.CNTLID", cntlid, 0x0, 0x0, false, 0x686ec63583eeb0e4)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.VER", ver, 0x0, 0x0, false, 0xcf5945464d6d4899)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.RTD3R", rtd3r, 0x0, 0x0, false, 0xe663bc0105c7cab4)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.RTD3E", rtd3e, 0x0, 0x0, false, 0x3dffd19718fa1400)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_oaes_t), "NVME_IDENTIFY_CONTROLLER_DATA.OAES", oaes, 0x0, 0x0, false, 0x51cdc1f8a99f610f)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_ctratt_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT", ctratt, 0x0, 0x0, false, 0x136ce60c09194529)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_rrls_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS", rrls, 0x0, 0x0, false, 0xfa386db536fea7f8)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.CNTRLTYPE", cntrltype, 0x0, 0x0, false, 0xc7d51d49eb4ae537)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "NVME_IDENTIFY_CONTROLLER_DATA.FGUID", fguid, 0x0, 0x0, false, 0xa77ba665aff7b02d)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.CRDT1", crdt1, 0x0, 0x0, false, 0x7bb54ffdc93c4b75)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.CRDT2", crdt2, 0x0, 0x0, false, 0x80a34ae980b6561d)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.CRDT3", crdt3, 0x0, 0x0, false, 0x138a2254a9fd3cf9)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 106>), "NVME_IDENTIFY_CONTROLLER_DATA.Reserved0_1", reserved0_1, 0x0, 0x0, false, 0x89d84bae3c44ccda)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "NVME_IDENTIFY_CONTROLLER_DATA.ReservedForManagement", reserved_for_management, 0x0, 0x0, false, 0xdd00dcd7ae78fbc7)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_oacs_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS", oacs, 0x0, 0x0, false, 0x620477b5f72f11b0)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CMIC.MultiPCIePorts", multi_pc_ie_ports, 0x0, 0x0, false, 0x50fbd75c4a766faa, 1, uint8_t)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.ACL", acl, 0x0, 0x0, false, 0x7db9bede8b012ec)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.AERL", aerl, 0x0, 0x0, false, 0x9fed2af675d10152)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_frmw_t), "NVME_IDENTIFY_CONTROLLER_DATA.FRMW", frmw, 0x0, 0x0, false, 0xf0aea068624d12b9)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CMIC.MultiControllers", multi_controllers, 0x0, 0x0, false, 0xf57a6b8afc356ea3, 1, uint8_t)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_lpa_t), "NVME_IDENTIFY_CONTROLLER_DATA.LPA", lpa, 0x0, 0x0, false, 0x351a54fb55f9b964)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.ELPE", elpe, 0x0, 0x0, false, 0x87286ef6db4adecc)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.NPSS", npss, 0x0, 0x0, false, 0x76b9c16de2dcb7f2)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_avscc_t), "NVME_IDENTIFY_CONTROLLER_DATA.AVSCC", avscc, 0x0, 0x0, false, 0xae368c9fab160986)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_apsta_t), "NVME_IDENTIFY_CONTROLLER_DATA.APSTA", apsta, 0x0, 0x0, false, 0xc6600e495441fa2a)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.WCTEMP", wctemp, 0x0, 0x0, false, 0x204927e08fd07d4f)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CMIC.SRIOV", sriov, 0x0, 0x0, false, 0x426ebc5dfc2a6b49, 1, uint8_t)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.CCTEMP", cctemp, 0x0, 0x0, false, 0x795895e0ff7ecf1c)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.MTFA", mtfa, 0x0, 0x0, false, 0x66d360e636579feb)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.HMPRE", hmpre, 0x0, 0x0, false, 0xa35bb069c4542b6a)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.HMMIN", hmmin, 0x0, 0x0, false, 0xd826d5c2f5d4d231)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "NVME_IDENTIFY_CONTROLLER_DATA.TNVMCAP", tnvmcap, 0x0, 0x0, false, 0x85506c8d77f3c4c4)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "NVME_IDENTIFY_CONTROLLER_DATA.UNVMCAP", unvmcap, 0x0, 0x0, false, 0x955d1be03f5b4f42)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u9_rpmbs_t), "NVME_IDENTIFY_CONTROLLER_DATA.RPMBS", rpmbs, 0x0, 0x0, false, 0xb034eb26d6aac933)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.EDSTT", edstt, 0x0, 0x0, false, 0x54af2db64bb924ac)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.DSTO", dsto, 0x0, 0x0, false, 0x4668d48f380c831a)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.FWUG", fwug, 0x0, 0x0, false, 0x3604978a7a0e8c23)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.KAS", kas, 0x0, 0x0, false, 0xe4dc022a1ab41757)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u10_hctma_t), "NVME_IDENTIFY_CONTROLLER_DATA.HCTMA", hctma, 0x0, 0x0, false, 0x9aec91fa69e7aa35)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.MNTMT", mntmt, 0x0, 0x0, false, 0x192aeada01752245)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.MXTMT", mxtmt, 0x0, 0x0, false, 0xc4c258e6293f002c)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u11_sanicap_t), "NVME_IDENTIFY_CONTROLLER_DATA.SANICAP", sanicap, 0x0, 0x0, false, 0xe032d280c3ed8e72)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.HMMINDS", hmminds, 0x0, 0x0, false, 0xbea4c0f04e9731b0)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.HMMAXD", hmmaxd, 0x0, 0x0, false, 0x57059ae080247196)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.NSETIDMAX", nsetidmax, 0x0, 0x0, false, 0x188b33435c8dbca9)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.ENDGIDMAX", endgidmax, 0x0, 0x0, false, 0xec173cc6d1fc4252)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.ANATT", anatt, 0x0, 0x0, false, 0xa67338e4c5477354)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_anacap_t), "NVME_IDENTIFY_CONTROLLER_DATA.ANACAP", anacap, 0x0, 0x0, false, 0x89687035f4a3327e)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.ANAGRPMAX", anagrpmax, 0x0, 0x0, false, 0x3ea3bc119da44eb4)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.NANAGRPID", nanagrpid, 0x0, 0x0, false, 0x35c12ebfd4c1e23f)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.PELS", pels, 0x0, 0x0, false, 0x5724864aa36d1d2c)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u13_sqes_t), "NVME_IDENTIFY_CONTROLLER_DATA.SQES", sqes, 0x0, 0x0, false, 0x4088aeb20f9a0cbb)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u13_sqes_t), "NVME_IDENTIFY_CONTROLLER_DATA.CQES", cqes, 0x0, 0x0, false, 0x4599fedd68c2b79f)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.MAXCMD", maxcmd, 0x0, 0x0, false, 0x51cb4c8528e34b0d)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.NN", nn, 0x0, 0x0, false, 0x979395b3e34391e7)
#define _m147 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u14_oncs_t), "NVME_IDENTIFY_CONTROLLER_DATA.ONCS", oncs, 0x0, 0x0, false, 0x7ce29a75826b69a)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u15_fuses_t), "NVME_IDENTIFY_CONTROLLER_DATA.FUSES", fuses, 0x0, 0x0, false, 0x14efb93efef9863f)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_fna_t), "NVME_IDENTIFY_CONTROLLER_DATA.FNA", fna, 0x0, 0x0, false, 0x8ddc01eb6db3b157)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u17_vwc_t), "NVME_IDENTIFY_CONTROLLER_DATA.VWC", vwc, 0x0, 0x0, false, 0x8bccb4b0ee346969)
#define _m158 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.AWUN", awun, 0x0, 0x0, false, 0x253a7f43354c4bd)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.AWUPF", awupf, 0x0, 0x0, false, 0xe3c679f929ebd071)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OAES.NamespaceAttributeChanged", namespace_attribute_changed, 0x0, 0x0, false, 0x4ca7002db495c77b, 1, uint32_t)
#define _m161 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_avscc_t), "NVME_IDENTIFY_CONTROLLER_DATA.NVSCC", nvscc, 0x0, 0x0, false, 0xfbc920768dda013e)
#define _m165 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u18_nwpc_t), "NVME_IDENTIFY_CONTROLLER_DATA.NWPC", nwpc, 0x0, 0x0, false, 0x118a331995fa76f1)
#define _m166 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_CONTROLLER_DATA.ACWU", acwu, 0x0, 0x0, false, 0xdb0f354441bdcb86)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OAES.FirmwareActivation", firmware_activation, 0x0, 0x0, false, 0xeb03fcf60116088a, 1, uint32_t)
#define _m175 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u19_sgls_t), "NVME_IDENTIFY_CONTROLLER_DATA.SGLS", sgls, 0x0, 0x0, false, 0x949b2ded1d49af8)
#define _m176 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_CONTROLLER_DATA.MNAN", mnan, 0x0, 0x0, false, 0x235e34a07b4bed11)
#define _m177 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "NVME_IDENTIFY_CONTROLLER_DATA.SUBNQN", subnqn, 0x0, 0x0, false, 0x6c86bc22fbac4a8d)
#define _m178 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::nvme_power_state_desc_t, 32>), "NVME_IDENTIFY_CONTROLLER_DATA.PDS", pds, 0x0, 0x0, false, 0xb0b4997231d705ea)
#define _m179 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1024>), "NVME_IDENTIFY_CONTROLLER_DATA.VS", vs, 0x0, 0x0, false, 0x57cc2232cea88517)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OAES.AsymmetricAccessChanged", asymmetric_access_changed, 0x0, 0x0, false, 0xf1fbe7318699089f, 1, uint32_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OAES.PredictableLatencyAggregateLogChanged", predictable_latency_aggregate_log_changed, 0x0, 0x0, false, 0xa57b7a2b18e82d3e, 1, uint32_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OAES.LbaStatusChanged", lba_status_changed, 0x0, 0x0, false, 0x48be645c224a4a75, 1, uint32_t)
#define _m21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OAES.EnduranceGroupAggregateLogChanged", endurance_group_aggregate_log_changed, 0x0, 0x0, false, 0xb49fa4cae1bb042, 1, uint32_t)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OAES.ZoneInformation", zone_information, 0x0, 0x0, false, 0x4a340208132c467e, 1, uint32_t)
#define _m24 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.HostIdentifier128Bit", host_identifier128_bit, 0x0, 0x0, false, 0x656f330154d42fd9, 1, uint32_t)
#define _m25 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.NOPSPMode", nopsp_mode, 0x0, 0x0, false, 0x4d317be664d4ae44, 1, uint32_t)
#define _m26 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.NVMSets", nvm_sets, 0x0, 0x0, false, 0x7f9dc8596d348a2d, 1, uint32_t)
#define _m27 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.ReadRecoveryLevels", read_recovery_levels, 0x0, 0x0, false, 0xadc80e06839b33c8, 1, uint32_t)
#define _m28 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.EnduranceGroups", endurance_groups, 0x0, 0x0, false, 0x204b5ed468a38f91, 1, uint32_t)
#define _m29 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.PredictableLatencyMode", predictable_latency_mode, 0x0, 0x0, false, 0x41cf8f851fe0e73c, 1, uint32_t)
#define _m30 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.TBKAS", tbkas, 0x0, 0x0, false, 0xddd55d34537ca023, 1, uint32_t)
#define _m31 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.NamespaceGranularity", namespace_granularity, 0x0, 0x0, false, 0xdeb8c533af031f8c, 1, uint32_t)
#define _m32 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.SQAssociations", sq_associations, 0x0, 0x0, false, 0x969efbf397064334, 1, uint32_t)
#define _m33 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.CTRATT.UUIDList", uuid_list, 0x0, 0x0, false, 0x804da7058cc9cd34, 1, uint32_t)
#define _m35 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel0", read_recovery_level0, 0x0, 0x0, false, 0xf9a01a51166d4840, 1, uint16_t)
#define _m36 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel1", read_recovery_level1, 0x0, 0x0, false, 0x73423c0ab2706c81, 1, uint16_t)
#define _m37 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel2", read_recovery_level2, 0x0, 0x0, false, 0xea3f32d6649fd2a8, 1, uint16_t)
#define _m38 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel3", read_recovery_level3, 0x0, 0x0, false, 0xdcbcffc3e8c521ba, 1, uint16_t)
#define _m39 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel4", read_recovery_level4, 0x0, 0x0, false, 0xf14180cd32e75ecc, 1, uint16_t)
#define _m40 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel5", read_recovery_level5, 0x0, 0x0, false, 0x6d410ae8d14f6ed8, 1, uint16_t)
#define _m41 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel6", read_recovery_level6, 0x0, 0x0, false, 0xa6c9c195ff02a70d, 1, uint16_t)
#define _m42 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel7", read_recovery_level7, 0x0, 0x0, false, 0x4d406888dff7ceba, 1, uint16_t)
#define _m43 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel8", read_recovery_level8, 0x0, 0x0, false, 0x794c6861ab6a3ab4, 1, uint16_t)
#define _m44 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel9", read_recovery_level9, 0x0, 0x0, false, 0x15f44fa99f04d867, 1, uint16_t)
#define _m45 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel10", read_recovery_level10, 0x0, 0x0, false, 0x8969abc57d00ab62, 1, uint16_t)
#define _m46 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel11", read_recovery_level11, 0x0, 0x0, false, 0xa950bb77950eee3f, 1, uint16_t)
#define _m47 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel12", read_recovery_level12, 0x0, 0x0, false, 0xbef4cbee92a0bb62, 1, uint16_t)
#define _m48 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel13", read_recovery_level13, 0x0, 0x0, false, 0xff847df66c058b91, 1, uint16_t)
#define _m49 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel14", read_recovery_level14, 0x0, 0x0, false, 0xe9565b0361430b46, 1, uint16_t)
#define _m50 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.RRLS.ReadRecoveryLevel15", read_recovery_level15, 0x0, 0x0, false, 0x78045492a88ef0c9, 1, uint16_t)
#define _m59 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS.SecurityCommands", security_commands, 0x0, 0x0, false, 0xf660d89d2c405f5c, 1, uint16_t)
#define _m60 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS.FormatNVM", format_nvm, 0x0, 0x0, false, 0x2b75e50000ec56c8, 1, uint16_t)
#define _m61 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS.FirmwareCommands", firmware_commands, 0x0, 0x0, false, 0x7493dfb6a40a174c, 1, uint16_t)
#define _m62 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS.NamespaceCommands", namespace_commands, 0x0, 0x0, false, 0x3faf4d8774ccd984, 1, uint16_t)
#define _m63 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS.DeviceSelfTest", device_self_test, 0x0, 0x0, false, 0xddffbba0b9f6aeb8, 1, uint16_t)
#define _m64 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS.Directives", directives, 0x0, 0x0, false, 0x3804101b44a39b52, 1, uint16_t)
#define _m65 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS.NVMeMICommands", nv_me_mi_commands, 0x0, 0x0, false, 0xe157494ce7bd2bd2, 1, uint16_t)
#define _m66 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS.VirtualizationMgmt", virtualization_mgmt, 0x0, 0x0, false, 0x5e4f1b414f81625, 1, uint16_t)
#define _m67 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS.DoorBellBufferConfig", door_bell_buffer_config, 0x0, 0x0, false, 0x95c43f9f62f86428, 1, uint16_t)
#define _m68 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.OACS.GetLBAStatus", get_lba_status, 0x0, 0x0, false, 0xf0ea2f76e8aae5c5, 1, uint16_t)
#define _m72 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.FRMW.Slot1ReadOnly", slot1_read_only, 0x0, 0x0, false, 0xdddbb1ee46967aea, 1, uint8_t)
#define _m73 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_IDENTIFY_CONTROLLER_DATA.FRMW.SlotCount", slot_count, 0x0, 0x0, false, 0xaf3de37a017787d0, 3, uint8_t)
#define _m74 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.FRMW.ActivationWithoutReset", activation_without_reset, 0x0, 0x0, false, 0xa4e99b8f8e4d32a2, 1, uint8_t)
#define _m76 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.LPA.SmartPagePerNamespace", smart_page_per_namespace, 0x0, 0x0, false, 0xf74504a93d29c33e, 1, uint8_t)
#define _m77 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.LPA.CommandEffectsLog", command_effects_log, 0x0, 0x0, false, 0x35ce18ea1e474f49, 1, uint8_t)
#define _m78 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.LPA.LogPageExtendedData", log_page_extended_data, 0x0, 0x0, false, 0xe65e6265b21cd6dd, 1, uint8_t)
#define _m79 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.LPA.TelemetrySupport", telemetry_support, 0x0, 0x0, false, 0xfcc621a552b540b7, 1, uint8_t)
#define _m80 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.LPA.PersistentEventLog", persistent_event_log, 0x0, 0x0, false, 0x8a9bb3c72b87955b, 1, uint8_t)
#define _m81 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.LPA.TelemetryDataArea4", telemetry_data_area4, 0x0, 0x0, false, 0x70aaff00efebb56c, 1, uint8_t)
#define _m85 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.AVSCC.CommandFormatInSpec", command_format_in_spec, 0x0, 0x0, false, 0x135cb3e52db5476c, 1, uint8_t)
#define _m87 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.APSTA.Supported", supported, 0x0, 0x0, false, 0xd1438c0d695dbc97, 1, uint8_t)
#define _m96 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_IDENTIFY_CONTROLLER_DATA.RPMBS.RPMBUnitCount", rpmb_unit_count, 0x0, 0x0, false, 0xf361f8ef04038e1f, 3, uint32_t)
#define _m97 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_IDENTIFY_CONTROLLER_DATA.RPMBS.AuthenticationMethod", authentication_method, 0x0, 0x0, false, 0xef59d6e9a703febb, 3, uint32_t)
#define _m98 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.RPMBS.TotalSize", total_size, 0x0, 0x0, false, 0xb32423efffdb28a7, 8, uint32_t)
#define _m99 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_CONTROLLER_DATA.RPMBS.AccessSize", access_size, 0x0, 0x0, false, 0x2939d10488ab238f, 8, uint32_t)
#define _n05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.HCTMA.Supported", supported, 0x0, 0x0, false, 0x660f49f98ba0997e, 1, uint16_t)
#define _n09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SANICAP.CryptoErase", crypto_erase, 0x0, 0x0, false, 0x7adf5d21276c9d77, 1, uint32_t)
#define _n10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SANICAP.BlockErase", block_erase, 0x0, 0x0, false, 0xa73100b2921b63ab, 1, uint32_t)
#define _n11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SANICAP.Overwrite", overwrite, 0x0, 0x0, false, 0xe7f4b53b4379e5, 1, uint32_t)
#define _n12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SANICAP.NDI", ndi, 0x0, 0x0, false, 0x9c85a8af37b1ac, 1, uint32_t)
#define _n13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_IDENTIFY_CONTROLLER_DATA.SANICAP.NODMMAS", nodmmas, 0x0, 0x0, false, 0x6ba76a2e2024bddc, 2, uint32_t)
#define _n20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ANACAP.OptimizedState", optimized_state, 0x0, 0x0, false, 0x719aecc6245b2085, 1, uint8_t)
#define _n21 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ANACAP.NonOptimizedState", non_optimized_state, 0x0, 0x0, false, 0xaa9b7a1948cb450a, 1, uint8_t)
#define _n22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ANACAP.InaccessibleState", inaccessible_state, 0x0, 0x0, false, 0xc6cf0239efedd9d5, 1, uint8_t)
#define _n23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ANACAP.PersistentLossState", persistent_loss_state, 0x0, 0x0, false, 0x865468565c1799af, 1, uint8_t)
#define _n24 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ANACAP.ChangeState", change_state, 0x0, 0x0, false, 0x575ff1264b2cf51c, 1, uint8_t)
#define _n25 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ANACAP.StaticANAGRPID", static_anagrpid, 0x0, 0x0, false, 0xbb9ce26e72eba0f8, 1, uint8_t)
#define _n26 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ANACAP.SupportNonZeroANAGRPID", support_non_zero_anagrpid, 0x0, 0x0, false, 0xf67417b4683016a0, 1, uint8_t)
#define _n31 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_IDENTIFY_CONTROLLER_DATA.SQES.RequiredEntrySize", required_entry_size, 0x0, 0x0, false, 0x243bb15b0698f5a4, 4, uint8_t)
#define _n32 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_IDENTIFY_CONTROLLER_DATA.SQES.MaxEntrySize", max_entry_size, 0x0, 0x0, false, 0xa57074aae6f54f75, 4, uint8_t)
#define _n34 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_IDENTIFY_CONTROLLER_DATA.CQES.RequiredEntrySize", required_entry_size, 0x0, 0x0, false, 0x6fc2c54797add89b, 4, uint8_t)
#define _n35 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_IDENTIFY_CONTROLLER_DATA.CQES.MaxEntrySize", max_entry_size, 0x0, 0x0, false, 0x23eb37609e8f4fc, 4, uint8_t)
#define _n39 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ONCS.Compare", compare, 0x0, 0x0, false, 0xa8d81cb3bc00f0d0, 1, uint16_t)
#define _n40 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ONCS.WriteUncorrectable", write_uncorrectable, 0x0, 0x0, false, 0x8bde7ad506e2942f, 1, uint16_t)
#define _n41 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ONCS.DatasetManagement", dataset_management, 0x0, 0x0, false, 0x81029319f31f95b6, 1, uint16_t)
#define _n42 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ONCS.WriteZeroes", write_zeroes, 0x0, 0x0, false, 0x311bc3ea390a34ef, 1, uint16_t)
#define _n43 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ONCS.FeatureField", feature_field, 0x0, 0x0, false, 0xf97273a5df0bb52a, 1, uint16_t)
#define _n44 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ONCS.Reservations", reservations, 0x0, 0x0, false, 0x56525d24f41af9bb, 1, uint16_t)
#define _n45 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ONCS.Timestamp", timestamp, 0x0, 0x0, false, 0x19b9f8af0b0b0191, 1, uint16_t)
#define _n46 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.ONCS.Verify", verify, 0x0, 0x0, false, 0xf7445f11b86de007, 1, uint16_t)
#define _n48 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.FUSES.CompareAndWrite", compare_and_write, 0x0, 0x0, false, 0xb83adde1004dc557, 1, uint16_t)
#define _n50 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.FNA.FormatApplyToAll", format_apply_to_all, 0x0, 0x0, false, 0x11f1e3c8fcd0ee4a, 1, uint8_t)
#define _n51 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.FNA.SecureEraseApplyToAll", secure_erase_apply_to_all, 0x0, 0x0, false, 0xdea810c7548be6ee, 1, uint8_t)
#define _n52 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.FNA.CryptographicEraseSupported", cryptographic_erase_supported, 0x0, 0x0, false, 0x449f96028efd9408, 1, uint8_t)
#define _n53 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.FNA.FormatSupportNSIDAllF", format_support_nsid_all_f, 0x0, 0x0, false, 0x2e6eeb8420c9c546, 1, uint8_t)
#define _n55 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.VWC.Present", present, 0x0, 0x0, false, 0x99cffdf93e4c9f2d, 1, uint8_t)
#define _n56 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_IDENTIFY_CONTROLLER_DATA.VWC.FlushBehavior", flush_behavior, 0x0, 0x0, false, 0xa76de57a3f96c75, 2, uint8_t)
#define _n60 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.NVSCC.CommandFormatInSpec", command_format_in_spec, 0x0, 0x0, false, 0x8a6f6c3123183844, 1, uint8_t)
#define _n62 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.NWPC.WriteProtect", write_protect, 0x0, 0x0, false, 0x1384f95e7416aaeb, 1, uint8_t)
#define _n63 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.NWPC.UntilPowerCycle", until_power_cycle, 0x0, 0x0, false, 0x804413a3411d58c1, 1, uint8_t)
#define _n64 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.NWPC.Permanent", permanent, 0x0, 0x0, false, 0x30ff83dc9aec6ba1, 1, uint8_t)
#define _n67 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "NVME_IDENTIFY_CONTROLLER_DATA.SGLS.SGLSupported", sgl_supported, 0x0, 0x0, false, 0x126d2aaca08e5036, 2, uint32_t)
#define _n68 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SGLS.KeyedSGLData", keyed_sgl_data, 0x0, 0x0, false, 0x40fad24402888ab3, 1, uint32_t)
#define _n69 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SGLS.BitBucketDescrSupported", bit_bucket_descr_supported, 0x0, 0x0, false, 0xfc9000013c468fb8, 1, uint32_t)
#define _n70 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SGLS.ByteAlignedContiguousPhysicalBuffer", byte_aligned_contiguous_physical_buffer, 0x0, 0x0, false, 0xe8c08a04d53bc24, 1, uint32_t)
#define _n71 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SGLS.SGLLengthLargerThanDataLength", sgl_length_larger_than_data_length, 0x0, 0x0, false, 0x26a1abe0792a24cd, 1, uint32_t)
#define _n72 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SGLS.MPTRSGLDescriptor", mptrsgl_descriptor, 0x0, 0x0, false, 0xf7d166e4e8695e72, 1, uint32_t)
#define _n73 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SGLS.AddressFieldSGLDataBlock", address_field_sgl_data_block, 0x0, 0x0, false, 0x198c65aaa400fa3b, 1, uint32_t)
#define _n74 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_CONTROLLER_DATA.SGLS.TransportSGLData", transport_sgl_data, 0x0, 0x0, false, 0x70648e28107738a9, 1, uint32_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m023
#define _m034
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m069
#define _m07
#define _m070
#define _m071
#define _m075
#define _m08
#define _m082
#define _m083
#define _m084
#define _m086
#define _m088
#define _m089
#define _m09
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m100
#define _m101
#define _m102
#define _m103
#define _m104
#define _m106
#define _m107
#define _m108
#define _m114
#define _m115
#define _m116
#define _m117
#define _m118
#define _m119
#define _m127
#define _m128
#define _m129
#define _m130
#define _m133
#define _m136
#define _m137
#define _m138
#define _m147
#define _m149
#define _m154
#define _m157
#define _m158
#define _m159
#define _m16
#define _m161
#define _m165
#define _m166
#define _m17
#define _m175
#define _m176
#define _m177
#define _m178
#define _m179
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m48
#define _m49
#define _m50
#define _m59
#define _m60
#define _m61
#define _m62
#define _m63
#define _m64
#define _m65
#define _m66
#define _m67
#define _m68
#define _m72
#define _m73
#define _m74
#define _m76
#define _m77
#define _m78
#define _m79
#define _m80
#define _m81
#define _m85
#define _m87
#define _m96
#define _m97
#define _m98
#define _m99
#define _n05
#define _n09
#define _n10
#define _n11
#define _n12
#define _n13
#define _n20
#define _n21
#define _n22
#define _n23
#define _n24
#define _n25
#define _n26
#define _n31
#define _n32
#define _n34
#define _n35
#define _n39
#define _n40
#define _n41
#define _n42
#define _n43
#define _n44
#define _n45
#define _n46
#define _n48
#define _n50
#define _n51
#define _n52
#define _n53
#define _n55
#define _n56
#define _n60
#define _n62
#define _n63
#define _n64
#define _n67
#define _n68
#define _n69
#define _n70
#define _n71
#define _n72
#define _n73
#define _n74
#endif