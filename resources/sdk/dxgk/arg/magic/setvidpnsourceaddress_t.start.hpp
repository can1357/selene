#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESS.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x277960c5d3e7f8a6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESS.PrimarySegment", primary_segment, 0x20, 0x20, true, 0x55cdf33f00ca8a67)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_SETVIDPNSOURCEADDRESS.PrimaryAddress", primary_address, 0x40, 0x40, true, 0x29cac77d648135ca)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SETVIDPNSOURCEADDRESS.hAllocation", h_allocation, 0x80, 0x40, true, 0x11ade815a2378f99)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESS.ContextCount", context_count, 0xc0, 0x20, true, 0xe938dc67ec30801a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 65>), "_DXGKARG_SETVIDPNSOURCEADDRESS.Context", context, 0x100, 0x40, true, 0x3eab4d6596f37b4f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::setvidpnsourceaddress_flags_t), "_DXGKARG_SETVIDPNSOURCEADDRESS.Flags", flags, 0x1140, 0x20, true, 0x8c8b137a98c0e01c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESS.Duration", duration, 0x1160, 0x20, true, 0xbf13ecd75ceb4893)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::primarydata_t, 64>), "_DXGKARG_SETVIDPNSOURCEADDRESS.PrimaryData", primary_data, 0x1180, 0x0, true, 0xc4761b6901417c90)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIDPNSOURCEADDRESS.DriverPrivateDataSize", driver_private_data_size, 0x4180, 0x20, true, 0x2a31e2fd7068cb11)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SETVIDPNSOURCEADDRESS.pDriverPrivateData", p_driver_private_data, 0x41c0, 0x40, true, 0x7c8890910482f7cd)
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