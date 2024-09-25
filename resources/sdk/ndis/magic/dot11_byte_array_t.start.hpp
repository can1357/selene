#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "DOT11_BYTE_ARRAY.Header", header, 0x0, 0x20, true, 0x604137f8542f925c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_BYTE_ARRAY.uNumOfBytes", u_num_of_bytes, 0x20, 0x20, true, 0xc33b3b85afb97ffd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DOT11_BYTE_ARRAY.uTotalNumOfBytes", u_total_num_of_bytes, 0x40, 0x20, true, 0x904aae24c2c36579)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "DOT11_BYTE_ARRAY.ucBuffer", uc_buffer, 0x60, 0x8, true, 0xac7602d2f8772943)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif