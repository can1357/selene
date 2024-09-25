#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE.Param1", param1, 0x0, 0x40, true, 0x29a23613e883a856)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE.Param2", param2, 0x40, 0x40, true, 0xa3d8632c8739068a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE.Param3", param3, 0x80, 0x40, true, 0x815003caf93b71eb)
#else
#define _m00
#define _m01
#define _m02
#endif