#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_MEDIA_CHANGE_CONTEXT.MediaChangeCount", media_change_count, 0x0, 0x20, true, 0xaf412d17116d6b19)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_MEDIA_CHANGE_CONTEXT.NewState", new_state, 0x20, 0x20, true, 0x36e3b7f281cd66a9)
#else
#define _m00
#define _m01
#endif