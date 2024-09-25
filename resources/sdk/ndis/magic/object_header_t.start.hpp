#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_OBJECT_HEADER.Type", type, 0x0, 0x8, true, 0x15eaa0bf3fe96eed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_OBJECT_HEADER.Revision", revision, 0x8, 0x8, true, 0x98f05e76c763f05)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_OBJECT_HEADER.Size", size, 0x10, 0x10, true, 0x75b496f80e046726)
#else
#define _m00
#define _m01
#define _m02
#endif