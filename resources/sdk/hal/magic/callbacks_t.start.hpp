#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::callback_object_t*), "_HAL_CALLBACKS.SetSystemInformation", set_system_information, 0x0, 0x40, true, 0x3d191e6808cff062)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::callback_object_t*), "_HAL_CALLBACKS.BusCheck", bus_check, 0x40, 0x40, true, 0x842eeacb20a62889)
#else
#define _m00
#define _m01
#endif