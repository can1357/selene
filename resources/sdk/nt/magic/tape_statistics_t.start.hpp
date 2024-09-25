#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_STATISTICS.Version", version, 0x0, 0x20, true, 0xe7751ccabe19eb4b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_STATISTICS.Flags", flags, 0x20, 0x20, true, 0xcf0c49cc1f4ec7b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TAPE_STATISTICS.RecoveredWrites", recovered_writes, 0x40, 0x40, true, 0xf3c20365bb005e37)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TAPE_STATISTICS.UnrecoveredWrites", unrecovered_writes, 0x80, 0x40, true, 0x247fbcb07d6b56ee)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TAPE_STATISTICS.RecoveredReads", recovered_reads, 0xc0, 0x40, true, 0xdcb7b2b901fc4b61)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TAPE_STATISTICS.UnrecoveredReads", unrecovered_reads, 0x100, 0x40, true, 0x7be2a44e42157590)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_STATISTICS.CompressionRatioReads", compression_ratio_reads, 0x140, 0x8, true, 0x80535cc14a921b51)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_TAPE_STATISTICS.CompressionRatioWrites", compression_ratio_writes, 0x148, 0x8, true, 0x8bc09a6eb3eef88c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif