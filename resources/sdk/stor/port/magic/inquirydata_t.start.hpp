#if !IN_PARSER
#define _m000 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_INQUIRYDATA.DeviceType", device_type, 0x0, 0x5, true, 0x668837500d4efb79, 5, uint8_t)
#define _m001 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_INQUIRYDATA.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0xa063921a12658154, 3, uint8_t)
#define _m002 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_INQUIRYDATA.DeviceTypeModifier", device_type_modifier, 0x8, 0x7, true, 0xbc49af602927b446, 7, uint8_t)
#define _m003 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.RemovableMedia", removable_media, 0xf, 0x1, true, 0x2efc52c15c5810fd, 1, uint8_t)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_INQUIRYDATA.Versions", versions, 0x10, 0x8, true, 0x1ec5e727828576e0)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_INQUIRYDATA.ANSIVersion", ansi_version, 0x10, 0x3, true, 0x13726778e060cbbc, 3, uint8_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_INQUIRYDATA.ECMAVersion", ecma_version, 0x13, 0x3, true, 0x6997b98b2b1d9b70, 3, uint8_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_INQUIRYDATA.ISOVersion", iso_version, 0x16, 0x2, true, 0xbed0602adecdc861, 2, uint8_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_INQUIRYDATA.ResponseDataFormat", response_data_format, 0x18, 0x4, true, 0xf0a78202a02208b8, 4, uint8_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.HiSupport", hi_support, 0x1c, 0x1, true, 0xc76799b711539226, 1, uint8_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.NormACA", norm_aca, 0x1d, 0x1, true, 0x55d45cb26c27e369, 1, uint8_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.TerminateTask", terminate_task, 0x1e, 0x1, true, 0xb70c4f57b6388110, 1, uint8_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.AERC", aerc, 0x1f, 0x1, true, 0x4c95c9c8406a8641, 1, uint8_t)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_INQUIRYDATA.AdditionalLength", additional_length, 0x20, 0x8, true, 0xb05c678e03da1d39)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.PROTECT", protect, 0x28, 0x1, true, 0xea054dd17df48e53, 1, uint8_t)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_INQUIRYDATA.Reserved_1", reserved_1, 0x29, 0x2, true, 0xd294886cf8ff89b, 2, uint8_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.ThirdPartyCoppy", third_party_coppy, 0x2b, 0x1, true, 0xa7cafb38276fcabf, 1, uint8_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_INQUIRYDATA.TPGS", tpgs, 0x2c, 0x2, true, 0x5382192ee9f13af0, 2, uint8_t)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.ACC", acc, 0x2e, 0x1, true, 0x3b0b6b8c9f74506f, 1, uint8_t)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.SCCS", sccs, 0x2f, 0x1, true, 0xd1d9e4bd983a4377, 1, uint8_t)
#define _m020 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.Addr16", addr16, 0x30, 0x1, true, 0xb297fcec17e30a76, 1, uint8_t)
#define _m021 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.Addr32", addr32, 0x31, 0x1, true, 0xff89307c6aea603f, 1, uint8_t)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.AckReqQ", ack_req_q, 0x32, 0x1, true, 0x23b315351c996dec, 1, uint8_t)
#define _m023 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.MediumChanger", medium_changer, 0x33, 0x1, true, 0x939864860b8fbd21, 1, uint8_t)
#define _m024 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.MultiPort", multi_port, 0x34, 0x1, true, 0xeb90a0358b20ab67, 1, uint8_t)
#define _m025 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.ReservedBit2", reserved_bit2, 0x35, 0x1, true, 0x29ea0bedafd720da, 1, uint8_t)
#define _m026 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.EnclosureServices", enclosure_services, 0x36, 0x1, true, 0xff6c527c031801c5, 1, uint8_t)
#define _m027 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.ReservedBit3", reserved_bit3, 0x37, 0x1, true, 0x4914a21adb93b3b0, 1, uint8_t)
#define _m028 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.SoftReset", soft_reset, 0x38, 0x1, true, 0xf93d9a96b59fc30c, 1, uint8_t)
#define _m029 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.CommandQueue", command_queue, 0x39, 0x1, true, 0xad0a8f7c45263c11, 1, uint8_t)
#define _m030 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.TransferDisable", transfer_disable, 0x3a, 0x1, true, 0x91f90defe85dbd50, 1, uint8_t)
#define _m031 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.LinkedCommands", linked_commands, 0x3b, 0x1, true, 0xc35b0e296331b602, 1, uint8_t)
#define _m032 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.Synchronous", synchronous, 0x3c, 0x1, true, 0x60a43359dd1df817, 1, uint8_t)
#define _m033 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.Wide16Bit", wide16_bit, 0x3d, 0x1, true, 0xa8d3594b83798c76, 1, uint8_t)
#define _m034 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.Wide32Bit", wide32_bit, 0x3e, 0x1, true, 0xe9babc25f3b2fbc1, 1, uint8_t)
#define _m035 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_INQUIRYDATA.RelativeAddressing", relative_addressing, 0x3f, 0x1, true, 0xe30ea1885c256690, 1, uint8_t)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_INQUIRYDATA.VendorId", vendor_id, 0x40, 0x40, true, 0xada4b4afe615e10e)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_INQUIRYDATA.ProductId", product_id, 0x80, 0x80, true, 0x625497e27bd119c0)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_INQUIRYDATA.ProductRevisionLevel", product_revision_level, 0x100, 0x20, true, 0xb73979b3cac1076)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_INQUIRYDATA.VendorSpecific", vendor_specific, 0x120, 0xa0, true, 0x55181d8f83fcfa8f)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 8>), "_INQUIRYDATA.VersionDescriptors", version_descriptors, 0x1d0, 0x80, true, 0xd385833b816cd05b)
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