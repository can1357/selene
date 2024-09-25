#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_array_f_value_t), "CMachineGlobalObjectTable._afvMgotList", afv_mgot_list, 0x40, 0xc0, true, 0xeecfa60b9973da2c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CMachineGlobalObjectTable._wSigMgotItem", w_sig_mgot_item, 0x100, 0x10, true, 0x5f622bab75b43190)
#else
#define _m00
#define _m01
#endif