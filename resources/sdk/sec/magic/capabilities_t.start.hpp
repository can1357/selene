#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SECURITY_CAPABILITIES.AppContainerSid", app_container_sid, 0x0, 0x40, true, 0x169e0279dada4e53)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_t*), "_SECURITY_CAPABILITIES.Capabilities", capabilities, 0x40, 0x40, true, 0x52bd5de4c58ed06b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECURITY_CAPABILITIES.CapabilityCount", capability_count, 0x80, 0x20, true, 0xc1817d24c354adf0)
#else
#define _m00
#define _m01
#define _m02
#endif