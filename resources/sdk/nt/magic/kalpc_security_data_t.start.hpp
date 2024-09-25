#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::handle_table_t*), "_KALPC_SECURITY_DATA.HandleTable", handle_table, 0x0, 0x40, true, 0x4220230ae7246cda)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KALPC_SECURITY_DATA.ContextHandle", context_handle, 0x40, 0x40, true, 0x6c6b7d4e48940842)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_KALPC_SECURITY_DATA.OwningProcess", owning_process, 0x80, 0x40, true, 0xdcd28cb53382b771)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct alpc::port_t*), "_KALPC_SECURITY_DATA.OwnerPort", owner_port, 0xc0, 0x40, true, 0x3420d2275cbb4aec)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::client_context_t), "_KALPC_SECURITY_DATA.DynamicSecurity", dynamic_security, 0x100, 0x40, true, 0x792504c066f45b22)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_SECURITY_DATA.Revoked", revoked, 0x340, 0x1, true, 0xbe47dcb393b2a9e0, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KALPC_SECURITY_DATA.Impersonated", impersonated, 0x341, 0x1, true, 0x84b3b5689e0e3467, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif