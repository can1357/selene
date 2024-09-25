#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSSTREAM_HEADER.Size", size, 0x0, 0x0, false, 0x6a3df378e06e783f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSSTREAM_HEADER.TypeSpecificFlags", type_specific_flags, 0x0, 0x0, false, 0x241a5a3414f2eacd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::kstime_t), "KSSTREAM_HEADER.PresentationTime", presentation_time, 0x0, 0x0, false, 0x6ae39f1319716911)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "KSSTREAM_HEADER.Duration", duration, 0x0, 0x0, false, 0x6419ec07c1013fe1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSSTREAM_HEADER.FrameExtent", frame_extent, 0x0, 0x0, false, 0xc04f12c833424dce)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSSTREAM_HEADER.DataUsed", data_used, 0x0, 0x0, false, 0x78b4914420e0a74b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "KSSTREAM_HEADER.Data", data, 0x0, 0x0, false, 0xcc80143fe4afc193)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSSTREAM_HEADER.OptionsFlags", options_flags, 0x0, 0x0, false, 0x6fe1ccde4e68dc86)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif