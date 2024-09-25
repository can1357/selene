#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::pnppower_event_callbacks_t), "PnpPowerInit.PnpPowerEventCallbacks", pnp_power_event_callbacks, 0x0, 0x80, true, 0xe4ce981be6b1c5ab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::power_policy_event_callbacks_t), "PnpPowerInit.PolicyEventCallbacks", policy_event_callbacks, 0x480, 0x0, true, 0x8d746893fc47e665)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::pnp_state_callback_t*), "PnpPowerInit.PnpStateCallbacks", pnp_state_callbacks, 0x680, 0x40, true, 0x20dbc75f335fd514)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_state_callback_t*), "PnpPowerInit.PowerStateCallbacks", power_state_callbacks, 0x6c0, 0x40, true, 0x302cf72e84331d44)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::power_policy_state_callback_t*), "PnpPowerInit.PowerPolicyStateCallbacks", power_policy_state_callbacks, 0x700, 0x40, true, 0x6721c879616cac8c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "PnpPowerInit.PowerPolicyOwner", power_policy_owner, 0x740, 0x20, true, 0x14ea6f678a39be16)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif