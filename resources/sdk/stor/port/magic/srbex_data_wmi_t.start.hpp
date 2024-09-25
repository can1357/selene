#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::srbexdatatype_t), "_SRBEX_DATA_WMI.Type", type, 0x0, 0x20, true, 0x5843a4ef73a02d26)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRBEX_DATA_WMI.Length", length, 0x20, 0x20, true, 0xd25f75ac8edcc71c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRBEX_DATA_WMI.WMISubFunction", wmi_sub_function, 0x40, 0x8, true, 0x6a463f824fef97dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRBEX_DATA_WMI.WMIFlags", wmi_flags, 0x48, 0x8, true, 0xdaeccadd6651dfe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SRBEX_DATA_WMI.DataPath", data_path, 0x80, 0x40, true, 0x9674786af32b071c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif