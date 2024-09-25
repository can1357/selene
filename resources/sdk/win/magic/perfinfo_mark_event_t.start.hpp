#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_MARK_EVENT.TranId", tran_id, 0x0, 0x20, true, 0x778bb5fed118f470)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_MARK_EVENT.Level", level, 0x20, 0x8, true, 0x9f24b5125b47f3a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_MARK_EVENT.AppId", app_id, 0x28, 0x8, true, 0xdef920603fcc1871)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_MARK_EVENT.OpId", op_id, 0x30, 0x10, true, 0x37d9ee60356ab452)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PERFINFO_MARK_EVENT.Text", text, 0x40, 0x10, true, 0xb5c2768d02f2d19)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif