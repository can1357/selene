#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.SIG", sig, 0x0, 0x0, false, 0x95b2408f9bdffd48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.MajorVersion", major_version, 0x0, 0x0, false, 0xc36b5e373c605abe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.SubVersion", sub_version, 0x0, 0x0, false, 0x9ab31303ef27a757)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.MPFC", mpfc, 0x0, 0x0, false, 0x9523aa9f3e0b8de5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.APFC", apfc, 0x0, 0x0, false, 0xc3b88627c1973ebf)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.MQPC", mqpc, 0x0, 0x0, false, 0x72bc9da0735d47ec)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.AQPC", aqpc, 0x0, 0x0, false, 0x6cad0ceaa61a1bf5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.MMMC", mmmc, 0x0, 0x0, false, 0x8aefff0582e4c81b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.AMMC", ammc, 0x0, 0x0, false, 0x76c696d9ade27851)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.MNC", mnc, 0x0, 0x0, false, 0xe3d1f5c58d172042)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.ANC", anc, 0x0, 0x0, false, 0x82398c14a1c58d74)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.TNSS", tnss, 0x0, 0x0, false, 0x51bd97d3417c18f5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.ANSS", anss, 0x0, 0x0, false, 0x2017c2cce2e434a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.SPG", spg, 0x0, 0x0, false, 0x8ec023158bbc6d76)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.TRB", trb, 0x0, 0x0, false, 0xc5d0c28c866070c3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.ARB", arb, 0x0, 0x0, false, 0x5cbca67e5e470a45)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.TWB", twb, 0x0, 0x0, false, 0xa6eb0d4b0f44a44d)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.AWB", awb, 0x0, 0x0, false, 0x65d4bbd26847579e)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.TRIOPS", triops, 0x0, 0x0, false, 0x3e56ddee08ffd2d9)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.ARIOPS", ariops, 0x0, 0x0, false, 0xf527038f4b6f54ba)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.TWIOPS", twiops, 0x0, 0x0, false, 0xcc50c498f9de0d53)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.AWIOPS", awiops, 0x0, 0x0, false, 0x2f5824eaada7974d)
#define _m22 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.Features.ReservedQoSSupported", reserved_qo_s_supported, 0x0, 0x0, false, 0x3bf69774d4e427aa, 1, uint32_t)
#define _m23 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.Features.LimitedQoSSupported", limited_qo_s_supported, 0x0, 0x0, false, 0x6f05d695c7cbb105, 1, uint32_t)
#define _m24 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.Features.MixedQoSSupported", mixed_qo_s_supported, 0x0, 0x0, false, 0x344dbe60d6472189, 1, uint32_t)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_features_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.Features", features, 0x0, 0x0, false, 0xc03f4f0fa344502e)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IDENTIFY_MFND_CAPABILITY_INFORMATION.MSCCNC", msccnc, 0x0, 0x0, false, 0xd676a03d81ef6533)
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
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#endif