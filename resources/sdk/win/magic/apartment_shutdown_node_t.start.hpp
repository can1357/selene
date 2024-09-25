#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(apartment_shutdown_registration_cookie_t ), "ApartmentShutdownNode.cookie", cookie, 0x100, 0x40, true, 0x8e6c0e1e5a83698a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "ApartmentShutdownNode.bCallbackInvoked", b_callback_invoked, 0x180, 0x8, true, 0xab4a759198882b83)
#else
#define _m00
#define _m01
#endif