#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wwan::auth_method_t), "_WWAN_AUTH_CHALLENGE.AuthMethod", auth_method, 0x0, 0x20, true, 0xdd73049b47abd25b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::auth_sim_challenge_t), "_WWAN_AUTH_CHALLENGE.AuthSim", auth_sim, 0x20, 0xa0, true, 0x92e581784bacbef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::auth_aka_challenge_t), "_WWAN_AUTH_CHALLENGE.AuthAka", auth_aka, 0x20, 0x0, true, 0x45d11650eaa6f9a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::auth_akap_challenge_t), "_WWAN_AUTH_CHALLENGE.AuthAkap", auth_akap, 0x20, 0x20, true, 0xcc6868fb1259f4b4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif