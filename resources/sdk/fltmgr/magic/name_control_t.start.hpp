#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_NAME_CONTROL.Name", name, 0x0, 0x80, true, 0xac4dc01194dd826e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CONTROL.BufferSize", buffer_size, 0xa0, 0x20, true, 0x9a6a9c9bb4ecd07d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NAME_CONTROL.ShareNameLength", share_name_length, 0xc0, 0x10, true, 0x3badd54c0f940185)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NAME_CONTROL.StreamNameLength", stream_name_length, 0xd0, 0x10, true, 0x71d25e1770682c20)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 254>), "_NAME_CONTROL.SmallBuffer", small_buffer, 0xe0, 0xf0, true, 0x262384103275dc92)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NAME_CONTROL.Flags", flags, 0x80, 0x20, true, 0xbf5d9c3cc8dff686)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NAME_CONTROL.AllocatedBuffer", allocated_buffer, 0x0, 0x0, false, 0x17861509168626fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif