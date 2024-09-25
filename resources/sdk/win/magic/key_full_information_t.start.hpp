#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KEY_FULL_INFORMATION.LastWriteTime", last_write_time, 0x0, 0x40, true, 0x99926446d3c8f5bf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FULL_INFORMATION.TitleIndex", title_index, 0x40, 0x20, true, 0x16543a636a46d4f8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FULL_INFORMATION.ClassOffset", class_offset, 0x60, 0x20, true, 0xa8d49f26fa8bb998)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FULL_INFORMATION.ClassLength", class_length, 0x80, 0x20, true, 0x6eeb90e405d0c351)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FULL_INFORMATION.SubKeys", sub_keys, 0xa0, 0x20, true, 0x78ad102af7066903)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FULL_INFORMATION.MaxNameLen", max_name_len, 0xc0, 0x20, true, 0x160d3c74b3450725)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FULL_INFORMATION.MaxClassLen", max_class_len, 0xe0, 0x20, true, 0xae59644655886724)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FULL_INFORMATION.Values", values, 0x100, 0x20, true, 0x1987f1b1a61aad88)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FULL_INFORMATION.MaxValueNameLen", max_value_name_len, 0x120, 0x20, true, 0xbe392bfe6e9a71ec)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_FULL_INFORMATION.MaxValueDataLen", max_value_data_len, 0x140, 0x20, true, 0xacc89c0d826cfad9)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_KEY_FULL_INFORMATION.Class", _class, 0x160, 0x10, true, 0x2ab1a38189d68119)
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
#endif