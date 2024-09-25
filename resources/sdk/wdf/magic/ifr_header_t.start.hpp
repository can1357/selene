#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WDF_IFR_HEADER.Guid", guid, 0x0, 0x80, true, 0x24aaf4a36e126931)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_WDF_IFR_HEADER.Base", base, 0x80, 0x40, true, 0x4a178f710c458634)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IFR_HEADER.Size", size, 0xc0, 0x20, true, 0xaff1e9fcf2c5ed8b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::ifr_offset_t), "_WDF_IFR_HEADER.Offset", offset, 0xe0, 0x20, true, 0x931f15099b0c4090)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_WDF_IFR_HEADER.Sequence", sequence, 0x100, 0x20, true, 0xf32efb91581fc898)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_WDF_IFR_HEADER.DriverName", driver_name, 0x120, 0x0, true, 0x592ab66db1329bc5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif