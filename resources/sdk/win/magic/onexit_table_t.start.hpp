#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>**), "_onexit_table_t._first", first, 0x0, 0x40, true, 0x61a1fa12a58f4224)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>**), "_onexit_table_t._last", last, 0x40, 0x40, true, 0x2bc39ee0071a56bc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>**), "_onexit_table_t._end", end, 0x80, 0x40, true, 0xbfd90839daba0a02)
#else
#define _m00
#define _m01
#define _m02
#endif