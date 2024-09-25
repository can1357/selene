#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::kspin_t*), "_KSPROCESSPIN.Pin", pin, 0x0, 0x0, false, 0x9e9d2aa779339b6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksstream_pointer_t*), "_KSPROCESSPIN.StreamPointer", stream_pointer, 0x0, 0x0, false, 0xbcf71836e6231f87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksprocesspin_t*), "_KSPROCESSPIN.InPlaceCounterpart", in_place_counterpart, 0x0, 0x0, false, 0x6250de14e16d97b2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksprocesspin_t*), "_KSPROCESSPIN.DelegateBranch", delegate_branch, 0x0, 0x0, false, 0xe1420095be847ba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ksprocesspin_t*), "_KSPROCESSPIN.CopySource", copy_source, 0x0, 0x0, false, 0x66f1be803c06b385)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KSPROCESSPIN.Data", data, 0x0, 0x0, false, 0xb1313526d00761b2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSPROCESSPIN.BytesAvailable", bytes_available, 0x0, 0x0, false, 0x6ca59b32b228344a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSPROCESSPIN.BytesUsed", bytes_used, 0x0, 0x0, false, 0xffcdfe63280c9591)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSPROCESSPIN.Flags", flags, 0x0, 0x0, false, 0xc5f2ad5f696d89ec)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSPROCESSPIN.Terminate", terminate, 0x0, 0x0, false, 0x80b106a2b1220b1f)
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
#endif