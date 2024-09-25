#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_AUTH_CHALLENGE.Header", header, 0x0, 0x20, true, 0x2b212bc77f3b2a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::auth_challenge_t), "_NDIS_WWAN_AUTH_CHALLENGE.AuthChallenge", auth_challenge, 0x20, 0x40, true, 0x5ee5858418d124a0)
#else
#define _m00
#define _m01
#endif