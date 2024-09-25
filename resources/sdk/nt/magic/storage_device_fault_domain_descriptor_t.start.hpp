#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_FAULT_DOMAIN_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0x33b9928f7885cbb7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_FAULT_DOMAIN_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xd62c77fc79c4b22f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_FAULT_DOMAIN_DESCRIPTOR.NumberOfFaultDomains", number_of_fault_domains, 0x40, 0x20, true, 0xb55910ea6e42b4bb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::guid_t, 1>), "_STORAGE_DEVICE_FAULT_DOMAIN_DESCRIPTOR.FaultDomainIds", fault_domain_ids, 0x60, 0x80, true, 0x23fbb8bf371a389c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif