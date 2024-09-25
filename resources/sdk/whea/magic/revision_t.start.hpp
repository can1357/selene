#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_REVISION.MinorRevision", minor_revision, 0x0, 0x8, true, 0x4d4a69a24656aa77)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_REVISION.MajorRevision", major_revision, 0x8, 0x8, true, 0x44266888c2969501)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_REVISION.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x5ffe9f2f12ead073)
#else
#define _m00
#define _m01
#define _m02
#endif