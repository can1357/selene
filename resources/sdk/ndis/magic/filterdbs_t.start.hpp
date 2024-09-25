#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::x_filter_t*), "FILTERDBS.EthDB", eth_db, 0x0, 0x40, true, 0x9f239e00d09050f4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::x_filter_t*), "FILTERDBS.NullDB", null_db, 0x0, 0x40, true, 0x102ce922333c0342)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::x_filter_t*), "FILTERDBS.TrDB", tr_db, 0x40, 0x40, true, 0x4c7725f466aea185)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FILTERDBS.YYYDB", yyydb, 0x80, 0x40, true, 0xf83ccbf99e136ee5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "FILTERDBS.XXXDB", xxxdb, 0xc0, 0x40, true, 0xd91b4c40f3432044)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif