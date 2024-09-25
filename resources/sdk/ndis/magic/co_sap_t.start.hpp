#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CO_SAP.SapType", sap_type, 0x0, 0x20, true, 0x586589af3398e39f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CO_SAP.SapLength", sap_length, 0x20, 0x20, true, 0x63b99617bd94803b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "CO_SAP.Sap", sap, 0x40, 0x8, true, 0x1fa8512a39ee21e8)
#else
#define _m00
#define _m01
#define _m02
#endif