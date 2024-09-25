#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WMI_TXR.InitialTime", initial_time, 0x0, 0x40, true, 0x4821fb4bfdcce7e8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WMI_TXR.TxRGUID", tx_rguid, 0x40, 0x80, true, 0xd059c06238723013)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_TXR.Status", status, 0xc0, 0x20, true, 0x9673a424b0e1868a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_TXR.UowCount", uow_count, 0xe0, 0x20, true, 0x468786387a4dcee1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_WMI_TXR.Hive", hive, 0x100, 0x10, true, 0x7f13cfc327a4c1d7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif