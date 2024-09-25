#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CALL_COUNT_INFORMATION.Length", length, 0x0, 0x20, true, 0x35c1dffa59135907)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_CALL_COUNT_INFORMATION.NumberOfTables", number_of_tables, 0x20, 0x20, true, 0x18ce51c8223dd417)
#else
#define _m00
#define _m01
#endif