#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.TransactionTypeValid", transaction_type_valid, 0x0, 0x1, true, 0xdeb486dedd66ad3a, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.OperationValid", operation_valid, 0x1, 0x1, true, 0x59b73859eadd1d23, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.LevelValid", level_valid, 0x2, 0x1, true, 0x974f3b7c1435282c, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.ProcessorContextCorruptValid", processor_context_corrupt_valid, 0x3, 0x1, true, 0x4bc7a2a690f55f1e, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.UncorrectedValid", uncorrected_valid, 0x4, 0x1, true, 0xc0bd20f017125773, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.PreciseIPValid", precise_ip_valid, 0x5, 0x1, true, 0xe4bdfa7027bc2b7b, 1, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.RestartableIPValid", restartable_ip_valid, 0x6, 0x1, true, 0x1ea5a890d37757a5, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.OverflowValid", overflow_valid, 0x7, 0x1, true, 0xe0b18deb73894d0c, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.ParticipationValid", participation_valid, 0x8, 0x1, true, 0x945a31e7a3216fd9, 1, uint64_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.TimeoutValid", timeout_valid, 0x9, 0x1, true, 0x39ede33dda069c, 1, uint64_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.AddressSpaceValid", address_space_valid, 0xa, 0x1, true, 0xd7700e0b70cc9585, 1, uint64_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_WHEA_XPF_BUS_CHECK.ReservedValid", reserved_valid, 0xb, 0x5, true, 0xc3a863a0a57c37d5, 5, uint64_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_XPF_BUS_CHECK.TransactionType", transaction_type, 0x10, 0x2, true, 0x5e9a3e3ada3ca00e, 2, uint64_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_WHEA_XPF_BUS_CHECK.Operation", operation, 0x12, 0x4, true, 0xc5b898cd81f698bc, 4, uint64_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_WHEA_XPF_BUS_CHECK.Level", level, 0x16, 0x3, true, 0x5dd668a0c37eb6b7, 3, uint64_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.ProcessorContextCorrupt", processor_context_corrupt, 0x19, 0x1, true, 0xdbae7981eaca7a83, 1, uint64_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.Uncorrected", uncorrected, 0x1a, 0x1, true, 0x2c6efd41a635eaf6, 1, uint64_t)
#define _m17 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.PreciseIP", precise_ip, 0x1b, 0x1, true, 0x60f69ec2b855657a, 1, uint64_t)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.RestartableIP", restartable_ip, 0x1c, 0x1, true, 0x7a52930593c262d1, 1, uint64_t)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.Overflow", overflow, 0x1d, 0x1, true, 0x7c93ba9d4cbd98ca, 1, uint64_t)
#define _m20 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_XPF_BUS_CHECK.Participation", participation, 0x1e, 0x2, true, 0xff4d9d8df5ca0c44, 2, uint64_t)
#define _m21 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_XPF_BUS_CHECK.Timeout", timeout, 0x20, 0x1, true, 0xffb245945095c3ec, 1, uint64_t)
#define _m22 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_WHEA_XPF_BUS_CHECK.AddressSpace", address_space, 0x21, 0x2, true, 0x5a9469fbd81118d0, 2, uint64_t)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_XPF_BUS_CHECK.XpfBusCheck", xpf_bus_check, 0x0, 0x40, true, 0xb9d5adfddd386d47)
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
#endif