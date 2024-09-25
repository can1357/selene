#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::interface_t), "_SECURE_DRIVER_INTERFACE.InterfaceHeader", interface_header, 0x0, 0x0, true, 0x6f23839757c72d84)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<struct nt::kprocess_t*(void*)>*, sdk::function<struct nt::eprocess_t*(void*)>*>), "_SECURE_DRIVER_INTERFACE.ProcessReference", process_reference, 0x100, 0x40, true, 0x3f3c0c187a42ef6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<void(void*, struct nt::kprocess_t*)>*, sdk::function<void(void*, struct nt::eprocess_t*)>*>), "_SECURE_DRIVER_INTERFACE.ProcessDereference", process_dereference, 0x140, 0x40, true, 0x1bcefe51e8ae789b)
#else
#define _m00
#define _m01
#define _m02
#endif