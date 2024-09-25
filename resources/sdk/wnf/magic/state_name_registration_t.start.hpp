#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WNF_STATE_NAME_REGISTRATION.MaxStateSize", max_state_size, 0x0, 0x20, true, 0x3de05ff56558a669)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct wnf::type_id_t*), "_WNF_STATE_NAME_REGISTRATION.TypeId", type_id, 0x40, 0x40, true, 0x9651d1cc110297bf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::descriptor_t*), "_WNF_STATE_NAME_REGISTRATION.SecurityDescriptor", security_descriptor, 0x80, 0x40, true, 0xc5eb07ed9e962b15)
#else
#define _m00
#define _m01
#define _m02
#endif