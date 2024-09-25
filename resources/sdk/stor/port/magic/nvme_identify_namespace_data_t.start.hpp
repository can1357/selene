#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NVME_IDENTIFY_NAMESPACE_DATA.NSZE", nsze, 0x0, 0x0, false, 0xeee2c811fdf7e2ef)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NVME_IDENTIFY_NAMESPACE_DATA.NCAP", ncap, 0x0, 0x0, false, 0x7233d1426eca2c0)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "NVME_IDENTIFY_NAMESPACE_DATA.NUSE", nuse, 0x0, 0x0, false, 0xb4a4b391d1e39a4a)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_nsfeat_t), "NVME_IDENTIFY_NAMESPACE_DATA.NSFEAT", nsfeat, 0x0, 0x0, false, 0x1f89a372d7fef9e1)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_NAMESPACE_DATA.NLBAF", nlbaf, 0x0, 0x0, false, 0xaab6c1bcd48cbeb5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_flbas_t), "NVME_IDENTIFY_NAMESPACE_DATA.FLBAS", flbas, 0x0, 0x0, false, 0xdc58e90520910fa4)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_mc_t), "NVME_IDENTIFY_NAMESPACE_DATA.MC", mc, 0x0, 0x0, false, 0x86ebc26f5493b74a)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_dpc_t), "NVME_IDENTIFY_NAMESPACE_DATA.DPC", dpc, 0x0, 0x0, false, 0xeea06aaa0c300e)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_dps_t), "NVME_IDENTIFY_NAMESPACE_DATA.DPS", dps, 0x0, 0x0, false, 0x364110b3ce8568d0)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u5_nmic_t), "NVME_IDENTIFY_NAMESPACE_DATA.NMIC", nmic, 0x0, 0x0, false, 0xd771cd33b59a4b5e)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union stor::port::nvm_reservation_capabilities_t), "NVME_IDENTIFY_NAMESPACE_DATA.RESCAP", rescap, 0x0, 0x0, false, 0x7755e6482bd63b39)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.NSFEAT.ThinProvisioning", thin_provisioning, 0x0, 0x0, false, 0x922bef8a4237c7d8, 1, uint8_t)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u6_fpi_t), "NVME_IDENTIFY_NAMESPACE_DATA.FPI", fpi, 0x0, 0x0, false, 0x3f574d4efcd4e597)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u7_dlfeat_t), "NVME_IDENTIFY_NAMESPACE_DATA.DLFEAT", dlfeat, 0x0, 0x0, false, 0xcb93db8a50d2a10a)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NAWUN", nawun, 0x0, 0x0, false, 0xbf71eaed7d2aa13f)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NAWUPF", nawupf, 0x0, 0x0, false, 0xb915fe059d6d5d44)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NACWU", nacwu, 0x0, 0x0, false, 0x4eb679b2ce80f9f2)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NABSN", nabsn, 0x0, 0x0, false, 0xc76fdcad4a3353fb)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NABO", nabo, 0x0, 0x0, false, 0x6aedba1faf927ef6)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.NSFEAT.NameSpaceAtomicWriteUnit", name_space_atomic_write_unit, 0x0, 0x0, false, 0x50e606e3ae9db74f, 1, uint8_t)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NABSPF", nabspf, 0x0, 0x0, false, 0xd42dca734e2251ad)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NOIOB", noiob, 0x0, 0x0, false, 0xc0e9f420b755a97e)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "NVME_IDENTIFY_NAMESPACE_DATA.NVMCAP", nvmcap, 0x0, 0x0, false, 0xd105e7d33fe09185)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NPWG", npwg, 0x0, 0x0, false, 0x663e421a9c5693ec)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NPWA", npwa, 0x0, 0x0, false, 0x80602b9c1990e2d9)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NPDG", npdg, 0x0, 0x0, false, 0xf77b4215f3d6e7cf)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NPDA", npda, 0x0, 0x0, false, 0x6cae519d9d091a19)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NOWS", nows, 0x0, 0x0, false, 0x2283f1da921e6664)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.MSSRL", mssrl, 0x0, 0x0, false, 0xd8e0b00295393c4d)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_NAMESPACE_DATA.MCL", mcl, 0x0, 0x0, false, 0xef5674f82a35b49a)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.NSFEAT.DeallocatedOrUnwrittenError", deallocated_or_unwritten_error, 0x0, 0x0, false, 0x7035138b25df5bbc, 1, uint8_t)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "NVME_IDENTIFY_NAMESPACE_DATA.MSRC", msrc, 0x0, 0x0, false, 0x1796cd6c818e3d6)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_IDENTIFY_NAMESPACE_DATA.ANAGRPID", anagrpid, 0x0, 0x0, false, 0x34ecff623cf821c3)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_nsattr_t), "NVME_IDENTIFY_NAMESPACE_DATA.NSATTR", nsattr, 0x0, 0x0, false, 0xafcdf3eeaa356c41)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.NVMSETID", nvmsetid, 0x0, 0x0, false, 0x7b5f30b42ce5bfe2)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NVME_IDENTIFY_NAMESPACE_DATA.ENDGID", endgid, 0x0, 0x0, false, 0x1961cd2c35b47229)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "NVME_IDENTIFY_NAMESPACE_DATA.NGUID", nguid, 0x0, 0x0, false, 0x51a43883ad7cac04)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "NVME_IDENTIFY_NAMESPACE_DATA.EUI64", eui64, 0x0, 0x0, false, 0x64e35e994df20afa)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union stor::port::nvme_lba_format_t, 16>), "NVME_IDENTIFY_NAMESPACE_DATA.LBAF", lbaf, 0x0, 0x0, false, 0x4db30224d0d74765)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3712>), "NVME_IDENTIFY_NAMESPACE_DATA.VS", vs, 0x0, 0x0, false, 0x389ea86bf148d9d7)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.NSFEAT.SkipReuseUI", skip_reuse_ui, 0x0, 0x0, false, 0xb09fc8efb7bed14, 1, uint8_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.NSFEAT.NameSpaceIoOptimization", name_space_io_optimization, 0x0, 0x0, false, 0xbf9e261cf16f1cc2, 1, uint8_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "NVME_IDENTIFY_NAMESPACE_DATA.FLBAS.LbaFormatIndex", lba_format_index, 0x0, 0x0, false, 0xafe7dceacd8a5a4c, 4, uint8_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.FLBAS.MetadataInExtendedDataLBA", metadata_in_extended_data_lba, 0x0, 0x0, false, 0x40716c85736c75fa, 1, uint8_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.MC.MetadataInExtendedDataLBA", metadata_in_extended_data_lba, 0x0, 0x0, false, 0xe0bce6d91ffaaca1, 1, uint8_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.MC.MetadataInSeparateBuffer", metadata_in_separate_buffer, 0x0, 0x0, false, 0xbb310b622ee10235, 1, uint8_t)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.DPC.ProtectionInfoType1", protection_info_type1, 0x0, 0x0, false, 0x2698d4ebbb840711, 1, uint8_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.DPC.ProtectionInfoType2", protection_info_type2, 0x0, 0x0, false, 0xe94b1724d5ff9e3d, 1, uint8_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.DPC.ProtectionInfoType3", protection_info_type3, 0x0, 0x0, false, 0x2e12cd7beeedf624, 1, uint8_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.DPC.InfoAtBeginningOfMetadata", info_at_beginning_of_metadata, 0x0, 0x0, false, 0x3590a3f120c3f7aa, 1, uint8_t)
#define _m20 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.DPC.InfoAtEndOfMetadata", info_at_end_of_metadata, 0x0, 0x0, false, 0xcb378a1d6247c928, 1, uint8_t)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_IDENTIFY_NAMESPACE_DATA.DPS.ProtectionInfoTypeEnabled", protection_info_type_enabled, 0x0, 0x0, false, 0x4c4d7169ddea9e3f, 3, uint8_t)
#define _m23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.DPS.InfoAtBeginningOfMetadata", info_at_beginning_of_metadata, 0x0, 0x0, false, 0x60cb4922dd1aeca3, 1, uint8_t)
#define _m25 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.NMIC.SharedNameSpace", shared_name_space, 0x0, 0x0, false, 0x959f7bb5f7ebb775, 1, uint8_t)
#define _m28 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "NVME_IDENTIFY_NAMESPACE_DATA.FPI.PercentageRemained", percentage_remained, 0x0, 0x0, false, 0xf64962d5bd3ad6ae, 7, uint8_t)
#define _m29 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.FPI.Supported", supported, 0x0, 0x0, false, 0x18ddaf2bbb9c2d59, 1, uint8_t)
#define _m31 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "NVME_IDENTIFY_NAMESPACE_DATA.DLFEAT.ReadBehavior", read_behavior, 0x0, 0x0, false, 0x7231bd928d05cccf, 3, uint8_t)
#define _m32 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.DLFEAT.WriteZeroes", write_zeroes, 0x0, 0x0, false, 0xaaa754233811b976, 1, uint8_t)
#define _m33 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.DLFEAT.GuardFieldWithCRC", guard_field_with_crc, 0x0, 0x0, false, 0x4dffdbb863ffb034, 1, uint8_t)
#define _m52 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_IDENTIFY_NAMESPACE_DATA.NSATTR.WriteProtected", write_protected, 0x0, 0x0, false, 0x68bdccbdf9eb10e5, 1, uint8_t)
#else
#define _m000
#define _m001
#define _m002
#define _m008
#define _m009
#define _m012
#define _m015
#define _m021
#define _m024
#define _m026
#define _m027
#define _m03
#define _m030
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m04
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m05
#define _m050
#define _m051
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m06
#define _m07
#define _m10
#define _m11
#define _m13
#define _m14
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m22
#define _m23
#define _m25
#define _m28
#define _m29
#define _m31
#define _m32
#define _m33
#define _m52
#endif