#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_CLASS_VPD_B2_DATA.CommandStatus", command_status, 0x0, 0x20, true, 0x19d79e300cd93899)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_VPD_B2_DATA.ThresholdExponent", threshold_exponent, 0x20, 0x8, true, 0xf5929eb4cc2288de)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_VPD_B2_DATA.DP", dp, 0x28, 0x1, true, 0x43e85fa3e4041ca9, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_VPD_B2_DATA.ANC_SUP", anc_sup, 0x29, 0x1, true, 0xf4620bc4e11420c7, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_VPD_B2_DATA.LBPRZ", lbprz, 0x2c, 0x1, true, 0x90817ab186e32753, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_VPD_B2_DATA.LBPWS10", lbpws10, 0x2d, 0x1, true, 0x562ce46bd80e30f3, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_VPD_B2_DATA.LBPWS", lbpws, 0x2e, 0x1, true, 0x7dc8f0727dc129d1, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLASS_VPD_B2_DATA.LBPU", lbpu, 0x2f, 0x1, true, 0x74e8137e6d01348c, 1, uint8_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_CLASS_VPD_B2_DATA.ProvisioningType", provisioning_type, 0x30, 0x3, true, 0xe5970b8085c80a59, 3, uint8_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_VPD_B2_DATA.SoftThresholdEventPending", soft_threshold_event_pending, 0x40, 0x20, true, 0x55c6a3e17596955)
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
#endif