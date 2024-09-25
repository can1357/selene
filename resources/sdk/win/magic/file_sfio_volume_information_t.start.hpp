#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_SFIO_VOLUME_INFORMATION.MaximumRequestsPerPeriod", maximum_requests_per_period, 0x0, 0x20, true, 0x5c5b4699042a0f54)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_SFIO_VOLUME_INFORMATION.MinimumPeriod", minimum_period, 0x20, 0x20, true, 0xf6f4a3364370d889)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_SFIO_VOLUME_INFORMATION.MinimumTransferSize", minimum_transfer_size, 0x40, 0x20, true, 0x65df8645bf0892bb)
#else
#define _m00
#define _m01
#define _m02
#endif