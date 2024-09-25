#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TRIAGE_OBJECT_HEADER.Type", type, 0x0, 0x8, true, 0xde9f296a58becc87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TRIAGE_OBJECT_HEADER.Revision", revision, 0x8, 0x8, true, 0x5ab0efc7163a62e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_TRIAGE_OBJECT_HEADER.Size", size, 0x10, 0x10, true, 0xc2daa84f77bfb82f)
#else
#define _m00
#define _m01
#define _m02
#endif