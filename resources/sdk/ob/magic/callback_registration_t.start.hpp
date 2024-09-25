#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OB_CALLBACK_REGISTRATION.Version", version, 0x0, 0x10, true, 0x83c76303d1374b3a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_OB_CALLBACK_REGISTRATION.OperationRegistrationCount", operation_registration_count, 0x10, 0x10, true, 0x9e5a0f346f904384)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_OB_CALLBACK_REGISTRATION.Altitude", altitude, 0x40, 0x80, true, 0x8f76da2895efd014)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_OB_CALLBACK_REGISTRATION.RegistrationContext", registration_context, 0xc0, 0x40, true, 0x1d0f55e2ced651a2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct ob::operation_registration_t*), "_OB_CALLBACK_REGISTRATION.OperationRegistration", operation_registration, 0x100, 0x40, true, 0xdd65ce5f46893afe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif