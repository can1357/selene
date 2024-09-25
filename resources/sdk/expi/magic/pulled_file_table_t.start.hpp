#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXP_PULLED_FILE_TABLE.NumberOfFiles", number_of_files, 0x0, 0x0, false, 0xc9af13dde58d4259)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EXP_PULLED_FILE_TABLE.TableSize", table_size, 0x0, 0x0, false, 0x16543bf6d82c17e3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_EXP_PULLED_FILE_TABLE.Hashes", hashes, 0x0, 0x0, false, 0xec9b708384f2a09c)
#else
#define _m00
#define _m01
#define _m02
#endif