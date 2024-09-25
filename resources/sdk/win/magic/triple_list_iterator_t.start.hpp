#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::triple_list_t*), "_TRIPLE_LIST_ITERATOR.List", list, 0x0, 0x0, false, 0x250d653b5afc8300)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::triple_list_entry_t*), "_TRIPLE_LIST_ITERATOR.NextEntry", next_entry, 0x0, 0x0, false, 0x725ef91f7c0d4b50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRIPLE_LIST_ITERATOR.ActiveList", active_list, 0x0, 0x0, false, 0xfedde01c2a2d4279)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRIPLE_LIST_ITERATOR.ProbeReads", probe_reads, 0x0, 0x0, false, 0xfd9380d2a2fa9e44)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRIPLE_LIST_ITERATOR.ReturnDataOffset", return_data_offset, 0x0, 0x0, false, 0x389f41d74b035fe9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRIPLE_LIST_ITERATOR.Wow64List", wow64_list, 0x0, 0x0, false, 0xf4149b2c7b1cd310)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif