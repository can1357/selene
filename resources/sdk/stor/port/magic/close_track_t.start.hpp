#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLOSE_TRACK.OperationCode", operation_code, 0x0, 0x8, true, 0xd43779b4189fe4de)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLOSE_TRACK.Immediate", immediate, 0x8, 0x1, true, 0x64d677f022447b21, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLOSE_TRACK.Track", track, 0x10, 0x1, true, 0x17f76400eb7f62e7, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CLOSE_TRACK.Session", session, 0x11, 0x1, true, 0x157f97dee5e2bed1, 1, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_CLOSE_TRACK.TrackNumber", track_number, 0x20, 0x10, true, 0x7732d8fe776ebd2b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLOSE_TRACK.Control", control, 0x48, 0x8, true, 0xeb1ae71bca334cca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif