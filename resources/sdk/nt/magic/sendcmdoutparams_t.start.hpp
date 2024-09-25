#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SENDCMDOUTPARAMS.cBufferSize", c_buffer_size, 0x0, 0x20, true, 0xe8f6bac4d5ed624c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::driverstatus_t), "_SENDCMDOUTPARAMS.DriverStatus", driver_status, 0x20, 0x60, true, 0x86c7aece030ca269)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SENDCMDOUTPARAMS.bBuffer", b_buffer, 0x80, 0x8, true, 0xaae4f8cb91d39cac)
#else
#define _m00
#define _m01
#define _m02
#endif