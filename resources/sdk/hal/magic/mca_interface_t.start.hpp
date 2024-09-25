#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_HAL_MCA_INTERFACE.Lock", lock, 0x0, 0x40, true, 0x62209edc6f910f1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_HAL_MCA_INTERFACE.Unlock", unlock, 0x40, 0x40, true, 0x20aadfb632aeb369)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint8_t, void*)>*), "_HAL_MCA_INTERFACE.ReadRegister", read_register, 0x80, 0x40, true, 0xfc40c19e332290f5)
#else
#define _m00
#define _m01
#define _m02
#endif