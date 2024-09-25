#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::node_header_t), "_WNF_STATE_DATA.Header", header, 0x0, 0x20, true, 0x687799ad748fba61)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_STATE_DATA.AllocatedSize", allocated_size, 0x20, 0x20, true, 0x77ef913b1d79a3ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_STATE_DATA.DataSize", data_size, 0x40, 0x20, true, 0x37518bbdee602332)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_STATE_DATA.ChangeStamp", change_stamp, 0x60, 0x20, true, 0x207786c130d28012)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif