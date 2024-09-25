#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_MCA_POS_DATA.AdapterId", adapter_id, 0x0, 0x10, true, 0x453f9bada4975bdd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_MCA_POS_DATA.PosData1", pos_data1, 0x10, 0x8, true, 0xe91b6ad2798af37c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_MCA_POS_DATA.PosData2", pos_data2, 0x18, 0x8, true, 0xe4d750d777e4ad62)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_MCA_POS_DATA.PosData3", pos_data3, 0x20, 0x8, true, 0x2a394c1a3cb8f468)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CM_MCA_POS_DATA.PosData4", pos_data4, 0x28, 0x8, true, 0x9c43155bc327072d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif