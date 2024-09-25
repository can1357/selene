#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_EXTENDED_ARGUMENTS.Modify.Modifier", modifier, 0x0, 0x20, true, 0x84f17a3ef877ecc4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_modify_t), "_EXTENDED_ARGUMENTS.Modify", modify, 0x0, 0x20, true, 0xf5b30b3707372bd9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXTENDED_ARGUMENTS.Synchronous.TransferPeriod", transfer_period, 0x0, 0x8, true, 0xf022c73784d40e65)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXTENDED_ARGUMENTS.Synchronous.ReqAckOffset", req_ack_offset, 0x8, 0x8, true, 0x1211941114a0e2f8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_synchronous_t), "_EXTENDED_ARGUMENTS.Synchronous", synchronous, 0x0, 0x10, true, 0x3dc4fa9c061739ed)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXTENDED_ARGUMENTS.Wide.Width", width, 0x0, 0x8, true, 0xd655f752ec016949)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_wide_t), "_EXTENDED_ARGUMENTS.Wide", wide, 0x0, 0x8, true, 0x8296a975f8ddf3f1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif