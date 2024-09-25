#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "VOLUME_BITMAP_BUFFER.StartingLcn", starting_lcn, 0x0, 0x40, true, 0xd8678c086dee694a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "VOLUME_BITMAP_BUFFER.BitmapSize", bitmap_size, 0x40, 0x40, true, 0x56667e37f48f26a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "VOLUME_BITMAP_BUFFER.Buffer", buffer, 0x80, 0x8, true, 0xb2fe24fab30d59f0)
#else
#define _m00
#define _m01
#define _m02
#endif