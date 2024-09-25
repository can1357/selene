#if !IN_PARSER
#define _m000 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_MODE_CONTROL_PAGE.PageCode", page_code, 0x0, 0x6, true, 0xcc8f5054712a9cbd, 6, uint8_t)
#define _m001 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.PageSavable", page_savable, 0x7, 0x1, true, 0x6772e516c588afd3, 1, uint8_t)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MODE_CONTROL_PAGE.PageLength", page_length, 0x8, 0x8, true, 0x55cf9aa2f8be32f0)
#define _m003 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.RLEC", rlec, 0x10, 0x1, true, 0x5cfdb235de4ceab3, 1, uint8_t)
#define _m004 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.GLTSD", gltsd, 0x11, 0x1, true, 0x6d3eedf38888d8fd, 1, uint8_t)
#define _m005 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.D_SENSE", d_sense, 0x12, 0x1, true, 0xa968aacc9a6d2068, 1, uint8_t)
#define _m006 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.DPICZ", dpicz, 0x13, 0x1, true, 0x9a6a3d637e9ffad6, 1, uint8_t)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.TMF_ONLY", tmf_only, 0x14, 0x1, true, 0x3217a3d8920241ae, 1, uint8_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MODE_CONTROL_PAGE.TST", tst, 0x15, 0x3, true, 0x6a77da69bf4ac7d8, 3, uint8_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.Obsolete1", obsolete1, 0x18, 0x1, true, 0xa4cf0afe98d26961, 1, uint8_t)
#define _m010 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MODE_CONTROL_PAGE.QERR", qerr, 0x19, 0x2, true, 0xb1d04d63f7ef07fa, 2, uint8_t)
#define _m011 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.NUAR", nuar, 0x1b, 0x1, true, 0x45d213389f06b320, 1, uint8_t)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MODE_CONTROL_PAGE.QueueAlgorithmModifier", queue_algorithm_modifier, 0x1c, 0x4, true, 0x517be9dff93db888, 4, uint8_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MODE_CONTROL_PAGE.Obsolete2", obsolete2, 0x20, 0x3, true, 0x2d3173461baecb1c, 3, uint8_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.SWP", swp, 0x23, 0x1, true, 0x3647bdaac80148b3, 1, uint8_t)
#define _m015 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_MODE_CONTROL_PAGE.UA_INTLCK_CTRL", ua_intlck_ctrl, 0x24, 0x2, true, 0xeeeb9a92dd5cfe2c, 2, uint8_t)
#define _m016 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.RAC", rac, 0x26, 0x1, true, 0x2b6077d5daa806a5, 1, uint8_t)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.VS", vs, 0x27, 0x1, true, 0xe47ce3d6d4c9728, 1, uint8_t)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_MODE_CONTROL_PAGE.AutoloadMode", autoload_mode, 0x28, 0x3, true, 0x22b3aeab0cbed919, 3, uint8_t)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.RWWP", rwwp, 0x2c, 0x1, true, 0x8479d95cb753a82c, 1, uint8_t)
#define _m020 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.ATMPE", atmpe, 0x2d, 0x1, true, 0xe7ec7fc174261557, 1, uint8_t)
#define _m021 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.TAS", tas, 0x2e, 0x1, true, 0xdaaaa6e6cdd6d3e4, 1, uint8_t)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MODE_CONTROL_PAGE.ATO", ato, 0x2f, 0x1, true, 0x75f3321baebc4377, 1, uint8_t)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CONTROL_PAGE.Obsolete3", obsolete3, 0x30, 0x10, true, 0xb19d52ef1cd5c15b)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CONTROL_PAGE.BusyTimeoutPeriod", busy_timeout_period, 0x40, 0x10, true, 0xbc9f3e50da10118c)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_MODE_CONTROL_PAGE.ExtendeSelfTestCompletionTime", extende_self_test_completion_time, 0x50, 0x10, true, 0xd095a847da8b68ba)
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
#endif