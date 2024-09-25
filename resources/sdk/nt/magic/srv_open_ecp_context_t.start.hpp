#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_SRV_OPEN_ECP_CONTEXT.ShareName", share_name, 0x0, 0x40, true, 0x16a3033418bdd3e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sockaddr_storage_t*), "_SRV_OPEN_ECP_CONTEXT.SocketAddress", socket_address, 0x40, 0x40, true, 0x6d3ebcb7f792e3cc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRV_OPEN_ECP_CONTEXT.OplockBlockState", oplock_block_state, 0x80, 0x8, true, 0x7b67bfadb5a18ea4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRV_OPEN_ECP_CONTEXT.OplockAppState", oplock_app_state, 0x88, 0x8, true, 0xff56f4ef089a8cd7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SRV_OPEN_ECP_CONTEXT.OplockFinalState", oplock_final_state, 0x90, 0x8, true, 0x6634cae3bd4e805c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SRV_OPEN_ECP_CONTEXT.Version", version, 0xa0, 0x10, true, 0xf8740f562b00b1b7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::srv_instance_type_t), "_SRV_OPEN_ECP_CONTEXT.InstanceType", instance_type, 0xc0, 0x20, true, 0x8e3065ab905d41be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif