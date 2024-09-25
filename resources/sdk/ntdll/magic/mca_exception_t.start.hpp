#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MCA_EXCEPTION.VersionNumber", version_number, 0x0, 0x20, true, 0xc6d8a928cb27d800)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_MCA_EXCEPTION.ExceptionType", exception_type, 0x20, 0x20, true, 0x7e44104e998dbe05, 32, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_MCA_EXCEPTION.TimeStamp", time_stamp, 0x40, 0x40, true, 0xba591eb26a8c5ff6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MCA_EXCEPTION.ProcessorNumber", processor_number, 0x80, 0x20, true, 0x39690d0615d37a8d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MCA_EXCEPTION.Mca.BankNumber", bank_number, 0x0, 0x8, true, 0x99ecea8a8774ce82)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union ntdll::mci_stats_t), "_MCA_EXCEPTION.Mca.Status", status, 0x40, 0x40, true, 0xee6a5bd783ba2f51)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union ntdll::mci_addr_t), "_MCA_EXCEPTION.Mca.Address", address, 0x80, 0x40, true, 0x2503ce2a0f8088fb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCA_EXCEPTION.Mca.Misc", misc, 0xc0, 0x40, true, 0xb12b75824cfacb7a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_mca_t), "_MCA_EXCEPTION.Mca", mca, 0xc0, 0x0, true, 0x54f172dcc86c0dcc)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCA_EXCEPTION.Mce.Address", address, 0x0, 0x40, true, 0x64e65d6350782835)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MCA_EXCEPTION.Mce.Type", type, 0x40, 0x40, true, 0xd470479fa1769a06)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u6_mce_t), "_MCA_EXCEPTION.Mce", mce, 0xc0, 0x80, true, 0x29b81ee8f500ce34)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MCA_EXCEPTION.ExtCnt", ext_cnt, 0x1c0, 0x20, true, 0x5107ffe4001d95)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 24>), "_MCA_EXCEPTION.ExtReg", ext_reg, 0x200, 0x0, true, 0xd739d40ddd1c4df9)
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
#endif