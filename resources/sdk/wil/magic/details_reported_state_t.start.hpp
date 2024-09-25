#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "wil_details_ReportedState.exchange", exchange, 0x0, 0x20, true, 0xf86958f26002cd74)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_ReportedState.queuedForReporting", queued_for_reporting, 0x0, 0x1, true, 0x51a09fb1988c82ee, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_ReportedState.reportedDeviceUsage", reported_device_usage, 0x1, 0x1, true, 0x68bf5a32d8bf4fba, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_ReportedState.reportedDevicePotential", reported_device_potential, 0x2, 0x1, true, 0x4d6b861901a5ad16, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_ReportedState.reportedDeviceOpportunity", reported_device_opportunity, 0x3, 0x1, true, 0x12d0d8573fcc68cd, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_ReportedState.reportedDevicePotentialOpportunity", reported_device_potential_opportunity, 0x4, 0x1, true, 0x249c1b47a524b900, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint9_t), "wil_details_ReportedState.usageCount", usage_count, 0x5, 0x9, true, 0xbd6ed4e6044706b2, 9, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_ReportedState.usageCountRepresentsPotential", usage_count_represents_potential, 0xe, 0x1, true, 0x7719fb4ba520634c, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "wil_details_ReportedState.opportunityCount", opportunity_count, 0xf, 0x7, true, 0xbe954d9b123212bb, 7, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "wil_details_ReportedState.opportunityCountRepresentsPotential", opportunity_count_represents_potential, 0x16, 0x1, true, 0x58718127ec9d8624, 1, uint32_t)
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