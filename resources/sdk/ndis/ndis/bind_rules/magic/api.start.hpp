#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckMissingModifyingFilter@BindRules@Ndis$ndis.sys", 0xfcbbc, 0x0, true, 0x287b263f4b599780)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PauseMiniportStack@BindRules@Ndis$ndis.sys", 0xfb9e8, 0x0, true, 0xd7291e1a23ac4df)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$Apply@BindRules@Ndis$ndis.sys", 0xfb92c, 0x0, true, 0x90edac11bb05291e)
#define _m3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckForDriverLoaded@BindRules@Ndis$ndis.sys", 0xfcff0, 0x0, true, 0xee8592cba9702e5a)
#define _m4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckForVBusDependency@BindRules@Ndis$ndis.sys", 0xfcf10, 0x0, true, 0x79e9f829d22293bf)
#define _m5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CheckMissingMandatoryFilter@BindRules@Ndis$ndis.sys", 0xfc830, 0x0, true, 0x36e23171fca9b3d2)
#define _m6(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$CoalesceFilterAttachDuringBoot@BindRules@Ndis$ndis.sys", 0xfc6d8, 0x0, true, 0xdcb5c1d03890f159)
#define _m7(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis$ndis.sys", 0xfbff0, 0x0, true, 0xc084cec3ec71ff39)
#define _m8(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$PauseNeededForBind@BindRules@Ndis$ndis.sys", 0xfbbac, 0x0, true, 0x86d60cf541d12305)
#define _m9(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReEnableTemporaryUnbind@BindRules@Ndis$ndis.sys", 0xfd35c, 0x0, true, 0x8ac8a522ad5fb11a)
#define _n0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ReStartTemporaryPause@BindRules@Ndis$ndis.sys", 0xfd1d8, 0x0, true, 0x61d6ed68612681fb)
#define _n1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis$ndis.sys", 0xfca84, 0x0, true, 0x9ff6ec91a23e10b1)
#define _n2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnbindIncompatibleDriversForMacChange@BindRules@Ndis$ndis.sys", 0xfcce4, 0x0, true, 0x71db9d8c25a33ead)
#define _n3(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnbindMiniportStack@BindRules@Ndis$ndis.sys", 0xfbde0, 0x0, true, 0x2029fab459cd1a57)
#define _n4(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnbindOnAttach@BindRules@Ndis$ndis.sys", 0xfc428, 0x0, true, 0xbaa1fbaa6c88a288)
#define _n5(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$UnbindOnDetach@BindRules@Ndis$ndis.sys", 0xfc2c4, 0x0, true, 0x28e8680c4c7b30d4)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#define _m3(...) __VA_ARGS__
#define _m4(...) __VA_ARGS__
#define _m5(...) __VA_ARGS__
#define _m6(...) __VA_ARGS__
#define _m7(...) __VA_ARGS__
#define _m8(...) __VA_ARGS__
#define _m9(...) __VA_ARGS__
#define _n0(...) __VA_ARGS__
#define _n1(...) __VA_ARGS__
#define _n2(...) __VA_ARGS__
#define _n3(...) __VA_ARGS__
#define _n4(...) __VA_ARGS__
#define _n5(...) __VA_ARGS__
#endif