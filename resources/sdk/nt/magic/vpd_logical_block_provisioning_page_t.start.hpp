#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.DeviceType", device_type, 0x0, 0x5, true, 0x1ddba7223b08f549, 5, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.DeviceTypeQualifier", device_type_qualifier, 0x5, 0x3, true, 0x70404fb39b07b293, 3, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.PageCode", page_code, 0x8, 0x8, true, 0x915d801c14c59086)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.PageLength", page_length, 0x10, 0x10, true, 0x13a46b169ae0e742)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.ThresholdExponent", threshold_exponent, 0x20, 0x8, true, 0x9cfa51aed2494b4e)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.DP", dp, 0x28, 0x1, true, 0x19d70867cdb0f1a4, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.ANC_SUP", anc_sup, 0x29, 0x1, true, 0xaf6dc6e80abb56a0, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.LBPRZ", lbprz, 0x2a, 0x1, true, 0x2b1a6a652037af60, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.LBPWS10", lbpws10, 0x2d, 0x1, true, 0x9e1aad396adedae4, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.LBPWS", lbpws, 0x2e, 0x1, true, 0x1a448494fa00d7eb, 1, uint8_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.LBPU", lbpu, 0x2f, 0x1, true, 0xb6b72323bb485d21, 1, uint8_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.ProvisioningType", provisioning_type, 0x30, 0x3, true, 0x2f0e668919eaebbb, 3, uint8_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "_VPD_LOGICAL_BLOCK_PROVISIONING_PAGE.ProvisioningGroupDescr", provisioning_group_descr, 0x40, 0x0, true, 0x8967a08cf07fa105)
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
#endif