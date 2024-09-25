#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSALLOCATOR_FRAMING.OptionsFlags", options_flags, 0x0, 0x0, false, 0xcc8da3d2c52731bc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSALLOCATOR_FRAMING.RequirementsFlags", requirements_flags, 0x0, 0x0, false, 0xcffbfa2035673a35)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "KSALLOCATOR_FRAMING.PoolType", pool_type, 0x0, 0x0, false, 0x167ba28cb8beb184)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSALLOCATOR_FRAMING.Frames", frames, 0x0, 0x0, false, 0x9ed166b4f01b7ae4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSALLOCATOR_FRAMING.FrameSize", frame_size, 0x0, 0x0, false, 0xc90f03a35551f672)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KSALLOCATOR_FRAMING.FileAlignment", file_alignment, 0x0, 0x0, false, 0x16abdd53419939a8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "KSALLOCATOR_FRAMING.FramePitch", frame_pitch, 0x0, 0x0, false, 0x7fc93c55dad875cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif