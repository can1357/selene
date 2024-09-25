#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_READ_LIST.FileObject", file_object, 0x0, 0x40, true, 0x62bf7f44dbb0dbae)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_READ_LIST.NumberOfEntries", number_of_entries, 0x40, 0x20, true, 0xb3608029c224cc3c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_READ_LIST.IsImage", is_image, 0x60, 0x20, true, 0xf614c5417819a2b5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::file_segment_element_t, 1>), "_READ_LIST.List", list, 0x80, 0x40, true, 0xe379b453b95db59)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif