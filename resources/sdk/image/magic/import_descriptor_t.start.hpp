#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_IMPORT_DESCRIPTOR.Characteristics", characteristics, 0x0, 0x20, true, 0xa4692b8f04facfb2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_IMPORT_DESCRIPTOR.OriginalFirstThunk", original_first_thunk, 0x0, 0x20, true, 0xdac8ab7f38b9438e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_IMPORT_DESCRIPTOR.TimeDateStamp", time_date_stamp, 0x20, 0x20, true, 0x89a336c52510f5b0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_IMPORT_DESCRIPTOR.ForwarderChain", forwarder_chain, 0x40, 0x20, true, 0x21da1ea435187d49)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_IMPORT_DESCRIPTOR.Name", name, 0x60, 0x20, true, 0x121bd707a27ecf5e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_IMPORT_DESCRIPTOR.FirstThunk", first_thunk, 0x80, 0x20, true, 0x1335bdc3c5594197)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif