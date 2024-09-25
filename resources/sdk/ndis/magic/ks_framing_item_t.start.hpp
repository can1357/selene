#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KS_FRAMING_ITEM.MemoryType", memory_type, 0x0, 0x0, false, 0x17c619b1f69ddcdb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "KS_FRAMING_ITEM.BusType", bus_type, 0x0, 0x0, false, 0xe6cc5cd58ff348d9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_ITEM.MemoryFlags", memory_flags, 0x0, 0x0, false, 0x13cba4bd5e6a18a5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_ITEM.BusFlags", bus_flags, 0x0, 0x0, false, 0x1995ab38d47cef6d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_ITEM.Flags", flags, 0x0, 0x0, false, 0xf5bc10b2dc0d9198)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_ITEM.Frames", frames, 0x0, 0x0, false, 0xdf33a0e0bce9008c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_ITEM.FileAlignment", file_alignment, 0x0, 0x0, false, 0xfd2cd56b7ff2f659)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "KS_FRAMING_ITEM.FramePitch", frame_pitch, 0x0, 0x0, false, 0x14ace853522f9ff9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "KS_FRAMING_ITEM.MemoryTypeWeight", memory_type_weight, 0x0, 0x0, false, 0x31673ca5ea7fc4bf)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ks_framing_range_t), "KS_FRAMING_ITEM.PhysicalRange", physical_range, 0x0, 0x0, false, 0xdb004c6a74fb4bdb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ks_framing_range_weighted_t), "KS_FRAMING_ITEM.FramingRange", framing_range, 0x0, 0x0, false, 0x74c13c7cfb045ea6)
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