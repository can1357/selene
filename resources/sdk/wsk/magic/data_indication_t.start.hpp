#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wsk::data_indication_t*), "_WSK_DATA_INDICATION.Next", next, 0x0, 0x40, true, 0x8f88b9458e4b0e88)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wsk::buf_t), "_WSK_DATA_INDICATION.Buffer", buffer, 0x40, 0xc0, true, 0xe5c5457d96b8706e)
#else
#define _m00
#define _m01
#endif